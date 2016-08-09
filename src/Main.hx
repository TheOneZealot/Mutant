import luxe.GameConfig;
import luxe.Input;
import luxe.Color;
import luxe.Vector;
import luxe.States;
import luxe.Parcel;
import luxe.ParcelProgress;
import luxe.Log.*;

class Main extends luxe.Game 
{
    public static var gamestate:GameState;
    public static var world:World;
    public static var ui:UserInterface;

    var loaded:Bool = false;

    // camera shake
    static var min_shake:Float = 0.1;
    static var shaking:Bool = false;
    static var shake_amount:Float = 0;
    static var shake_vector:Vector = new Vector();

    override function config(config:GameConfig) 
    {
        config.window.title = 'mutant';
        config.window.width = 960;
        config.window.height = 640;
        config.window.fullscreen = false;

        return config;
    }

    override function ready() 
    {
        var parcel:Parcel = new Parcel({
            texts: [
                {id: 'assets/maps/test/Gameplay_Testing.tmx'}
            ],
            textures: [
                {id: 'assets/textures/Tileset_Editor.png'},
                {id: 'assets/textures/Tileset_Mansion.png'},
                {id: 'assets/textures/Creature_Player.png'},
                {id: 'assets/textures/Creature_Soldier.png'},
                {id: 'assets/textures/Creature_Scientist.png'},
                {id: 'assets/textures/Projectile_Bullet.png'},
                {id: 'assets/textures/Prop_Crate.png'}
            ],
            jsons: [
                {id: 'assets/animations/Creature_Player.json'},
                {id: 'assets/animations/Creature_Soldier.json'},
                {id: 'assets/animations/Creature_Scientist.json'}
            ],
            fonts: [
                {id: 'assets/fonts/Default.fnt'}
            ]
        });

        new ParcelProgress({
            parcel: parcel,
            background: new Color(1, 1, 1, 0.85),
            oncomplete: onassetsloaded
        });

        parcel.load();
    }

    function onassetsloaded(_)
    {
        Luxe.renderer.clear_color = new Color(0.23, 0.53, 0.53);
        Luxe.renderer.font = Luxe.resources.font('assets/fonts/Default.fnt');

        Luxe.input.bind_key('left', Key.key_a);
        Luxe.input.bind_key('left', Key.left);
        Luxe.input.bind_key('right', Key.key_d);
        Luxe.input.bind_key('right', Key.right);
        Luxe.input.bind_key('jump', Key.key_w);
        Luxe.input.bind_key('jump', Key.up);
        Luxe.input.bind_key('act', Key.space);

        gamestate = new GameState();
        world = new World();
        ui = new UserInterface();

        Luxe.camera.zoom = 4;

        world.player.events.listen('health.damage.*', function(args) {
            shake(args.amount);
        });

        loaded = true;

        gamestate.set('playing');
    }

    override function onkeyup(e:KeyEvent) 
    {
        if(e.keycode == Key.escape) 
        {
            if (gamestate.current_state.name == 'paused')
            {
                gamestate.set('playing');
            }
            else
            {
                gamestate.set('paused');
            }
        }
        if(e.keycode == Key.key_r)
        {
            Luxe.events.fire('reset');
        }
    }

    override function update(dt:Float) 
    {
        if (!loaded || world.player == null || GameState.paused) return;

        if(shaking) 
        {
            //get a random direction
            shake_vector = Luxe.utils.geometry.random_point_in_unit_circle();

            //apply the shake amount scale
            shake_vector.x *= shake_amount;
            shake_vector.y *= shake_amount;
            shake_vector.z *= shake_amount;

            //fade the shake down
            shake_amount *= 0.9;

            //stop when it's too low
            if(shake_amount <= min_shake) 
            {
                shake_vector = new Vector();
                shake_amount = 0;
                shaking = false;
            }
        }

        Luxe.camera.center = Vector.Add(world.player.pos, shake_vector);
    }

    static public function shake(_amount:Float)
    {
        shaking = true;
        shake_amount = _amount;
    }
}