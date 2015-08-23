package view.component;
import events.AppEvent;
import openfl.display.BitmapData;
import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.Assets;
import openfl.events.Event;

class TopLayer extends Sprite {

    private var bmp:Bitmap;
    private var bmp2048:Bitmap;
    private var clock:Bitmap;

    public function new() {
        super();
        addEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
    }

    private function addedToStageHandler(event:Event):Void {
        removeEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
#if ios
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/top_layer2048.png", bmp2048LoadCompleteHandler, true);
#else
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/top_layer.png", bmpLoadCompleteHandler, true);
#end
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/clockGlow.png", clockLoadCompleteHandler, true);
    }

    private function bmpLoadCompleteHandler(bmd:BitmapData):Void {
        bmp = new Bitmap(bmd);
        addChild(bmp);
    }

    private function bmp2048LoadCompleteHandler(bmd:BitmapData):Void {
        bmp2048 = new Bitmap(bmd);
        addChild(bmp2048);
    }

    private function clockLoadCompleteHandler(bmd:BitmapData):Void {
        clock = new Bitmap(bmd);
        clock.name = "clockGlow";
#if ios
#else
        clock.scaleX = clock.scaleY = 0.5;
#end
        clock.x = 561 * AppConstants.SCALE_FACTOR;
        clock.y = 574 * AppConstants.SCALE_FACTOR;
        dispatchEvent(new AppEvent(AppEvent.VIEW_READY));
    }

/**
    Public Methods
**/

    public function showClock():Void {
        hideClock();
        addChild(clock);
    }

    public function hideClock():Void {
        if (getChildByName("clockGlow") != null) {
            removeChild(getChildByName("clockGlow"));
        }
    }
}
