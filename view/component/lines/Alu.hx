package view.component.lines;
import events.AppEvent;
import openfl.display.BitmapData;
import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.Assets;
import openfl.events.Event;


class Alu extends Sprite {

    private var out0:Bitmap;
    private var out1:Bitmap;
    private var out2:Bitmap;
    private var out3:Bitmap;
    private var equal:Bitmap;


    public function new() {
        super();
        addEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
    }

    private function addedToStageHandler(event:Event):Void {
        removeEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/ALU-out-0.png", out0LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/ALU-out-1.png", out1LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/ALU-out-2.png", out2LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/ALU-out-3.png", out3LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/ALU-out-equal.png", equalLoadCompleteHandler);
    }

    private function out0LoadCompleteHandler(bmd:BitmapData):Void {
        out0 = new Bitmap(bmd);
        out0.name = "aluOut0";
        out0.scaleX = out0.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function out1LoadCompleteHandler(bmd:BitmapData):Void {
        out1 = new Bitmap(bmd);
        out1.name = "aluOut1";
        out1.scaleX = out1.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function out2LoadCompleteHandler(bmd:BitmapData):Void {
        out2 = new Bitmap(bmd);
        out2.name = "aluOut2";
        out2.scaleX = out2.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function out3LoadCompleteHandler(bmd:BitmapData):Void {
        out3 = new Bitmap(bmd);
        out3.name = "aluOut3";
        out3.scaleX = out3.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function equalLoadCompleteHandler(bmd:BitmapData):Void {
        equal = new Bitmap(bmd);
        equal.name = "aluEqual";
        equal.scaleX = equal.scaleY = AppConstants.SCALE_FACTOR;
        dispatchEvent(new AppEvent(AppEvent.VIEW_READY));
    }

    public function showLines(codeArr:Array<Bool>):Void {
        hideLinesOut();
        if (codeArr[4] == true) {
            addChild(out3);
        }
        if (codeArr[5] == true) {
            addChild(out2);
        }
        if (codeArr[6] == true) {
            addChild(out1);
        }
        if (codeArr[7] == true) {
            addChild(out0);
        }
    }

    public function showLineEqual():Void {
        if (getChildByName("aluEqual") == null) {
            addChild(equal);
        }
    }
    public function hideLinesOut():Void {
        for (i in 0 ... 4) {
            if (getChildByName("aluOut" + i) != null) {
                removeChild(getChildByName("aluOut" + i));
            }
        }
    }

    public function hideLineEqual():Void {
        if (getChildByName("aluEqual") != null) {
            removeChild(getChildByName("aluEqual"));
        }
    }

}
