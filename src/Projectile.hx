import nape.geom.Vec2;
import nape.phys.Body;
import nape.phys.BodyList;
import nape.phys.BodyType;
import nape.shape.Shape;
import nape.callbacks.CbType;
import nape.callbacks.CbEvent;
import nape.callbacks.InteractionListener;
import nape.callbacks.InteractionCallback;
import nape.callbacks.InteractionType;
import luxe.Vector;
import luxe.components.physics.nape.BoxCollider;
import phoenix.Texture;

class Projectile extends luxe.Sprite
{
	static var num_projectiles:Int = 0;

	var collider:BoxCollider;
	var body:Body;

	var begin_interaction_listener:InteractionListener;

	public function new(_pos:Vector, _bounds:Vector, _tex:Texture, _dir:Vector, _spd:Float)
	{
		// setup sprite
		super({
			name: "projectile"+num_projectiles++,
			pos: _pos,
			size: new Vector(_tex.width, _tex.height),
			texture: _tex
		});

		// setup collider
		add(collider = new BoxCollider({
			x: _pos.x, y: _pos.y,
			w: _bounds.x, h: _bounds.y,
			body_type: BodyType.KINEMATIC
		}));

		// setup body
		body = collider.body;
		body.shapes.foreach(function(shape:Shape) { shape.sensorEnabled = true; });
		body.cbTypes.add(World.CBTYPE_PROJECTILE);
		body.velocity = new Vec2(_dir.x, _dir.y).mul(_spd);
		body.userData.entity = this;
	}

	override function update(dt:Float)
	{
		var bodies:BodyList = Luxe.physics.nape.space.bodiesInBody(body);
		if (bodies.length > 0)
		{
			trace("collision");
			active = false;
		}
	}
}

typedef ProjectileOptions = {
	> luxe.options.SpriteOptions,
	@:optional var bounds:Vector;
	@:optional var dir:Vector;
	@:optional var speed:Vector;
}