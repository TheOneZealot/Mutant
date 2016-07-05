package ui;

import mint.Control;
import mint.types.Types;
import mint.core.Signal;
import mint.core.Macros.*;

typedef AttributeBarOptions = {
  > ControlOptions,
  	@:optional var value:Int;
  	@:optional var max_value:Int;
};

@:allow(mint.render.Render)
class AttributeBar extends Control
{
	@:isVar public var value(default, set):Int = 5;
	@:isVar public var max_value(default, set):Int = 10;

	public var onchange:Signal<Int->Int->Void>;

	var options:AttributeBarOptions;

	public function new(_options:AttributeBarOptions)
	{
		options = _options;

		def(options.name, 'attributebar');

		super(options);

		onchange = new Signal();

		value = def(options.value, 5);
		max_value = def(options.max_value, 10);

		renderer = rendering.get(AttributeBar, this);

		oncreate.emit();
	}

	public override function destroy()
	{
		super.destroy();

		onchange.clear();
		onchange = null;
	}

	function set_value(val:Int):Int
	{
		if (val < 0) val = 0;
		else if (val > max_value) val = max_value;

		value = val;

		onchange.emit(value, max_value);

		return value;
	}

	function set_max_value(val:Int):Int
	{
		max_value = val;

		onchange.emit(value, max_value);

		return max_value;
	}
}