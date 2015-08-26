/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package view.component.lines;
import openfl.display.Shape;
import events.AppEvent;
import openfl.display.BitmapData;
import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.Assets;
import openfl.events.Event;

class Clock extends Sprite {

    private var out:Bitmap;

    public function new() {
        super();
        addEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
    }

    private function addedToStageHandler(event:Event):Void {
        removeEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/Clock.png", outLoadCompleteHandler);
    }

    private function outLoadCompleteHandler(bmd:BitmapData):Void {
        out = new Bitmap(bmd);
        out.name = "clockOut";
        out.scaleX = out.scaleY = AppConstants.SCALE_FACTOR;
    }

    public function showLines():Void {
        addChild(out);
    }

    public function hideAllLines():Void {
        if (getChildByName("clockOut") != null) {
            removeChild(getChildByName("clockOut"));
        }
    }

}
