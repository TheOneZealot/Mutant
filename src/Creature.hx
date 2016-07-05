import luxe.Vector;
import luxe.Component;
import luxe.components.sprite.SpriteAnimation;
import luxe.components.physics.nape.NapeBody;
import luxe.components.physics.nape.BoxCollider;
import luxe.utils.Maths;
import luxe.Log.*;

import phoenix.Texture;

import nape.phys.BodyType;
import nape.phys.Body;
import nape.shape.Polygon;
import nape.shape.Circle;
import nape.shape.Shape;
import nape.geom.Vec2;

class Creature extends luxe.Sprite
{
	public var controller:Controller;
	public var animation:SpriteAnimation;
	public var collider:BoxCollider;
	public var body:Body;

	public var health:Int = 10;
	public var max_health:Int = 10;
	public var exp_on_kill:Int = 0;

	public var actions:Array<Action>;

	public var facing(get, null):Int;
	public var speed_x(get, null):Float;

	var default_anim_speed:Float;

	public function new(_name:String, _pos:Vector, _size:Vector, _bounds:Vector)
	{
		// setup local variables
		var radius:Float = _bounds.x / 2;
		var half_height:Float = _bounds.y / 2;
		var delta:Float = (_size.y - _bounds.y) / 2;

		// call sprite constructor
		super({
			name: _name,
			pos: _pos,
			size: _size,
			depth: 20
		});

		geometry.translate(new Vector(0, -delta));

		// setup collision
		add(collider = new BoxCollider({
			name: 'collider',
			x: _pos.x, y: _pos.y,
			w: _bounds.x, h: _bounds.y,
			body_type: BodyType.KINEMATIC
		}));
		body = collider.body;
		body.cbTypes.add(Physics.types.creature);
		body.userData.entity = this;
		body.allowRotation = false;

		// init actions
		actions = [];

		// setup events
		GameState.events.listen('paused.enter', function (_) {
			if (animation != null) animation.stop();
		});
		GameState.events.listen('paused.leave', function (_) {
			if (animation != null) animation.play();
		});

		events.listen('health.heal.*', health_heal_any);
		events.listen('health.damage.*', health_damage_any);
		events.listen('kill', kill);
	}

	override function update(dt:Float)
	{
		if (GameState.paused) return;
	}

	public function set_animation(anim_name:String)
	{
		assertnull(animation, 'cant set animation because the component equals null');

		if (animation.animation != anim_name)
		{
			animation.animation = anim_name;
			default_anim_speed = animation.speed;
		}
	}

	function health_heal_any(args)
	{
		health = Maths.clampi(health + args.amount, 0, max_health);
		log('$name healed ${args.amount} health $health of $max_health left');
	}

	function health_damage_any(args)
	{
		health = Maths.clampi(health - args.amount, 0, max_health);
		log('$name took ${args.amount} damage $health of $max_health left');
		if (health <= 0)
		{
			// kill next frame to avoid null references
			Luxe.next(function() { events.fire('kill', {killer: args.attacker}); });
		}
	}

	function kill(args)
	{
		log('$name died or was already dead');
		if (name == 'player')
		{
			Luxe.events.fire('reset');
		}
		else
		{
			var creature:Creature = cast args.killer;
			if (creature != null)
			{
				creature.events.fire('exp.gain.kill', {amount: exp_on_kill, source: this});
			}

			destroy();
		}
	}

	public function get_facing():Int { return flipx ? -1 : 1; }
	public function get_speed_x():Float { return Math.abs(controller.body.velocity.x); }
}