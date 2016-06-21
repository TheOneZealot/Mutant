import nape.geom.Vec2;

class PlayerController extends Controller
{
	public function new()
	{
		super();
	}

	override function update(dt:Float)
	{
		super.update(dt);

		if (Luxe.input.inputpressed("jump"))
		{
			jump();
		}

		if (Luxe.input.inputdown("left"))
		{
			move(-1);
		}
		if (Luxe.input.inputdown("right"))
		{
			move(1);
		}
	}
}