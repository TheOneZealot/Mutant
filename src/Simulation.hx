import luxe.collision.shapes.Shape;

class Simulation extends luxe.Physics.PhysicsEngine
{
	var _static_bodies:Array<Shape>;

	public function new()
	{
		_static_bodies = [];
	}

	override public function update()
	{

	}

	override public function render()
	{

	}

	public function add_static_body(body:Shape)
	{

	}
}