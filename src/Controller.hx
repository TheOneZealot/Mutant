import nape.geom.Vec2;
import nape.phys.Body;
import nape.phys.Material;
import nape.phys.GravMassMode;
import nape.callbacks.InteractionCallback;
import nape.dynamics.CollisionArbiter;
import luxe.Vector;
import luxe.Sprite;
import luxe.utils.Maths;
import luxe.components.sprite.SpriteAnimation;
import luxe.components.physics.nape.BoxCollider;

class Controller extends luxe.Component
{
	public static var zero_friction(get, null):Material;
	public static var normal_friction(get, null):Material;

	var _body:Body;
	public var body(get, null):Body;
	var _animation:SpriteAnimation;
	public var animation(get, null):SpriteAnimation;

	var _jumped_this_frame:Bool = false;
	var _grounded:Bool = false;
	var _slope_angle:Float = 0;

	public var acceleration:Float;
	public var max_speed:Float;
	public var jump_impulse:Float;

	public function new()
	{
		super();

		name = "controller";

		acceleration = 1024;
		max_speed = 128;
		jump_impulse = 128;
	}

	override function onadded()
	{
		body.allowRotation = false;
		entity.events.listen("begin.collide.terrain", begincollideterrain);
		entity.events.listen("ongoing.collide.terrain", ongoingcollideterrain);
		entity.events.listen("end.collide.terrain", endcollideterrain);
	}

	override function update(dt:Float)
	{
		_jumped_this_frame = false;

		body.setShapeMaterials(normal_friction);
	}

	public function move(direction:Int)
	{
		//setup local variables
		var dt:Float = Luxe.tick_delta;
		var sprite:Sprite = cast entity;

		if (direction == -1 && sprite != null) sprite.flipx = true;
		else if (direction == 1 && sprite != null) sprite.flipx = false;

		body.setShapeMaterials(zero_friction);
		body.velocity.x = Maths.clamp(body.velocity.x + acceleration * dt * direction, -max_speed, max_speed);
		if (_grounded && !_jumped_this_frame) body.velocity.angle = Maths.radians(_slope_angle + 90 * direction);
	}

	public function jump()
	{
		if (!_grounded) return;

		_jumped_this_frame = true;
		_grounded = false;
		body.velocity.y = -jump_impulse;
	}

	function begincollideterrain(cb:InteractionCallback)
	{
		_grounded = false;
		for (arbiter in cb.arbiters)
		{
			var collision_arbiter:CollisionArbiter = cast arbiter;
			if (collision_arbiter == null) continue;

			var normal:Vec2 = collision_arbiter.normal;

			if (normal.y < 0)
			{
				_grounded = true;
			}
		}
	}

	function ongoingcollideterrain(cb:InteractionCallback)
	{
		_grounded = false;
		for (arbiter in cb.arbiters)
		{
			var collision_arbiter:CollisionArbiter = cast arbiter;
			if (collision_arbiter == null) continue;

			var normal:Vec2 = collision_arbiter.normal;

			if (normal.y < 0 && !_jumped_this_frame)
			{
				_grounded = true;
				_slope_angle = Maths.degrees(normal.angle);
			}
		}
	}

	function endcollideterrain(cb:InteractionCallback)
	{
		_grounded = false;
	}

	public static function get_zero_friction():Material
	{
		return new Material(0, 0, 0);
	}

	public static function get_normal_friction():Material
	{
		return new Material(0, 4, 8);
	}

	public function get_body():Body
	{
		if (_body == null) _body = get("collider").body;
		return _body;
	}

	public function get_animation():SpriteAnimation
	{
		if (_animation == null) _animation = get("animation");
		return _animation;
	}
}