import nape.geom.Vec2;
import nape.phys.Body;
import nape.phys.BodyType;
import nape.shape.Polygon;
import nape.callbacks.InteractionListener;
import nape.callbacks.InteractionType;
import nape.callbacks.InteractionCallback;
import nape.callbacks.CbEvent;
import nape.callbacks.CbType;
import luxe.Sprite;
import luxe.Vector;
import luxe.Entity;
import luxe.components.physics.nape.BoxCollider;
import luxe.physics.nape.DebugDraw;
import luxe.importers.tiled.TiledMap;
import luxe.importers.tiled.TiledObjectGroup;

class World
{
	public static var CBTYPE_TERRAIN = new CbType();
	public static var CBTYPE_CREATURE = new CbType();
	
	public static var debugdraw:DebugDraw;

	var map:TiledMap;
	var map_static:Body;
	public var player:Sprite;

	public function new()
	{
		var map_data:String = Luxe.resources.text("assets/maps/test/Gameplay_Testing.tmx").asset.text;
		map = new TiledMap({format: "tmx", asset_path: "assets/maps/test", tiled_file_data: map_data});

		reset();
	}

	public function generate_collision()
	{
		var bounds = map.layer("collision").bounds_fitted();

		map_static = new Body(BodyType.STATIC);
		map_static.cbTypes.add(CBTYPE_TERRAIN);
		for (rect in bounds)
		{
			rect.x *= map.tile_width;
			rect.y *= map.tile_height;
			rect.w *= map.tile_width;
			rect.h *= map.tile_height;
			map_static.shapes.add(new Polygon(Polygon.rect(rect.x, rect.y, rect.w, rect.h)));
		}

		for (obj_grp in map.tiledmap_data.object_groups)
		{
			if (obj_grp.name != "collision") continue;

			for (obj in obj_grp.objects)
			{
				var verts:Array<Vec2> = [];

				for (point in obj.polyobject.points)
				{
					point.add(obj.pos);
					verts.push(Vec2.weak(point.x, point.y));
				}
				map_static.shapes.add(new Polygon(verts));
			}
		}

		map_static.space = Luxe.physics.nape.space;
		debugdraw.add(map_static);
	}

	public function generate_objects()
	{
		for (object_group in map.tiledmap_data.object_groups)
		{
			for (object in object_group.objects)
			{
				switch (object.type)
				{
					case "Spawn":
					
						var player_size:Vector = new Vector(map.tile_width, map.tile_height);
						var body_pos:Vector = object.pos.add(new Vector(object.width, object.height).divideScalar(2));
						player = new creatures.Player(body_pos);
				}
			}
		}
	}

	public function reset()
	{
		if (debugdraw != null)
		{
			debugdraw.destroy();
			debugdraw = null;
		}

		debugdraw = new DebugDraw();
		Luxe.physics.nape.debugdraw = debugdraw;

		Luxe.physics.nape.space.listeners.add(new InteractionListener(
			CbEvent.BEGIN, InteractionType.COLLISION,
			CBTYPE_CREATURE,
			CBTYPE_TERRAIN,
			function(cb:InteractionCallback) {
				var entity:Entity = cb.int1.userData.entity;
				entity.events.fire("begin.collide.terrain", cb);
			}
		));
		Luxe.physics.nape.space.listeners.add(new InteractionListener(
			CbEvent.ONGOING, InteractionType.COLLISION,
			CBTYPE_CREATURE,
			CBTYPE_TERRAIN,
			function(cb:InteractionCallback) {
				var entity:Entity = cb.int1.userData.entity;
				entity.events.fire("ongoing.collide.terrain", cb);
			}
		));
		Luxe.physics.nape.space.listeners.add(new InteractionListener(
			CbEvent.END, InteractionType.COLLISION,
			CBTYPE_CREATURE,
			CBTYPE_TERRAIN,
			function(cb:InteractionCallback) {
				var entity:Entity = cb.int1.userData.entity;
				entity.events.fire("end.collide.terrain", cb);
			}
		));

		generate_collision();
		generate_objects();
	}
}