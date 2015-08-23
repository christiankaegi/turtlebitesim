package view.component.lines;
import events.AppEvent;
import openfl.display.BitmapData;
import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.Assets;
import openfl.events.Event;

class Keyboard extends Sprite {

    private var out0:Bitmap;
    private var out1:Bitmap;
    private var out2:Bitmap;
    private var out3:Bitmap;


    public function new() {
        super();
        addEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
    }

    private function addedToStageHandler(event:Event):Void {
        removeEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/Key-out-0.png", out0LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/Key-out-1.png", out1LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/Key-out-2.png", out2LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/Key-out-3.png", out3LoadCompleteHandler);
    }

    private function out0LoadCompleteHandler(bmd:BitmapData):Void {
        out0 = new Bitmap(bmd);
        out0.name = "keyOut0";
        out0.scaleX = out0.scaleY = AppConstants.SCALE_FACTOR;
        addChild(out0);
    }

    private function out1LoadCompleteHandler(bmd:BitmapData):Void {
        out1 = new Bitmap(bmd);
        out1.name = "keyOut1";
        out1.scaleX = out1.scaleY = AppConstants.SCALE_FACTOR;
        addChild(out1);
    }

    private function out2LoadCompleteHandler(bmd:BitmapData):Void {
        out2 = new Bitmap(bmd);
        out2.name = "keyOut2";
        out2.scaleX = out2.scaleY = AppConstants.SCALE_FACTOR;
        addChild(out2);
    }

    private function out3LoadCompleteHandler(bmd:BitmapData):Void {
        out3 = new Bitmap(bmd);
        out3.name = "keyOut3";
        out3.scaleX = out3.scaleY = AppConstants.SCALE_FACTOR;
        addChild(out3);
        dispatchEvent(new AppEvent(AppEvent.VIEW_READY));
    }

}
