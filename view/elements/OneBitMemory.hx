/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package view.elements;

import openfl.display.BitmapData;
import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.Assets;
import openfl.events.Event;
import events.AppEvent;
import openfl.events.MouseEvent;

class OneBitMemory extends Sprite {

    private var inputActive:Bool;
    private var setActive:Bool;
    private var outActive:Bool;

    private var bottomLayer:Bitmap;
    private var bottomLayerBmpData:BitmapData;

    private var inputButton:Sprite;
    private var setButton:Sprite;

    private var gate1:Bitmap;
    private var gate1BmpData:BitmapData;
    private var gate2:Bitmap;
    private var gate2BmpData:BitmapData;
    private var gate3:Bitmap;
    private var gate3BmpData:BitmapData;
    private var gate4:Bitmap;
    private var gate4BmpData:BitmapData;
    private var input:Bitmap;
    private var inputBmpData:BitmapData;
    private var set:Bitmap;
    private var setBmpData:BitmapData;

    private var bmpContainer:Sprite;

    public function new(inputActive:Bool, setActive:Bool) {
        super();
        this.inputActive = inputActive;
        this.setActive = setActive;
        bmpContainer = new Sprite();
        addChild(bmpContainer);
        addEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
    }

    private function addedToStageHandler(event:Event):Void {
        removeEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/accuPopup_1Bit_bottomLayer2048.png", bottomLayerLoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/accuPopup_1Bit_gate1_out.png", gate1LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/accuPopup_1Bit_gate2_out.png", gate2LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/accuPopup_1Bit_gate3_out.png", gate3LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/accuPopup_1Bit_gate4_out.png", gate4LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/accuPopup_1Bit_input.png", inputLoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/accuPopup_1Bit_set.png", setLoadCompleteHandler);
        showGate1Line();
        showGate3Line();
        showGate4Line();
        setStatus(inputActive, setActive);
        createInputButton();
        createSetButton();
    }


    private function bottomLayerLoadCompleteHandler(bmd:BitmapData):Void {
        bottomLayerBmpData = bmd;
        bottomLayer = new Bitmap(bottomLayerBmpData);
        bottomLayer.name = "bottomLayer";
#if ios
#else
        bottomLayer.scaleX = bottomLayer.scaleY = 0.5;
#end
        bmpContainer.addChild(bottomLayer);
    }

    private function gate1LoadCompleteHandler(bmd:BitmapData):Void {
        gate1BmpData = bmd;
        gate1 = new Bitmap(gate1BmpData);
        gate1.name = "gate1";
        gate1.scaleX = gate1.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function gate2LoadCompleteHandler(bmd:BitmapData):Void {
        gate2BmpData = bmd;
        gate2 = new Bitmap(gate2BmpData);
        gate2.name = "gate2";
        gate2.scaleX = gate2.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function gate3LoadCompleteHandler(bmd:BitmapData):Void {
        gate3BmpData = bmd;
        gate3 = new Bitmap(gate3BmpData);
        gate3.name = "gate3";
        gate3.scaleX = gate3.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function gate4LoadCompleteHandler(bmd:BitmapData):Void {
        gate4BmpData = bmd;
        gate4 = new Bitmap(gate4BmpData);
        gate4.name = "gate4";
        gate4.scaleX = gate4.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function inputLoadCompleteHandler(bmd:BitmapData):Void {
        inputBmpData = bmd;
        input = new Bitmap(inputBmpData);
        input.name = "input";
        input.scaleX = input.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function setLoadCompleteHandler(bmd:BitmapData):Void {
        setBmpData = bmd;
        set = new Bitmap(setBmpData);
        set.name = "set";
        set.scaleX = set.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function createInputButton():Void {
        var s:SimpleRectangle = new SimpleRectangle(100 * AppConstants.SCALE_FACTOR, 60 * AppConstants.SCALE_FACTOR, 0xFF00FF, 0);
        inputButton = new Sprite();
        inputButton.addChild(s);
        inputButton.buttonMode = true;
        inputButton.x = 30 * AppConstants.SCALE_FACTOR;
        inputButton.y = 98 * AppConstants.SCALE_FACTOR;
        inputButton.addEventListener(MouseEvent.MOUSE_DOWN, inputButtonEventHandler);
        addChild(inputButton);
    }

    private function createSetButton():Void {
        var s:SimpleRectangle = new SimpleRectangle(100 * AppConstants.SCALE_FACTOR, 60 * AppConstants.SCALE_FACTOR, 0xFF00FF, 0);
        setButton = new Sprite();
        setButton.addChild(s);
        setButton.buttonMode = true;
        setButton.x = 30 * AppConstants.SCALE_FACTOR;
        setButton.y = 210 * AppConstants.SCALE_FACTOR;
        setButton.addEventListener(MouseEvent.MOUSE_DOWN, setButtonEventHandler);
        addChild(setButton);
    }

    private function inputButtonEventHandler(event:MouseEvent):Void {
        dispatchEvent(new AppEvent(AppEvent.DATA, {id:"oneBitMemoryManualMode"}));
        inputActive = !inputActive;
        setStatus(inputActive, setActive);
    }

    private function setButtonEventHandler(event:MouseEvent):Void {
        dispatchEvent(new AppEvent(AppEvent.DATA, {id:"oneBitMemoryManualMode"}));
        setActive = !setActive;
        setStatus(inputActive, setActive);
    }

    private function showGate1Line():Void {
        hideGate1Line();
        bmpContainer.addChild(gate1);
    }

    private function hideGate1Line():Void {
        if (bmpContainer.getChildByName("gate1") != null) {
            bmpContainer.removeChild(bmpContainer.getChildByName("gate1"));
        }
    }

    private function showGate2Line():Void {
        hideGate2Line();
        bmpContainer.addChild(gate2);
    }

    private function hideGate2Line():Void {
        if (bmpContainer.getChildByName("gate2") != null) {
            bmpContainer.removeChild(bmpContainer.getChildByName("gate2"));
        }
    }

    private function showGate3Line():Void {
        hideGate3Line();
        bmpContainer.addChild(gate3);
    }

    private function hideGate3Line():Void {
        if (bmpContainer.getChildByName("gate3") != null) {
            bmpContainer.removeChild(bmpContainer.getChildByName("gate3"));
        }
    }

    private function showGate4Line():Void {
        hideGate4Line();
        bmpContainer.addChild(gate4);
    }

    private function hideGate4Line():Void {
        if (bmpContainer.getChildByName("gate4") != null) {
            bmpContainer.removeChild(bmpContainer.getChildByName("gate4"));
        }
    }

/**
    Public Methods
**/

    public function showInputLine():Void {
        hideInputLine();
        bmpContainer.addChild(input);
    }

    public function hideInputLine():Void {
        if (bmpContainer.getChildByName("input") != null) {
            bmpContainer.removeChild(bmpContainer.getChildByName("input"));
        }
    }

    public function showSetLine():Void {
        hideSetLine();
        bmpContainer.addChild(set);
    }

    public function hideSetLine():Void {
        if (bmpContainer.getChildByName("set") != null) {
            bmpContainer.removeChild(bmpContainer.getChildByName("set"));
        }
    }

    public function setStatus(input:Bool, set:Bool):Void {
        inputActive = input;
        setActive = set;
        hideInputLine();
        hideSetLine();
        hideGate1Line();
        hideGate2Line();
        hideGate3Line();
        hideGate4Line();
        if (setActive && inputActive) {
            outActive = true;
            showInputLine();
            showSetLine();
            showGate2Line();
            showGate3Line();
        } else if (setActive && !inputActive) {
            outActive = false;
            showSetLine();
            showGate1Line();
            showGate4Line();
        } else if (!setActive && inputActive) {
            showInputLine();
            showGate1Line();
            showGate3Line();
            if (!outActive) {
                showGate4Line();
            } else {
                showGate2Line();
            }

        } else if (!setActive && !inputActive) {
            showGate1Line();
            showGate3Line();
            if (!outActive) {
                showGate4Line();
            } else {
                showGate2Line();
            }
        }
    }

    public function destroy():Void {
        bottomLayerBmpData.dispose();
        gate1BmpData.dispose();
        gate2BmpData.dispose();
        gate3BmpData.dispose();
        gate4BmpData.dispose();
        inputBmpData.dispose();
        setBmpData.dispose();
        if (getChildByName("bottomLayer") != null) {
            removeChild(getChildByName("bottomLayer"));
        }
        for (i in 1 ...5) {
            if (bmpContainer.getChildByName("gate" + i) != null) {
                bmpContainer.removeChild(bmpContainer.getChildByName("gate" + i));
            }
        }
        if (bmpContainer.getChildByName("input") != null) {
            bmpContainer.removeChild(bmpContainer.getChildByName("input"));
        }
        removeChild(inputButton);
        removeChild(setButton);
        hideSetLine();
        removeChild(bmpContainer);
    }
}
