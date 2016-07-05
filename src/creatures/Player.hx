package creatures;

import luxe.Vector;
import luxe.components.sprite.SpriteAnimation;
import luxe.Log.*;

import phoenix.Texture;

class Player extends Creature
{
	public var action_claw:Action;

	public var level:Int = 1;
	public var exp:Int = 0;
	public var exp_level:Int = 1;
	public var talent_points:Int = 1;

	public function new(_pos:Vector, _name:String)
	{
		// setup local variables
		var anim_object = Luxe.resources.json('assets/animations/Creature_Player.json').asset.json;

		// setup creature
		super(_name, _pos, new Vector(16, 32), new Vector(12, 30));
		texture = Luxe.resources.texture('assets/textures/Creature_Player.png');
		texture.filter_min = texture.filter_mag = FilterType.nearest;
		depth += 1;

		// setup animation
		add(animation = new SpriteAnimation({name: "animation"}));
		animation.add_from_json_object(anim_object);
		animation.animation = "idle";
		animation.play();

		// setup controller
		add(controller = new controllers.PlayerController());
		controller.acceleration = 2048;
		controller.max_speed = 128;
		controller.jump_impulse = 256;

		// setup actions
		actions.push(action_claw = new actions.Claw({
			name: 'claw',
			owner: this,
		}));

		// setup events
		events.listen('exp.gain.kill', function(args) {
			exp += args.amount;
			log('$name recieved ${args.amount} exp from killing ${args.source.nam} $exp of $exp_level to level');
			if (exp >= exp_level)
			{
				events.fire('level');
			}
		});
		events.listen('level', function(args) {
			level += 1;
			exp -= exp_level;
			exp_level += 1;
			talent_points += 1;
			log('$name leveled up to level $level and has $talent_points talent points to spend');
		});
	}

	override function update(dt:Float)
	{
		super.update(dt);

		// flip sprite
		if (controller.body.velocity.x > 0) flipx = false;
		else if (controller.body.velocity.x < 0) flipx = true;
		// animation control
		if (controller.grounded)
		{
			if (speed_x > 16)
			{
				set_animation('run');
			}
			else if (speed_x < 16)
			{
				set_animation('idle');
			}
		}
		else
		{
			set_animation('fall');
		}
	}
}