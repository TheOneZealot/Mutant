import luxe.Vector;
import luxe.Component;
import luxe.components.sprite.SpriteAnimation;
import phoenix.Texture;
import luxe.components.physics.nape.NapeBody;
import luxe.components.physics.nape.BoxCollider;
import nape.phys.BodyType;
import nape.phys.Body;
import nape.shape.Polygon;
import nape.shape.Circle;
import nape.shape.Shape;
import nape.geom.Vec2;

class Creature extends luxe.Sprite
{
	public var controller:Controller;
	public var animation:SpriteAnimation;
	public var collider:BoxCollider;
	public var body:Body;

	public function new(_name:String, _pos:Vector, _size:Vector, _bounds:Vector)
	{
		// setup local variables
		var radius:Float = _bounds.x / 2;
		var half_height:Float = _bounds.y / 2;
		var delta:Float = (_size.y - _bounds.y) / 2;

		// call sprite constructor
		super({
			name: _name,
			pos: _pos,
			size: _size
		});

		geometry.translate(new Vector(0, -delta));

		// setup collision
		add(collider = new BoxCollider({
			name: "collider",
			x: _pos.x, y: _pos.y,
			w: _bounds.x, h: _bounds.y,
			body_type: BodyType.KINEMATIC
		}));
		body = collider.body;
		body.shapes.foreach(function(shape:Shape) { shape.sensorEnabled = true; });
		body.cbTypes.add(World.CBTYPE_CREATURE);
		body.userData.entity = this;
		body.allowRotation = false;
	}

	public function set_animation(anim_name:String)
	{
		if (animation == null) return;

		if (animation.animation != anim_name)
		{
			animation.animation = anim_name;
		}
	}
}