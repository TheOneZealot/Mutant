package controllers;

import luxe.Vector;
import luxe.Log.*;

import phoenix.Texture;

import nape.geom.Vec2;
import nape.geom.Ray;
import nape.geom.RayResult;

import creatures.Player;

class SoldierController extends AIController
{
	public var fire_ready:Bool = true;
	public var fire_interval:Float = 1;
	var fire_ready_timer:Float;

	public function new()
	{
		super();
	}

	override function update(dt:Float)
	{
		if (GameState.paused) return;

		var ray:Ray = new Ray(new Vec2(0, -7.5).addeq(body.position), new Vec2(creature.facing, 0));
		ray.maxDistance = 1000;
		var result:RayResult = space.rayCast(ray, false, Physics.filters.creature);

		if (result != null && Std.is(result.shape.body.userData.entity, creatures.Player))
		{
			var player:Player = cast result.shape.body.userData.entity;
			fire();
		}
		debug_ray(ray, result);

		if (fire_ready_timer > 0) fire_ready_timer -= dt;
		if (fire_ready_timer <= 0 && fire_ready == false)
		{
			fire_ready = true;
			log('$name fire ready');
		}

		super.update(dt);
	}

	function fire()
	{
		if (fire_ready == false) return;

		var texture:Texture = Luxe.resources.texture('assets/textures/Projectile_Bullet.png');
		texture.filter_mag = texture.filter_min = FilterType.nearest;
		new Projectile({
			pos: new Vector(body.position.x + (8 * creature.facing), body.position.y - 7.5),
			size: new Vector(texture.width, texture.height),
			bounds: new Vector(2, 1),
			texture: texture,
			owner: entity,
			dir: new Vector(creature.flipx ? -1 : 1, 0),
			speed: 128,
			depth: 10
		});
		fire_ready = false;
		fire_ready_timer = fire_interval;
		log('$name fired at time ${Luxe.time}');


		creature.events.fire('fire');
	}
}