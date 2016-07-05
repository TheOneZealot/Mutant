import luxe.Vector;
import luxe.Color;
import luxe.utils.Utils;

import mint.Canvas;
import mint.Panel;

import creatures.Player;
import ui.render.MutantMintRenderer;
import ui.*;

class UserInterface
{
	public static var palette = {
		black: new Color().rgb(0xff181d28),
		self: new Color().rgb(0xffc7f464),
		enemy: new Color().rgb(0xf38630),
		exp: new Color().rgb(0x69d2e7),
		white: new Color().rgb(0xe0e4cc),
	};
	public static var batcher:phoenix.Batcher;
	var rendering:MutantMintRenderer;

	public var scale:Float = 4;

	// controls
	var damage_flash:Panel;
	var canvas:Canvas;
	var healthbar:AttributeBar;
	var expbar:AttributeBar;
	var creature_statuses:Array<CreatureStatus>;
	var pause_menu:PauseMenu;

	var player(get, null):Player;

	public function new()
	{
		batcher = new phoenix.Batcher(Luxe.renderer, 'ui_batcher');
		batcher.view = new phoenix.Camera();
		batcher.layer = 2;
		Luxe.renderer.add_batch(batcher);

		rendering = new MutantMintRenderer({
			batcher: batcher			
		});

		reset();

		Luxe.events.listen('reset', function(_) { reset(); });
	}

	public function reset()
	{
		if (canvas != null)
		{
			canvas.destroy();
			canvas = null;
		}
		canvas = new Canvas({
			name: 'canvas',
			rendering: rendering,
			scale: scale,
			x: 0, y: 0, 
			w: Luxe.screen.width / scale, 
			h: Luxe.screen.height / scale
		});

		damage_flash = new Panel({
			parent: canvas,
			name: 'damageflash',
			x: 0, y: 0, w : canvas.w, h: canvas.h,
			visible: false,
			depth: 1,
			options: {
				color: new Color(1, 0, 0, 0.5),
			},
		});

		pause_menu = new PauseMenu(canvas);

		healthbar = new AttributeBar({
			parent: canvas,
			name: 'healthbar',
			x: 6, y: 6, w: 48, h: 6,
			value: player.health,
			max_value: player.max_health,
			options: {
				color: palette.black,
				color_bar: palette.self,
				margin: 1,
				padding: 0.5,
			},
		});

		expbar = new AttributeBar({
			parent: canvas,
			name: 'expbar',
			x: canvas.w / 2 - 32,
			y: canvas.bottom - 10,
			w: 64, h: 6,
			value: player.exp,
			max_value: player.exp_level,
			options: {
				color: palette.black,
				color_bar: palette.exp,
				margin: 1,
				padding: 0.5,
			},
		});

		creature_statuses = [];
		for (entity in Main.world.entities)
		{
			var creature:Creature = cast entity;
			if (creature == null || creature == player) continue;

			creature_statuses.push(new CreatureStatus(canvas, creature));
		}

		player.events.listen('health.*', function(_) { Luxe.next(update_healthbar); });
		player.events.listen('exp.*', function(_) { Luxe.next(update_expbar); });
		player.events.listen('level', function(_) { Luxe.next(update_expbar); });
		player.events.listen('health.damage.*', function(_) { 
			damage_flash.visible = true;
			Luxe.timer.schedule(0.05, function() { damage_flash.visible = false; });
		});
	}

	function update_healthbar()
	{
		healthbar.value = player.health;
		healthbar.max_value = player.max_health;
	}

	function update_expbar()
	{
		expbar.value = player.exp;
		expbar.max_value = player.exp_level;
	}
	
	function get_player():Player { return Main.world.player; }
}