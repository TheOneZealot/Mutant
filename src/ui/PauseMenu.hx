package ui;

import luxe.Color;

import mint.types.Types;
import mint.Control;
import mint.Panel;
import mint.Label;
import mint.Button;

class PauseMenu extends Panel
{
	public var title:Label;
	public var btn_reset:Button;

	public function new(_parent:Control)
	{
		var color = UserInterface.palette.black.clone();
		color.a = 0.5;
		super({
			parent: _parent,
			name: 'pausemenu',
			x: 0, y: 0, 
			w: _parent.w,
			h: _parent.h,
			depth: 10,
			options: {
				color: color,
			},
		});

		title = new Label({
			parent: this,
			name: '$name.title',
			x: 0, y: 0, w: w, h: h,
			text: 'paused',
			text_size: 16,
			align: TextAlign.center,
			depth: depth+1,
			options: {
				color: UserInterface.palette.white,
			},
		});

		btn_reset = new Button({
			parent: this,
			name: '$name.btn.reset',
			x: (w - 32) / 2,
			y: (h - 8) / 2 + 16,
			w: 32, h: 8,
			text: 'reset',
			depth: depth+10,
			onclick: function(_,_) {
				trace('clicked');
				Luxe.events.fire('reset');
				Main.gamestate.set('playing');
			},
			options: {
				color: UserInterface.palette.white,
				color_hover: UserInterface.palette.self,
				color_down: UserInterface.palette.enemy
			}
		});

		visible = GameState.paused;

		GameState.events.listen('paused.enter', function(_) { visible = true; });
		GameState.events.listen('paused.leave', function(_) { visible = false; });
	}
}