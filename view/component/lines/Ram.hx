/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package view.component.lines;
import model.vo.SnapshotVO;
import model.vo.InstructionVO;
import events.AppEvent;
import openfl.display.BitmapData;
import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.Assets;
import openfl.events.Event;


class Ram extends Sprite {

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
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/RAM-out-0.png", out0LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/RAM-out-1.png", out1LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/RAM-out-2.png", out2LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/RAM-out-3.png", out3LoadCompleteHandler);
    }

    private function out0LoadCompleteHandler(bmd:BitmapData):Void {
        out0 = new Bitmap(bmd);
        out0.name = "ramOut0";
        out0.scaleX = out0.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function out1LoadCompleteHandler(bmd:BitmapData):Void {
        out1 = new Bitmap(bmd);
        out1.name = "ramOut1";
        out1.scaleX = out1.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function out2LoadCompleteHandler(bmd:BitmapData):Void {
        out2 = new Bitmap(bmd);
        out2.name = "ramOut2";
        out2.scaleX = out2.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function out3LoadCompleteHandler(bmd:BitmapData):Void {
        out3 = new Bitmap(bmd);
        out3.name = "ramOut3";
        out3.scaleX = out3.scaleY = AppConstants.SCALE_FACTOR;
        dispatchEvent(new AppEvent(AppEvent.VIEW_READY));
    }

/**
    Public Methods
**/

    public function showLines(snapshotVO:SnapshotVO):Void {
        hideAllLines();
        var codeArr:Array<Bool> = snapshotVO.getCodeArr();
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

    public function hideAllLines():Void {
        for (i in 0 ... 4) {
            if (getChildByName("ramOut" + i) != null) {
                removeChild(getChildByName("ramOut" + i));
            }
        }
    }

}
