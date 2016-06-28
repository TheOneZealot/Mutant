package controllers;

import nape.geom.Vec2;
import nape.geom.Ray;
import nape.geom.RayResult;
import creatures.Player;
import luxe.Vector;
import phoenix.Texture;

class SoldierController extends AIController
{
	public var fire_ready:Bool = true;

	public function new()
	{
		super();
	}

	override function update(dt:Float)
	{
		var direction:Int = creature.flipx ? -1 : 1;
		var ray:Ray = new Ray(body.position, new Vec2(direction, 0));
		var result:RayResult = space.rayCast(ray);

		if (result != null && Std.is(result.shape.body.userData.entity, creatures.Player))
		{
			var player:Player = cast result.shape.body.userData.entity;
			fire();
		}
		debug_ray(ray, result);

		super.update(dt);
	}

	function fire()
	{
		if (fire_ready == false) return;

		var texture:Texture = Luxe.resources.texture("assets/textures/Projectile_Bullet.png");
		texture.filter_mag = texture.filter_min = FilterType.nearest;
		new Projectile(new Vector(body.position.x, body.position.y), new Vector(2, 1), texture, new Vector(creature.flipx ? -1 : 1, 0), 16);
		fire_ready = false;
		Luxe.timer.schedule(1, function() { fire_ready = true; });

		creature.events.fire("fire");
	}
}