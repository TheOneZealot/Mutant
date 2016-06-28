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
import phoenix.Texture;

class World
{
	public static var CBTYPE_TERRAIN = new CbType();
	public static var CBTYPE_CREATURE = new CbType();
	public static var CBTYPE_PROJECTILE = new CbType();

	public static var debugdraw:DebugDraw;

	var map:TiledMap;
	var map_static:Body;
	public var player:Sprite;

	public function new()
	{
		creatures.Player;
		creatures.Soldier;

		var map_data:String = Luxe.resources.text("assets/maps/test/Gameplay_Testing.tmx").asset.text;
		map = new TiledMap({format: "tmx", asset_path: "assets/maps/test", tiled_file_data: map_data});

		reset();

		map.display({filter: FilterType.nearest, depth: 0.9});
	}

	public function generate_collision()
	{
		map.layer("collision").visible = false;
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
						var creature_name:String = object.properties.get("Creature");
						var creature_facing_left:Bool = object.properties.get("Facing Left") == "true";
						var body_pos:Vector = object.pos.add(new Vector(object.width, object.height).divideScalar(2));
						var creature:Creature = Type.createInstance(
							Type.resolveClass("creatures."+creature_name), 
							[body_pos, object.name]);
						creature.flipx = creature_facing_left;
						if (creature_name == "Player")
						{
							player = creature;
						}

					case "Dynamic":
						var body_pos:Vector = object.pos.add(new Vector(object.width, object.height).divideScalar(2));
						var body:Body = new Body(BodyType.DYNAMIC, new Vec2(body_pos.x, body_pos.y));
						body.shapes.add(new Polygon(Polygon.box(object.width, object.height)));
						body.space = Luxe.physics.nape.space;
						debugdraw.add(body);
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
		Luxe.physics.nape.draw = true;

		generate_collision();
		generate_objects();
	}
}