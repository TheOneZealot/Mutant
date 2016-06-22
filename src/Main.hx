import luxe.GameConfig;
import luxe.Input;
import luxe.Color;
import luxe.Vector;
import luxe.Parcel;
import luxe.ParcelProgress;

class Main extends luxe.Game 
{
    public static var world:World;

    var loaded = false;

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
            texts: [{id: "assets/maps/test/Gameplay_Testing.tmx"}],
            textures: [
                {id: "assets/textures/Tileset_Editor.png"},
                {id: "assets/textures/Tileset_Mansion.png"},
                {id: "assets/textures/Creature_Player.png"},
                {id: "assets/textures/Creature_Soldier.png"}
            ],
            jsons: [{id: "assets/animations/Creature_Player.json"}]
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

        Luxe.input.bind_key("left", Key.key_a);
        Luxe.input.bind_key("left", Key.left);
        Luxe.input.bind_key("right", Key.key_d);
        Luxe.input.bind_key("right", Key.right);
        Luxe.input.bind_key("jump", Key.space);
        Luxe.input.bind_key("jump", Key.up);

        world = new World();

        Luxe.camera.zoom = 4;

        loaded = true;
    }

    override function onkeyup(e:KeyEvent) 
    {
        if(e.keycode == Key.escape) 
        {
            Luxe.shutdown();
        }
    }

    override function update(dt:Float) 
    {
        if (!loaded) return;

        Luxe.camera.center = world.player.pos;
    }
}