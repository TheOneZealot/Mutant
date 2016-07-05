package ui.render;

import luxe.Vector;
import luxe.Color;
import luxe.Log.*;

import phoenix.geometry.QuadGeometry;

import mint.types.Types;
import mint.render.Rendering;
import mint.render.luxe.LuxeMintRender;
import mint.render.luxe.Convert;

import ui.render.MutantMintRenderer;

private typedef MutantMintAttributeBarOptions = {
	var color:Color;
	var color_bar:Color;
	@:optional var margin:Float;
	@:optional var padding:Float;
}

class AttributeBar extends mint.render.Render
{
	public var attribute_bar:ui.AttributeBar;
	public var visual:QuadGeometry;
	public var bars:Array<QuadGeometry>;

	public var color:Color;
	public var color_bar:Color;
	public var color_bar_empty:Color;

	var render:MutantMintRenderer;
	var margin:Float = 1.0;
	var padding:Float = 0.5;

	public function new(_render:MutantMintRenderer, _control:ui.AttributeBar)
	{
		attribute_bar = _control;
		render = _render;

		super(render, _control);

		var _opt:MutantMintAttributeBarOptions = attribute_bar.options.options;

		color = def(_opt.color, new Color().rgb(0x292929));
		color_bar = def(_opt.color_bar, new Color().rgb(0x9dca63));
		var dark_bar:ColorHSV = color_bar.toColorHSV();
		dark_bar.v *= 0.3;
		color_bar_empty = dark_bar.toColor();
		margin = def(_opt.margin, 1.0);
		padding = def(_opt.padding, 0.5);

		visual = Luxe.draw.box({
			id: '${control.name}.visual',
			batcher: render.options.batcher,
			x: sx,
			y: sy,
			w: sw,
			h: sh,
			color: color,
			depth: render.options.depth + control.depth,
			visible: control.visible,
		});

		var _margin = cs(margin);

		bars = [];
		for (i in 0...attribute_bar.max_value)
		{
			create_bar(i);
		}

		attribute_bar.onchange.listen(onchange);
	}

	function onchange(_val:Int, _max:Int)
	{
		if (bars.length != _max)
		{
			for (i in 0..._max)
			{
				if (bars[i] != null)
				{
					bars[i].drop();
				}
				create_bar(i);
			}
		}
		for (i in 0..._max)
		{
			bars[i].color = (i < _val) ? color_bar : color_bar_empty;
		}
	}

	function create_bar(_index:Int)
	{
		var _margin = cs(margin);
		bars[_index] = Luxe.draw.box({
			id: '${control.name}.bar.$_index',
			batcher: render.options.batcher,
			x: sx+get_bar_x(_index),
			y: sy+_margin,
			w: get_bar_width(),
			h: sh-(_margin*2),
			color: (_index < attribute_bar.value) ? color_bar : color_bar_empty,
			depth: render.options.depth + control.depth + 0.001,
			visible: control.visible,
		});
	}

	function get_bar_width()
	{
		var _margin = cs(margin);
		var _padding = cs(padding);
		var _width = (sw - (_margin * 2) - (_padding * (attribute_bar.max_value - 1))) / attribute_bar.max_value;

		return _width;
	}

	function get_bar_x(_index:Int)
	{
		var _margin = cs(margin);
		var _padding = cs(padding);
		var _width = get_bar_width();
		var _x = _margin + (_padding + _width) * _index;

		return _x;
	}

	override function ondestroy()
	{
		visual.drop();
		for (bar in bars) { bar.drop(); }
		visual = null;
		bars = null;
	}

	override function onbounds()
	{
		var _margin = cs(margin);

		visual.transform.pos.set_xy(sx, sy);
		visual.resize_xy(sw, sh);

		for (i in 0...bars.length)
		{
			var bar:QuadGeometry = bars[i];
			bar.transform.pos.set_xy(sx+get_bar_x(i), sy+_margin);
			bar.resize_xy(get_bar_width(), sh-(_margin*2));
		}
	}

	override function onvisible(_visible:Bool)
	{
		visual.visible = _visible;
		for (bar in bars) { bar.visible = _visible; }
	}

	override function ondepth(_depth:Float)
	{
		visual.depth = render.options.depth + _depth;
		for (bar in bars) { bar.depth = visual.depth + 0.001; }
	}
}