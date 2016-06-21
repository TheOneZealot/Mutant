package creatures;

import luxe.Vector;
import luxe.components.sprite.SpriteAnimation;
import phoenix.Texture;

class Player extends Creature
{
	public function new(_pos:Vector)
	{
		// setup local variables
		var anim_object = Luxe.resources.json("assets/animations/Creature_Player.json").asset.json;

		// setup creature
		super("player", _pos, new Vector(16, 32), new Vector(12, 30));
		texture = Luxe.resources.texture("assets/textures/Creature_Player.png");
		texture.filter_min = texture.filter_mag = FilterType.nearest;

		// setup animation
		add(animation = new SpriteAnimation({name: "animation"}));
		animation.add_from_json_object(anim_object);
		animation.animation = "idle";
		animation.play();

		// setup controller
		add(controller = new PlayerController());
		controller.acceleration = 2048;
		controller.max_speed = 128;
		controller.jump_impulse = 256;
	}

	override function update(dt:Float)
	{
		// animation control
		if (Math.abs(controller.body.velocity.x) > 16 && animation.animation != "run") 
		{
			animation.animation = "run";
		}
		else if (Math.abs(controller.body.velocity.x) < 16 && animation.animation != "idle")
		{
			animation.animation = "idle";
		}
	}
}