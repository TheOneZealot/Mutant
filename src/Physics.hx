import nape.callbacks.CbType;
import nape.dynamics.InteractionFilter;
import nape.dynamics.InteractionGroup;

class Physics
{
	// callback types
	public static var types = {
		terrain: new CbType(),
		creature: new CbType(),
		projectile: new CbType(),
		physobj: new CbType(),
	};

	// interaction filters
	public static var filters = {
		terrain: new InteractionFilter(1),
		creature: new InteractionFilter(2, ~(4)),
		projectile: new InteractionFilter(4, ~(2)),
		physobj: new InteractionFilter(8),
	};
}