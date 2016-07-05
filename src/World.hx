import nape.geom.Vec2;
import nape.phys.Body;
import nape.phys.BodyType;
import nape.shape.Shape;
import nape.shape.Polygon;
import nape.callbacks.InteractionListener;
import nape.callbacks.InteractionType;
import nape.callbacks.InteractionCallback;
import nape.callbacks.CbEvent;
import nape.callbacks.CbType;
import luxe.Sprite;
import luxe.Vector;
import luxe.Entity;
import luxe.Color;
import luxe.components.physics.nape.BoxCollider;
import luxe.physics.nape.DebugDraw;
import luxe.importers.tiled.TiledMap;
import luxe.importers.tiled.TiledObjectGroup;
import phoenix.Texture;
import creatures.Player;

class World
{
	public static var debugdraw:DebugDraw;

	var map:TiledMap;
	var map_static:Body;
	public var player:Player;
	public var entities:Array<Entity>;

	public function new()
	{
		creatures.Player;
		creatures.Soldier;
		creatures.Scientist;

		reset();

		Luxe.events.listen('reset', function(_) { reset(); });
	}

	public function generate_collision()
	{
		if (map_static != null)
		{
			map_static.space = null;
			map_static = null;
		}

		map.layer("collision").visible = false;
		var bounds = map.layer("collision").bounds_fitted();

		map_static = new Body(BodyType.STATIC);
		map_static.cbTypes.add(Physics.types.terrain);
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
					verts.push(Vec2.weak(point.x + obj.pos.x, point.y + obj.pos.y));
				}
				map_static.shapes.add(new Polygon(verts));
			}
		}

		map_static.space = Luxe.physics.nape.space;
		debugdraw.add(map_static, new Color(1, 0, 0), new Color(1, 0, 0));
	}

	public function generate_objects()
	{
		// clean up potential old entities
		if (entities != null)
		{
			for (entity in entities) 
			{	
				if (entity.destroyed) continue;
				entity.destroy(); 
			}
			entities = null;
		}
		// initilize entity array
		entities = [];
		// loop through map objects
		for (object_group in map.tiledmap_data.object_groups)
		{
			for (object in object_group.objects)
			{
				switch (object.type)
				{
					case "Spawn":
						// get creature name
						var creature_name:String = object.properties.get("Creature");
						// get creature facing direction
						var creature_facing_left:Bool = object.properties.get("Facing Left") == "true";
						// define position for body
						var body_pos:Vector = Vector.Add(object.pos, new Vector(object.width, object.height).divideScalar(2));
						// create creature using reflection
						var creature:Creature = Type.createInstance(
							Type.resolveClass("creatures."+creature_name), 
							[body_pos, object.name]);
						creature.flipx = creature_facing_left;
						// add creature to entity array
						entities.push(creature);
						// assign player to creature if it is the player
						if (creature_name == "Player")
						{
							player = cast creature;
						}

					case "PhysObject":
						// skip if no texture was provided
						if (object.properties.exists("Texture") == false) continue;
						// create texture
						var texture_name:String = object.properties.get('Texture');
						var texture:Texture = Luxe.resources.texture('assets/textures/$texture_name.png');
						texture.filter_min = texture.filter_mag = FilterType.nearest;
						// define position for body
						var body_pos:Vector = Vector.Add(object.pos, new Vector(object.width, object.height).divideScalar(2));
						// create sprite
						var sprite:Sprite = new Sprite({
							name: object.name,
							pos: body_pos,
							texture: texture,
							size: new Vector(object.width, object.height),
							depth: 1
						});
						// create collider
						var collider:BoxCollider = new BoxCollider({
							name: 'collider',
							x: body_pos.x, y: body_pos.y, 
							w: object.width, h: object.width,
							body_type: BodyType.DYNAMIC
						});
						sprite.add(collider);
						// set body properties
						var body:Body = collider.body;
						body.shapes.foreach(function(shape:Shape) {
							shape.filter = Physics.filters.physobj;
						});
						body.cbTypes.add(Physics.types.physobj);
						// add sprite to entity array
						entities.push(sprite);
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
		debugdraw = new DebugDraw({
			depth: 1000
		});
		Luxe.physics.nape.debugdraw = debugdraw;
		Luxe.physics.nape.draw = false;

		Luxe.physics.nape.space.clear();

		if (map != null)
		{
			map.destroy();
			map = null;
		}
		var map_data:String = Luxe.resources.text("assets/maps/test/Gameplay_Testing.tmx").asset.text;
		map = new TiledMap({format: "tmx", asset_path: "assets/maps/test", tiled_file_data: map_data});

		generate_collision();
		generate_objects();

		map.display({filter: FilterType.nearest, depth: 0});
	}
}