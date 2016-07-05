import luxe.States;
import luxe.Events;
import luxe.Log.*;

class GameState extends States
{
	public static var paused:Bool = false;
	public static var events:Events;

	public function new()
	{
		super({name: 'gamestate'});

		events = new Events();

		add(new Playing());
		add(new Paused());

		set('playing');
	}
}

class Playing extends State
{
	public function new()
	{
		super({name: 'playing'});
	}

	override function init()
	{
		log('initialized $name state');
	}

	override function onenter<T>(_value:T)
	{
		log('entered $name state');
	}

	override function onleave<T>(_value:T)
	{
		log('left $name state');
	}
}

class Paused extends State
{
	public function new()
	{
		super({name: 'paused'});
	}

	override function init()
	{
		log('initialized $name state');
	}

	override function onenter<T>(_value:T)
	{
		log('entered $name state');

		Luxe.physics.nape.paused = true;

		GameState.paused = true;
		GameState.events.fire('paused.enter', _value);
	}

	override function onleave<T>(_value:T)
	{
		log('left $name state');

		Luxe.physics.nape.paused = false;

		GameState.paused = false;
		GameState.events.fire('paused.leave', _value);
	}
}