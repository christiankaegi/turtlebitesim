package view.component;
import events.AppEvent;
import openfl.display.BitmapData;
import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.Assets;
import openfl.events.Event;

class Welcome extends Sprite {

    private var bmpPower:Bitmap;
    private var bmpArchitecture:Bitmap;

    public function new() {
        super();
        addEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
    }

    private function addedToStageHandler(event:Event):Void {
        removeEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/architecture.png", architectureLoadCompleteHandler);
#if ios
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/PowerOffCover2048.png", powerLoadCompleteHandler);
#else
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/PowerOffCover.png", powerLoadCompleteHandler);
#end
    }

    private function powerLoadCompleteHandler(bmd:BitmapData):Void {
        bmpPower = new Bitmap(bmd);
        bmpPower.name = "powerOffCover";
        addChild(bmpPower);
    }

    private function architectureLoadCompleteHandler(bmd:BitmapData):Void {
        bmpArchitecture = new Bitmap(bmd);
        bmpArchitecture.name = "architecture";
#if ios
#else
        bmpArchitecture.scaleX = bmpArchitecture.scaleY = 0.5;
#end
        dispatchEvent(new AppEvent(AppEvent.VIEW_READY));
    }

/**
    Public Methods
**/

    public function show():Void {
        hide();
        addChild(bmpPower);
    }

    public function hide():Void {
        if (getChildByName("powerOffCover") != null) {
            removeChild(getChildByName("powerOffCover"));
        }
        if (getChildByName("architecture") != null) {
            removeChild(getChildByName("architecture"));
        }
    }

    public function toggleArchitecture():Void {
        if (getChildByName("architecture") != null) {
            removeChild(getChildByName("architecture"));
        } else {
            addChild(bmpArchitecture);
        }
    }
}
