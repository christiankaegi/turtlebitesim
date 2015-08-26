/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package view.component.lines;
import model.vo.SnapshotVO;
import model.vo.InstructionVO;
import openfl.text.TextField;
import events.AppEvent;
import openfl.display.BitmapData;
import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.Assets;
import openfl.events.Event;

class Gates extends Sprite {

    private var g1Out0:Bitmap;
    private var g1Out1:Bitmap;
    private var g1Out2:Bitmap;
    private var g1Out3:Bitmap;
    private var g2Out:Bitmap;
    private var g3Out:Bitmap;
    private var g4Out:Bitmap;
    private var g5Out:Bitmap;
    private var g6Out:Bitmap;
    private var g7Out:Bitmap;
    private var g8Out:Bitmap;
    private var g9Out:Bitmap;

    private var tf:TextField;

    public function new() {
        super();
        addEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
    }

    private function addedToStageHandler(event:Event):Void {
        removeEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/G1-out-0.png", g1Out0LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/G1-out-1.png", g1Out1LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/G1-out-2.png", g1Out2LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/G1-out-3.png", g1Out3LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/G2-out.png", g2OutLoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/G3-out.png", g3OutLoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/G4-out.png", g4OutLoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/G5-out.png", g5OutLoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/G6-out.png", g6OutLoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/G7-out.png", g7OutLoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/G8-out.png", g8OutLoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/G9-out.png", g9OutLoadCompleteHandler);
    }

/**
    G1 Out 0 - 3
**/

    private function g1Out0LoadCompleteHandler(bmd:BitmapData):Void {
        g1Out0 = new Bitmap(bmd);
        g1Out0.name = "g1Out0";
        g1Out0.scaleX = g1Out0.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function g1Out1LoadCompleteHandler(bmd:BitmapData):Void {
        g1Out1 = new Bitmap(bmd);
        g1Out1.name = "g1Out1";
        g1Out1.scaleX = g1Out1.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function g1Out2LoadCompleteHandler(bmd:BitmapData):Void {
        g1Out2 = new Bitmap(bmd);
        g1Out2.name = "g1Out2";
        g1Out2.scaleX = g1Out2.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function g1Out3LoadCompleteHandler(bmd:BitmapData):Void {
        g1Out3 = new Bitmap(bmd);
        g1Out3.name = "g1Out3";
        g1Out3.scaleX = g1Out3.scaleY = AppConstants.SCALE_FACTOR;
    }
/**
    G2 Out
**/

    private function g2OutLoadCompleteHandler(bmd:BitmapData):Void {
        g2Out = new Bitmap(bmd);
        g2Out.name = "g2Out";
        g2Out.scaleX = g2Out.scaleY = AppConstants.SCALE_FACTOR;
    }

/**
    G3 Out
**/

    private function g3OutLoadCompleteHandler(bmd:BitmapData):Void {
        g3Out = new Bitmap(bmd);
        g3Out.name = "g3Out";
        g3Out.scaleX = g3Out.scaleY = AppConstants.SCALE_FACTOR;
    }

/**
    G4 Out
**/

    private function g4OutLoadCompleteHandler(bmd:BitmapData):Void {
        g4Out = new Bitmap(bmd);
        g4Out.name = "g4Out";
        g4Out.scaleX = g4Out.scaleY = AppConstants.SCALE_FACTOR;
    }

/**
    G5 Out
**/

    private function g5OutLoadCompleteHandler(bmd:BitmapData):Void {
        g5Out = new Bitmap(bmd);
        g5Out.name = "g5Out";
        g5Out.scaleX = g5Out.scaleY = AppConstants.SCALE_FACTOR;
    }

/**
    G6 Out
**/

    private function g6OutLoadCompleteHandler(bmd:BitmapData):Void {
        g6Out = new Bitmap(bmd);
        g6Out.name = "g6Out";
        g6Out.scaleX = g6Out.scaleY = AppConstants.SCALE_FACTOR;
// is on if no input!
        addChild(g6Out);
    }

/**
    G7 Out
**/

    private function g7OutLoadCompleteHandler(bmd:BitmapData):Void {
        g7Out = new Bitmap(bmd);
        g7Out.name = "g7Out";
        g7Out.scaleX = g7Out.scaleY = AppConstants.SCALE_FACTOR;
    }

/**
    G8 Out
**/

    private function g8OutLoadCompleteHandler(bmd:BitmapData):Void {
        g8Out = new Bitmap(bmd);
        g8Out.name = "g8Out";
        g8Out.scaleX = g8Out.scaleY = AppConstants.SCALE_FACTOR;
    }

/**
    G9 Out
**/

    private function g9OutLoadCompleteHandler(bmd:BitmapData):Void {
        g9Out = new Bitmap(bmd);
        g9Out.name = "g9Out";
        g9Out.scaleX = g9Out.scaleY = AppConstants.SCALE_FACTOR;
        dispatchEvent(new AppEvent(AppEvent.VIEW_READY));
    }

/**
    Public Methods
**/

    public function showLines(instruction:InstructionVO, ?accumulator:SnapshotVO, ?register1:SnapshotVO, ?ram:SnapshotVO):Void {
        var opcode:String = instruction.code.substr(0, 4);
        hideAllLines();
        switch(opcode) {
            case AppConstants.OPCODE_MOV :
                addChild(g2Out);
                addChild(g3Out);
                if (instruction.code.substr(4, 2) == "00") {
                    addChild(g4Out);
                }
            case AppConstants.OPCODE_LDI :
                addChild(g4Out);
                showLinesG1(instruction.codeArr);
            case AppConstants.OPCODE_ALU :
                addChild(g4Out);
                showLinesG1(accumulator.getCodeArr());
            case AppConstants.OPCODE_SDA :
                addChild(g3Out);
                addChild(g5Out);
            case AppConstants.OPCODE_LDA :
                addChild(g4Out);
                addChild(g5Out);
                showLinesG1(ram.getCodeArr());
            case AppConstants.OPCODE_INP :
                addChild(g2Out);
                addChild(g3Out);
                if (instruction.code.substr(4, 2) == "00") {
                    addChild(g4Out);
                }
            case AppConstants.OPCODE_OUT :
                addChild(g2Out);
                addChild(g3Out);
                if (instruction.code.substr(4, 2) == "00") {
                    addChild(g4Out);
                }
            case AppConstants.OPCODE_JE :
                if (accumulator.getDecimal() == register1.getDecimal()) {
                    addChild(g7Out);
                    addChild(g8Out);
                }
            case AppConstants.OPCODE_JNE :
                if (accumulator.getDecimal() != register1.getDecimal()) {
                    addChild(g8Out);
                    addChild(g9Out);
                }

            case AppConstants.OPCODE_JMP :
                addChild(g8Out);
        }
    }

    public function showLinesG1(codeArr:Array<Bool>):Void {
        hideLinesG1();
        if (codeArr[4] == true) {
            addChild(g1Out3);
        }
        if (codeArr[5] == true) {
            addChild(g1Out2);
        }
        if (codeArr[6] == true) {
            addChild(g1Out1);
        }
        if (codeArr[7] == true) {
            addChild(g1Out0);
        }
    }

    public function hideLinesG1():Void {
        for (i in 0 ... 4) {
            if (getChildByName("g1Out" + i) != null) {
                removeChild(getChildByName("g1Out" + i));
            }
        }
    }

    public function showLineG6():Void {
        // ALU Equal
        if (getChildByName("g6Out") == null) {
            addChild(g6Out);
        }

    }

    public function hideLineG6():Void {
        if (getChildByName("g6Out") != null) {
            removeChild(getChildByName("g6Out"));
        }
    }

    public function hideAllLines():Void {
        for (i in 0 ... 4) {
            if (getChildByName("g1Out" + i) != null) {
                removeChild(getChildByName("g1Out" + i));
            }
        }
        for (i in 2 ... 10) {
            if (getChildByName("g" + i + "Out") != null && i != 6) {
                removeChild(getChildByName("g" + i + "Out"));
            }
        }
    }
}
