import nape.geom.Vec2;
import nape.geom.AABB;
import nape.geom.Ray;
import nape.geom.RayResult;
import nape.geom.ConvexResult;
import nape.phys.Body;
import nape.phys.Material;
import nape.phys.GravMassMode;
import nape.callbacks.InteractionCallback;
import nape.dynamics.CollisionArbiter;
import nape.space.Space;
import luxe.Vector;
import luxe.Color;
import luxe.Sprite;
import luxe.utils.Maths;
import luxe.components.sprite.SpriteAnimation;
import luxe.components.physics.nape.BoxCollider;

class Controller extends luxe.Component
{
	public static var zero_friction(get, null):Material;
	public static var normal_friction(get, null):Material;

	public var gravity:Float;
	public var acceleration:Float;
	public var max_speed:Float;
	public var jump_impulse:Float;
	public var friction_ground:Float;
	public var friction_air:Float;
	public var max_slope_angle:Float;
	public var max_slope_y:Float;

	public var creature(get, null):Creature;
	public var body(get, null):Body;
	public var bounds(get, null):AABB;

	public var grounded:Bool = false;
	public var slope:Bool = false;
	var jumped_this_frame:Bool = false;

	var space(get, null):Space;
	var input_vector:Vec2 = new Vec2();
	var rays_horizontal:Int = 2;
	var rays_vertical:Int = 3;
	var skin_thickness:Float = 0.5;

	public function new()
	{
		super();

		name = 'controller';

		gravity = 512;
		acceleration = 1024;
		max_speed = 128;
		jump_impulse = 128;
		friction_ground = 0.5;
		friction_air = 0.9;
		max_slope_angle = 70;
		max_slope_y = -Math.cos(Maths.radians(max_slope_angle));
	}

	override function onadded() { }

	override function update(dt:Float)
	{
		if (GameState.paused) return;

		jumped_this_frame = false;

		if (Math.abs(input_vector.x) > 0)
		{
			body.velocity.x += input_vector.x * acceleration * dt * (grounded ? 1 : 0.5);
		}
		else
		{
			body.velocity.x *= grounded ? friction_ground : friction_air;
		}
		body.velocity.x = Maths.clamp(body.velocity.x, -max_speed, max_speed);
		body.velocity.y += gravity * dt;
		input_vector = new Vec2();

		slope_raycast(dt);
		raycast_horizontal(dt);
		raycast_vertical(dt);
	}

	function raycast_horizontal(dt:Float)
	{
		// how much we move this frame
		var movement_delta:Vec2 = body.velocity.mul(dt, false);
		// dont do anything if not moving
		if (movement_delta.x == 0) return;
		// bounds minus the skin thickness
		var skin_bounds:AABB = new AABB(
			bounds.x + skin_thickness, bounds.y + skin_thickness, 
			bounds.width - skin_thickness * 2, bounds.height - skin_thickness * 2);
		// loop through each ray
		for (y in 0...rays_vertical)
		{
			if (y == 0 && slope) continue;
			// init where to shoot from
			var ray_origin:Vec2 = new Vec2();
			// direction always either -1 or 1
			var ray_direction:Int = Maths.sign(movement_delta.x);
			// change ray origin depending on direction
			if (movement_delta.x > 0)
			{
				ray_origin = new Vec2(skin_bounds.max.x, skin_bounds.max.y - (skin_bounds.height / (rays_vertical - 1)) * y);
			}
			else
			{
				ray_origin = new Vec2(skin_bounds.min.x, skin_bounds.max.y - (skin_bounds.height / (rays_vertical - 1)) * y);
			}
			// setup the ray to be cast
			var ray:Ray = new Ray(ray_origin, new Vec2(ray_direction, 0));
			ray.maxDistance = Math.abs(movement_delta.x) + skin_thickness;
			// the result of the raycast
			var ray_result:RayResult = space.rayCast(ray, false, Physics.filters.creature);
			// response to hit
			if (ray_result != null)
			{
				var hit_body:Body = ray_result.shape.body;
				hit_body.applyImpulse(new Vec2(body.velocity.x * hit_body.mass, 0));
				if (ray_result.normal.x == 0 || ray_result.normal.y > max_slope_y)
				{
					body.velocity.x = 0;
					body.position.x = ray.at(ray_result.distance).x - (bounds.width / 2) * ray_direction;
					break;
				}
			}
			debug_ray(ray, ray_result);
		}
	}

	function raycast_vertical(dt:Float)
	{
		// how much we move this frame
		var movement_delta:Vec2 = body.velocity.mul(dt, false);
		// dont do anything if not moving
		if (movement_delta.y == 0) return;
			grounded = false;
		// bounds minus the skin thickness
		var skin_bounds:AABB = new AABB(
			bounds.x + skin_thickness, bounds.y + skin_thickness, 
			bounds.width - skin_thickness * 2, bounds.height - skin_thickness * 2);
		// loop through each ray
		for (x in 0...rays_horizontal)
		{
			// init where to shoot from
			var ray_origin:Vec2 = new Vec2();
			// direction always either -1 or 1
			var ray_direction:Int = Maths.sign(movement_delta.y);
			// change ray origin depending on direction
			if (movement_delta.y > 0)
			{
				ray_origin = new Vec2(skin_bounds.max.x - (skin_bounds.width / (rays_horizontal - 1)) * x, skin_bounds.min.y);
			}
			else
			{
				ray_origin = new Vec2(skin_bounds.max.x - (skin_bounds.width / (rays_horizontal - 1)) * x, skin_bounds.max.y);
			}
			// setup the ray to be cast
			var ray:Ray = new Ray(ray_origin, new Vec2(0, ray_direction));
			ray.maxDistance = Math.abs(movement_delta.y) + skin_thickness + skin_bounds.height;
			// the result of the raycast
			var ray_result:RayResult = space.rayCast(ray, false, Physics.filters.creature);
			// response to hit
			if (ray_result != null)
			{
				var hit_body:Body = ray_result.shape.body;
				hit_body.applyImpulse(new Vec2(0, body.velocity.y * hit_body.mass));
				if (ray_result.normal.y < max_slope_y || ray_result.normal.y > 0)
				{
					body.velocity.y = 0;
					body.position.y = ray.at(ray_result.distance).y - (bounds.height / 2) * ray_direction;
					if (ray_direction > 0) grounded = true;
					break;
				}
				else
				{
					body.velocity.x = 0;
					body.position.x += ray_result.normal.x;
				}
			}
			debug_ray(ray, ray_result);
		}
	}

	function slope_raycast(dt:Float)
	{
		slope = false;
		// how much we move this frame
		var movement_delta:Vec2 = body.velocity.mul(dt, false);
		// dont do anything if not moving
		if (movement_delta.y == 0) return;
		// bounds minus the skin thickness
		var skin_bounds:AABB = new AABB(
			bounds.x + skin_thickness, bounds.y + skin_thickness, 
			bounds.width - skin_thickness * 2, bounds.height - skin_thickness * 2);
		var direction:Int = 1;
		var ray:Ray = new Ray(body.position, new Vec2(0, direction));
		ray.maxDistance = bounds.height / 2 + movement_delta.y + (grounded ? 12 : 0);
		var result:RayResult = space.rayCast(ray, false, Physics.filters.creature);
		if (result != null)
		{
			if (result.normal.x != 0)
			{
				slope = true;
			}

			if (result.normal.y < max_slope_y)
			{
				body.velocity.y = 0;
				body.position.y = ray.at(result.distance).y - (bounds.height / 2) * direction;
				if (direction > 0) grounded = true;
			}
		}
		debug_ray(ray, result);
	}

	function debug_ray(ray:Ray, result:RayResult)
	{
		if (!Luxe.physics.nape.draw) return;
		var direction:Vector = new Vector(ray.direction.x, ray.direction.y).normalized;
		if (result != null)
		{
			var hit_point:Vec2 = ray.at(result.distance);
			Luxe.draw.line({
				p0: new Vector(ray.origin.x, ray.origin.y),
				p1: new Vector(hit_point.x, hit_point.y),
				color: new Color(1, 0, 0),
				depth: 1000,
				immediate: true
			});
			Luxe.draw.line({
				p0: new Vector(hit_point.x, hit_point.y),
				p1: new Vector(ray.origin.x, ray.origin.y).add(direction.multiplyScalar(ray.maxDistance)),
				color: new Color(0, 1, 0),
				depth: 1000,
				immediate: true
			});
		}
		else
		{
			Luxe.draw.line({
				p0: new Vector(ray.origin.x, ray.origin.y),
				p1: new Vector(ray.origin.x, ray.origin.y).add(direction.multiplyScalar(ray.maxDistance)),
				color: new Color(1, 0, 0),
				depth: 1000,
				immediate: true
			});
		}
	}

	public function add_movement_input(input:Vec2)
	{
		input_vector = input;
	}

	public function jump()
	{
		if (!grounded) return;
		grounded = false;
		jumped_this_frame = true;
		body.velocity.y = -jump_impulse;
	}

		/** getters and setters **/
	public static function get_zero_friction():Material
	{
		return new Material(0, 0, 0);
	}

	public static function get_normal_friction():Material
	{
		return new Material(0, 4, 8);
	}

	function get_space():Space
	{
		return Luxe.physics.nape.space;
	}

	function get_creature():Creature
	{
		return cast(entity, Creature);
	}

	function get_body():Body
	{
		return creature.body;
	}

	function get_bounds():AABB
	{
		return body.bounds;
	}
}