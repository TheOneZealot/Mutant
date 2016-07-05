import nape.geom.Vec2;
import nape.geom.AABB;
import nape.phys.Body;
import nape.phys.BodyList;
import nape.phys.BodyType;
import nape.phys.GravMassMode;
import nape.shape.Shape;
import nape.callbacks.CbType;
import nape.callbacks.CbEvent;
import nape.callbacks.InteractionListener;
import nape.callbacks.InteractionCallback;
import nape.callbacks.InteractionType;
import luxe.Vector;
import luxe.Entity;
import luxe.components.physics.nape.BoxCollider;
import phoenix.Texture;

class Projectile extends luxe.Sprite
{
	static var num_projectiles:Int = 0;

	var collider:BoxCollider;
	var body:Body;
	var owner:Entity;

	public function new(options:ProjectileOptions)
	{
		// take care of null values
		if (options == null) trace('projectile cant have null options');
		if (options.bounds == null) options.bounds = options.size;
		if (options.dir == null) options.dir = new Vector(1, 0);
		if (options.speed == null) options.speed = 16;

		// setup sprite
		super(options);

		// setup collider
		add(collider = new BoxCollider({
			name: 'collider',
			x: options.pos.x, y: options.pos.y,
			w: options.bounds.x, h: options.bounds.y,
			body_type: BodyType.DYNAMIC
		}));

		// setup body
		body = collider.body;
		body.gravMassMode = GravMassMode.FIXED;
		body.gravMass = 0;
		body.shapes.foreach(function(shape:Shape) { 
			shape.sensorEnabled = true; 
			shape.filter = Physics.filters.projectile; 
		});
		body.cbTypes.add(Physics.types.projectile);
		body.velocity = new Vec2(options.dir.x, options.dir.y).mul(options.speed);
		body.userData.entity = this;

		// assign variables
		owner = options.owner;
	}

	override function update(dt:Float)
	{
		if (GameState.paused) return;

		var bodies:BodyList = Luxe.physics.nape.space.bodiesInBody(body);
		if (bodies.length > 0)
		{	
			var hit_occurred:Bool = false;
			bodies.foreach(function(body:Body) {
				var entity:Entity = body.userData.entity;
				if (entity != null && entity != owner && entity != this)
				{
					entity.events.fire('health.damage.point', {amount: 1, attacker: owner});
					hit_occurred = true;
				}
				else if (body.isStatic())
				{
					hit_occurred = true;
				}
			});
			if (hit_occurred) 
			{
				remove(collider.name);
				destroy(true);
			}
		}
	}
}

typedef ProjectileOptions = {
  > luxe.options.SpriteOptions,
	@:optional var owner:Entity;
	@:optional var bounds:Vector;
	@:optional var dir:Vector;
	@:optional var speed:Float;
}