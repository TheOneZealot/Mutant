package creatures;

import luxe.Vector;
import luxe.components.sprite.SpriteAnimation;

import phoenix.Texture;

class Scientist extends Creature
{
	public function new(_pos:Vector, _name:String)
	{
		// setup local variables
		var anim_object = Luxe.resources.json('assets/animations/Creature_Scientist.json').asset.json;

		// setup creature
		super(_name, _pos, new Vector(16, 32), new Vector(12, 30));
		texture = Luxe.resources.texture('assets/textures/Creature_Scientist.png');
		texture.filter_min = texture.filter_mag = FilterType.nearest;
		health = max_health = 1;
		exp_on_kill = 1;

		// setup animation
		add(animation = new SpriteAnimation({name: 'animation'}));
		animation.add_from_json_object(anim_object);
		animation.animation = 'idle';
		animation.play();

		// setup controller
		add(controller = new AIController());
		controller.acceleration = 2048;
		controller.max_speed = 128;
		controller.jump_impulse = 256;
	}

	override function update(dt:Float)
	{
		super.update(dt);

		// flip sprite
		if (controller.body.velocity.x > 0) flipx = false;
		else if (controller.body.velocity.x < 0) flipx = true;
		
		// animation control
		if (animation.playing == false)
		{
			set_animation('idle');
		}
		else if (controller.grounded)
		{
			if (Math.abs(controller.body.velocity.x) > 16)
			{
				set_animation('run');
			}
			else if (Math.abs(controller.body.velocity.x) < 16)
			{
				set_animation('idle');
			}
		}
		else
		{
			set_animation('fall');
		}
	}
}