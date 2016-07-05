package ui;

import luxe.Vector;
import luxe.Log.*;

import mint.Control;
import mint.Panel;

import ui.AttributeBar;

class CreatureStatus extends Panel
{
	public var target:Creature;

	public var healthbar:AttributeBar;

	public function new(_parent:Control, _target:Creature)
	{
		target = _target;

		super({
			parent: _parent,
			name: 'creaturestatus.${target.name}',
			x: 0, y: 0, w: 20, h: 4,
		});

		healthbar = new AttributeBar({
			parent: this,
			name: 'healthbar',
			x: 0, y: 0, w: 20, h: 4,
			value: target.health,
			max_value: target.max_health,
			options: {
				color: UserInterface.palette.black,
				color_bar: UserInterface.palette.enemy,
				margin: 1,
				padding: 0.5,
			},
		});

		target.transform.listen_pos(function (_pos:Vector) {
			var screen_pos:Vector = get_screen_pos(target.pos);
			x = screen_pos.x;
			y = screen_pos.y;
		});

		target.events.listen('health.*', function(_) { Luxe.next(update_health); });
		target.events.listen('kill', function (_) {
			healthbar.destroy();
			destroy();
		});
	}

	function update_health()
	{
		healthbar.value = target.health;
		healthbar.max_value = target.max_health;
	}

	function get_screen_pos(_pos:Vector):Vector
	{
		return Vector.Divide(Luxe.camera.world_point_to_screen(Vector.Add(_pos, new Vector(-w/2, -(h/2)-20))), Main.ui.scale);
	}
}