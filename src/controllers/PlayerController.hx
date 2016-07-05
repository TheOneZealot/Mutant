package controllers;

import luxe.Log.*;

import nape.geom.Vec2;

import creatures.Player;

class PlayerController extends Controller
{
	var player:Player;

	public function new()
	{
		super();
	}

	override function onadded()
	{
		super.onadded();

		player = cast creature;
	}

	override function update(dt:Float)
	{
		if (GameState.paused) return;

		if (Luxe.input.inputpressed('jump'))
		{
			jump();
		}

		if (Luxe.input.inputdown('left'))
		{
			add_movement_input(new Vec2(-1, 0));
		}
		if (Luxe.input.inputdown('right'))
		{
			add_movement_input(new Vec2(1, 0));
		}

		if (Luxe.input.inputpressed('act'))
		{
			if (player.action_claw == null)
			{
				log('${player.name} attempted a null action');
			}
			player.action_claw.act();
		}

		super.update(dt);
	}
}