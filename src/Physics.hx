import luxe.Physics;
import luxe.Color;
import luxe.Vector;
import luxe.Log.*;

import nape.callbacks.CbType;
import nape.dynamics.InteractionFilter;
import nape.dynamics.InteractionGroup;

class Physics extends PhysicsEngine
{
	static var debug_palette = {
		velocity: new Color().rgb(0xFF9900),
		ray: new Color().rgb(0xA40802),
		ray_hit: new Color().rgb(0x33B73E),
	};

	// callback types
	public static var types = {
		terrain: new CbType(),
		creature: new CbType(),
		projectile: new CbType(),
		physobj: new CbType(),
	};

	// interaction filters
	public static var filters = {
		terrain: new InteractionFilter(1),
		creature: new InteractionFilter(2, ~(4)),
		projectile: new InteractionFilter(4, ~(2)),
		physobj: new InteractionFilter(8),
	};

	var debug_depth:Float = 1000;

	public var controllers:Array<Controller>;

	public function new()
	{
		super();

		controllers = [];

		log("physics engine created");
	}

	override function update()
	{
		if (GameState.paused) return;

		var dt:Float = Luxe.tick_delta;

		for (ctrl in controllers)
		{
			if (ctrl.entity == null) continue;
		}
	}

	override function render()
	{
		if (draw == false) return;

		var dt:Float = Luxe.tick_delta;

		for (ctrl in controllers)
		{
			if (ctrl.entity == null) continue;

			var vel:Vector = new Vector(ctrl.body.velocity.x, ctrl.body.velocity.y);

			Luxe.draw.line({
				immediate: true,
				p0: ctrl.pos,
				p1: Vector.Add(ctrl.pos, vel.multiplyScalar(dt)),
				color: debug_palette.velocity,
				depth: debug_depth,
			});
		}
	}
}