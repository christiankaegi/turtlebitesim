package view.component.lines;
import model.vo.SnapshotVO;
import model.vo.InstructionVO;
import events.AppEvent;
import openfl.display.BitmapData;
import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.Assets;
import openfl.events.Event;

class Enabler extends Sprite {

    private var e1Out0:Bitmap;
    private var e1Out1:Bitmap;
    private var e1Out2:Bitmap;
    private var e1Out3:Bitmap;

    private var e2Out0:Bitmap;
    private var e2Out1:Bitmap;
    private var e2Out2:Bitmap;
    private var e2Out3:Bitmap;


    public function new() {
        super();
        addEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
    }

    private function addedToStageHandler(event:Event):Void {
        removeEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/Enabler1-out-0.png", e1Out0LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/Enabler1-out-1.png", e1Out1LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/Enabler1-out-2.png", e1Out2LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/Enabler1-out-3.png", e1Out3LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/Enabler2-out-0.png", e2Out0LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/Enabler2-out-1.png", e2Out1LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/Enabler2-out-2.png", e2Out2LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/Enabler2-out-3.png", e2Out3LoadCompleteHandler);
    }

/**
    Enabler 1 Out 0-3
**/

    private function e1Out0LoadCompleteHandler(bmd:BitmapData):Void {
        e1Out0 = new Bitmap(bmd);
        e1Out0.name = "e1Out0";
        e1Out0.scaleX = e1Out0.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function e1Out1LoadCompleteHandler(bmd:BitmapData):Void {
        e1Out1 = new Bitmap(bmd);
        e1Out1.name = "e1Out1";
        e1Out1.scaleX = e1Out1.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function e1Out2LoadCompleteHandler(bmd:BitmapData):Void {
        e1Out2 = new Bitmap(bmd);
        e1Out2.name = "e1Out2";
        e1Out2.scaleX = e1Out2.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function e1Out3LoadCompleteHandler(bmd:BitmapData):Void {
        e1Out3 = new Bitmap(bmd);
        e1Out3.name = "e1Out3";
        e1Out3.scaleX = e1Out3.scaleY = AppConstants.SCALE_FACTOR;
    }

/**
    Enabler 2 Out 0-3
**/

    private function e2Out0LoadCompleteHandler(bmd:BitmapData):Void {
        e2Out0 = new Bitmap(bmd);
        e2Out0.name = "e2Out0";
        e2Out0.scaleX = e2Out0.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function e2Out1LoadCompleteHandler(bmd:BitmapData):Void {
        e2Out1 = new Bitmap(bmd);
        e2Out1.name = "e2Out1";
        e2Out1.scaleX = e2Out1.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function e2Out2LoadCompleteHandler(bmd:BitmapData):Void {
        e2Out2 = new Bitmap(bmd);
        e2Out2.name = "e2Out2";
        e2Out2.scaleX = e2Out2.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function e2Out3LoadCompleteHandler(bmd:BitmapData):Void {
        e2Out3 = new Bitmap(bmd);
        e2Out3.name = "e2Out3";
        e2Out3.scaleX = e2Out3.scaleY = AppConstants.SCALE_FACTOR;
        dispatchEvent(new AppEvent(AppEvent.VIEW_READY));
    }

/**
        Public Methods
**/

    public function showLinesEnabler1(codeArr:Array<Bool>):Void {
        hideAllLines();
        if (codeArr[4] == true) {
            addChild(e1Out3);
        }
        if (codeArr[5] == true) {
            addChild(e1Out2);
        }
        if (codeArr[6] == true) {
            addChild(e1Out1);
        }
        if (codeArr[7] == true) {
            addChild(e1Out0);
        }
    }

    public function showLinesEnabler2(codeArr:Array<Bool>):Void {
        hideAllLines();
        if (codeArr[4] == true) {
            addChild(e2Out3);
        }
        if (codeArr[5] == true) {
            addChild(e2Out2);
        }
        if (codeArr[6] == true) {
            addChild(e2Out1);
        }
        if (codeArr[7] == true) {
            addChild(e2Out0);
        }
    }

    public function hideAllLines():Void {
        for (i in 0 ... 4) {
            if (getChildByName("e1Out" + i) != null) {
                removeChild(getChildByName("e1Out" + i));
            }
            if (getChildByName("e2Out" + i) != null) {
                removeChild(getChildByName("e2Out" + i));
            }
        }
    }
}
