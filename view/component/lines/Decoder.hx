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

class Decoder extends Sprite {

    private var out1:Bitmap;
    private var out2:Bitmap;
    private var out3:Bitmap;


    public function new() {
        super();
        addEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
    }

    private function addedToStageHandler(event:Event):Void {
        removeEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/Decoder-out-1.png", out1LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/Decoder-out-2.png", out2LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/Decoder-out-3.png", out3LoadCompleteHandler);
    }

    private function out1LoadCompleteHandler(bmd:BitmapData):Void {
        out1 = new Bitmap(bmd);
        out1.name = "decOut1";
        out1.scaleX = out1.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function out2LoadCompleteHandler(bmd:BitmapData):Void {
        out2 = new Bitmap(bmd);
        out2.name = "decOut2";
        out2.scaleX = out2.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function out3LoadCompleteHandler(bmd:BitmapData):Void {
        out3 = new Bitmap(bmd);
        out3.name = "decOut3";
        out3.scaleX = out3.scaleY = AppConstants.SCALE_FACTOR;
        dispatchEvent(new AppEvent(AppEvent.VIEW_READY));
    }

/**
        Public Methods
**/

    public function showLines(code:String):Void {
        switch(code.substr(4, 2)) {
            case AppConstants.MULTIPLEXER_ACCUMULATOR :
                addChild(out3);
            case AppConstants.MULTIPLEXER_REGISTER1 :
                addChild(out2);
            case AppConstants.MULTIPLEXER_REGISTER2 :
                addChild(out1);
        }
    }

    public function hideAllLines():Void {
        for (i in 1 ... 4) {

            if (getChildByName("decOut" + i) != null) {
                removeChild(getChildByName("decOut" + i));
            }
        }
    }

}
