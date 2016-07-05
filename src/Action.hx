import luxe.Log.*;

typedef ActionOptions = {
	@:optional var name:String;
	@:optional var owner:Creature;
};

class Action extends luxe.Objects
{
	public var options:ActionOptions;
	public var owner:Creature;

	public function new(_options:ActionOptions)
	{
		super('action');
		name += id;
		// assign options
		options = _options;
		// assign name
		if (options.name != null) name = options.name;
		// assign owner
		if (options.owner != null) owner = options.owner;
		assertnull(options.owner, 'cant have an action with a null owner');
	}

	public function act() 
	{
		log('${owner.name} acted with $name');
	}
}