package actions;

import luxe.Vector;
import luxe.Log.*;

import phoenix.geometry.RectangleGeometry;

import nape.geom.AABB;
import nape.phys.Body;
import nape.phys.BodyList;

class Claw extends Action
{
	var damage:Int = 1;
	var hit_area:AABB = new AABB(6, -8, 16, 8);

	var debug_geom:RectangleGeometry;

	override public function act()
	{
		super.act();

		var hit_x:Float = hit_area.x * owner.facing;
		if (owner.facing < 0) hit_x -= hit_area.width;
		var _hit_area:AABB = new AABB(
			hit_x + owner.pos.x,
			hit_area.y + owner.pos.y,
			hit_area.width, hit_area.height
		);
		var bodies:BodyList = Luxe.physics.nape.space.bodiesInAABB(_hit_area, false, true, Physics.filters.projectile);
		for (body in bodies)
		{
			var creature:Creature = cast body.userData.entity;
			if (creature == null || creature == owner) continue;

			log('${owner.name} hit ${creature.name} with $name');
			creature.events.fire('health.damage.*', {amount: damage, attacker: owner});
		}

		if (debug_geom != null) debug_geom.drop();
		debug_geom = Luxe.draw.rectangle({
			x: _hit_area.x, y: _hit_area.y,
			w: _hit_area.width, h: _hit_area.height,
			depth: 1000,
		});
	}
}