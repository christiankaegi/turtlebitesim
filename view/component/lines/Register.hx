/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package view.component.lines;
import model.vo.InstructionVO;
import events.AppEvent;
import openfl.display.BitmapData;
import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.Assets;
import openfl.events.Event;


class Register extends Sprite {

    private var r1out0:Bitmap;
    private var r1out1:Bitmap;
    private var r1out2:Bitmap;
    private var r1out3:Bitmap;

    private var r2out0:Bitmap;
    private var r2out1:Bitmap;
    private var r2out2:Bitmap;
    private var r2out3:Bitmap;

    public function new() {
        super();
        addEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
    }

    private function addedToStageHandler(event:Event):Void {
        removeEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/R1-out-0.png", r1out0LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/R1-out-1.png", r1out1LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/R1-out-2.png", r1out2LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/R1-out-3.png", r1out3LoadCompleteHandler);

        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/R2-out-0.png", r2out0LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/R2-out-1.png", r2out1LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/R2-out-2.png", r2out2LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/R2-out-3.png", r2out3LoadCompleteHandler);

    }

/**
    Register 1
**/

    private function r1out0LoadCompleteHandler(bmd:BitmapData):Void {
        r1out0 = new Bitmap(bmd);
        r1out0.name = "r1Out0";
        r1out0.scaleX = r1out0.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function r1out1LoadCompleteHandler(bmd:BitmapData):Void {
        r1out1 = new Bitmap(bmd);
        r1out1.name = "r1Out1";
        r1out1.scaleX = r1out1.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function r1out2LoadCompleteHandler(bmd:BitmapData):Void {
        r1out2 = new Bitmap(bmd);
        r1out2.name = "r1Out2";
        r1out2.scaleX = r1out2.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function r1out3LoadCompleteHandler(bmd:BitmapData):Void {
        r1out3 = new Bitmap(bmd);
        r1out3.name = "r1Out3";
        r1out3.scaleX = r1out3.scaleY = AppConstants.SCALE_FACTOR;
    }

/**
    Register 2
**/

    private function r2out0LoadCompleteHandler(bmd:BitmapData):Void {
        r2out0 = new Bitmap(bmd);
        r2out0.name = "r2Out0";
        r2out0.scaleX = r2out0.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function r2out1LoadCompleteHandler(bmd:BitmapData):Void {
        r2out1 = new Bitmap(bmd);
        r2out1.name = "r2Out1";
        r2out1.scaleX = r2out1.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function r2out2LoadCompleteHandler(bmd:BitmapData):Void {
        r2out2 = new Bitmap(bmd);
        r2out2.name = "r2Out2";
        r2out2.scaleX = r2out2.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function r2out3LoadCompleteHandler(bmd:BitmapData):Void {
        r2out3 = new Bitmap(bmd);
        r2out3.name = "r2Out3";
        r2out3.scaleX = r2out3.scaleY = AppConstants.SCALE_FACTOR;
        dispatchEvent(new AppEvent(AppEvent.VIEW_READY));
    }

/**
    Public Methods
**/

    public function showLinesRegister1(codeArr:Array<Bool>):Void {
        hideLines("1");
        if (codeArr[4] == true) {
            addChild(r1out3);
        }
        if (codeArr[5] == true) {
            addChild(r1out2);
        }
        if (codeArr[6] == true) {
            addChild(r1out1);
        }
        if (codeArr[7] == true) {
            addChild(r1out0);
        }
    }

    public function showLinesRegister2(codeArr:Array<Bool>):Void {
        hideLines("2");
        if (codeArr[4] == true) {
            addChild(r2out3);
        }
        if (codeArr[5] == true) {
            addChild(r2out2);
        }
        if (codeArr[6] == true) {
            addChild(r2out1);
        }
        if (codeArr[7] == true) {
            addChild(r2out0);
        }
    }

    public function hideLines(id:String):Void {
        for (i in 0 ... 4) {
            if (getChildByName("r" + id + "Out" + i) != null) {
                removeChild(getChildByName("r" + id + "Out" + i));
            }
        }
    }

    public function hideAllLines():Void {
        hideLines("1");
        hideLines("2");
    }

}
