package controllers;

import nape.geom.Vec2;

class PlayerController extends Controller
{
	public function new()
	{
		super();
	}

	override function update(dt:Float)
	{

		if (Luxe.input.inputpressed("jump"))
		{
			jump();
		}

		if (Luxe.input.inputdown("left"))
		{
			add_movement_input(new Vec2(-1, 0));
		}
		if (Luxe.input.inputdown("right"))
		{
			add_movement_input(new Vec2(1, 0));
		}

		super.update(dt);
	}
}