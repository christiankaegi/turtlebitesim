/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package view.component.lines;
import events.AppEvent;
import openfl.display.BitmapData;
import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.Assets;
import openfl.events.Event;

class BottomLayer extends Sprite {

    private var bmp:Bitmap;

    public function new() {
        super();
        addEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
    }

    private function addedToStageHandler(event:Event):Void {
        removeEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/bottom_layer.png", bmpLoadCompleteHandler);
    }

    private function bmpLoadCompleteHandler(bmd:BitmapData):Void {
        bmp = new Bitmap(bmd);
        bmp.scaleX = bmp.scaleY = AppConstants.SCALE_FACTOR;
        addChild(bmp);
        dispatchEvent(new AppEvent(AppEvent.VIEW_READY));
    }

}
