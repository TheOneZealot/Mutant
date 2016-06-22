package creatures;

import luxe.Vector;
import luxe.components.sprite.SpriteAnimation;
import phoenix.Texture;

class Soldier extends Creature
{
	public function new(_pos:Vector, _name:String)
	{
		// setup local variables
		var anim_object = Luxe.resources.json("assets/animations/Creature_Player.json").asset.json;

		// setup creature
		super(_name, _pos, new Vector(16, 32), new Vector(12, 30));
		texture = Luxe.resources.texture("assets/textures/Creature_Soldier.png");
		texture.filter_min = texture.filter_mag = FilterType.nearest;

		/* setup animation
		add(animation = new SpriteAnimation({name: "animation"}));
		animation.add_from_json_object(anim_object);
		animation.animation = "idle";
		animation.play();*/

		// setup controller
		add(controller = new Controller());
		controller.acceleration = 2048;
		controller.max_speed = 128;
		controller.jump_impulse = 256;
	}

	override function update(dt:Float)
	{
		/* animation control
		if (controller.body.velocity.x > 0) flipx = false;
		else if (controller.body.velocity.x < 0) flipx = true;
		
		if (controller.grounded)
		{
			if (Math.abs(controller.body.velocity.x) > 16)
			{
				set_animation("run");
			}
			else if (Math.abs(controller.body.velocity.x) < 16)
			{
				set_animation("idle");
			}
		}
		else
		{
			set_animation("fall");
		}*/
	}
}