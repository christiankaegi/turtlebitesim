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

class DetailAccumulatorLines extends Sprite {

    private var enablerOut0:Bitmap;
    private var enablerOut0BmpData:BitmapData;
    private var enablerOut1:Bitmap;
    private var enablerOut1BmpData:BitmapData;
    private var enablerOut2:Bitmap;
    private var enablerOut2BmpData:BitmapData;
    private var enablerOut3:Bitmap;
    private var enablerOut3BmpData:BitmapData;

    private var memoryIn0:Bitmap;
    private var memoryIn0BmpData:BitmapData;
    private var memoryIn1:Bitmap;
    private var memoryIn1BmpData:BitmapData;
    private var memoryIn2:Bitmap;
    private var memoryIn2BmpData:BitmapData;
    private var memoryIn3:Bitmap;
    private var memoryIn3BmpData:BitmapData;

    private var memoryOut0:Bitmap;
    private var memoryOut0BmpData:BitmapData;
    private var memoryOut1:Bitmap;
    private var memoryOut1BmpData:BitmapData;
    private var memoryOut2:Bitmap;
    private var memoryOut2BmpData:BitmapData;
    private var memoryOut3:Bitmap;
    private var memoryOut3BmpData:BitmapData;

    private var enable:Bitmap;
    private var enableBmpData:BitmapData;

    private var memorySet:Bitmap;
    private var memorySetBmpData:BitmapData;

    public function new() {
        super();
        addEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
    }

    private function addedToStageHandler(event:Event):Void {
        removeEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/accuPopup_enabler_out_0.png", enablerOut0LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/accuPopup_enabler_out_1.png", enablerOut1LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/accuPopup_enabler_out_2.png", enablerOut2LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/accuPopup_enabler_out_3.png", enablerOut3LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/accuPopup_memory_in_0.png", memoryIn0LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/accuPopup_memory_in_1.png", memoryIn1LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/accuPopup_memory_in_2.png", memoryIn2LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/accuPopup_memory_in_3.png", memoryIn3LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/accuPopup_memory_out_0.png", memoryOut0LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/accuPopup_memory_out_1.png", memoryOut1LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/accuPopup_memory_out_2.png", memoryOut2LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/accuPopup_memory_out_3.png", memoryOut3LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/accuPopup_memory_set.png", memorySetLoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/accuPopup_enabler_enable.png", enableLoadCompleteHandler);
    }

/**
        Enabler Out 0-3
**/

    private function enablerOut0LoadCompleteHandler(bmd:BitmapData):Void {
        enablerOut0BmpData = bmd;
        enablerOut0 = new Bitmap(enablerOut0BmpData);
        enablerOut0.name = "enablerOut0";
        enablerOut0.scaleX = enablerOut0.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function enablerOut1LoadCompleteHandler(bmd:BitmapData):Void {
        enablerOut1BmpData = bmd;
        enablerOut1 = new Bitmap(enablerOut1BmpData);
        enablerOut1.name = "enablerOut1";
        enablerOut1.scaleX = enablerOut1.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function enablerOut2LoadCompleteHandler(bmd:BitmapData):Void {
        enablerOut2BmpData = bmd;
        enablerOut2 = new Bitmap(enablerOut2BmpData);
        enablerOut2.name = "enablerOut2";
        enablerOut2.scaleX = enablerOut2.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function enablerOut3LoadCompleteHandler(bmd:BitmapData):Void {
        enablerOut3BmpData = bmd;
        enablerOut3 = new Bitmap(enablerOut3BmpData);
        enablerOut3.name = "enablerOut3";
        enablerOut3.scaleX = enablerOut3.scaleY = AppConstants.SCALE_FACTOR;
    }

/**
        Memory In 0-3
**/

    private function memoryIn0LoadCompleteHandler(bmd:BitmapData):Void {
        memoryIn0BmpData = bmd;
        memoryIn0 = new Bitmap(memoryIn0BmpData);
        memoryIn0.name = "memoryIn0";
        memoryIn0.scaleX = memoryIn0.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function memoryIn1LoadCompleteHandler(bmd:BitmapData):Void {
        memoryIn1BmpData = bmd;
        memoryIn1 = new Bitmap(memoryIn1BmpData);
        memoryIn1.name = "memoryIn1";
        memoryIn1.scaleX = memoryIn1.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function memoryIn2LoadCompleteHandler(bmd:BitmapData):Void {
        memoryIn2BmpData = bmd;
        memoryIn2 = new Bitmap(memoryIn2BmpData);
        memoryIn2.name = "memoryIn2";
        memoryIn2.scaleX = memoryIn2.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function memoryIn3LoadCompleteHandler(bmd:BitmapData):Void {
        memoryIn3BmpData = bmd;
        memoryIn3 = new Bitmap(memoryIn3BmpData);
        memoryIn3.name = "memoryIn3";
        memoryIn3.scaleX = memoryIn3.scaleY = AppConstants.SCALE_FACTOR;
    }

/**
        Memory Out 0-3
**/

    private function memoryOut0LoadCompleteHandler(bmd:BitmapData):Void {
        memoryOut0BmpData = bmd;
        memoryOut0 = new Bitmap(memoryOut0BmpData);
        memoryOut0.name = "memoryOut0";
        memoryOut0.scaleX = memoryOut0.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function memoryOut1LoadCompleteHandler(bmd:BitmapData):Void {
        memoryOut1BmpData = bmd;
        memoryOut1 = new Bitmap(memoryOut1BmpData);
        memoryOut1.name = "memoryOut1";
        memoryOut1.scaleX = memoryOut1.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function memoryOut2LoadCompleteHandler(bmd:BitmapData):Void {
        memoryOut2BmpData = bmd;
        memoryOut2 = new Bitmap(memoryOut2BmpData);
        memoryOut2.name = "memoryOut2";
        memoryOut2.scaleX = memoryOut2.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function memoryOut3LoadCompleteHandler(bmd:BitmapData):Void {
        memoryOut3BmpData = bmd;
        memoryOut3 = new Bitmap(memoryOut3BmpData);
        memoryOut3.name = "memoryOut3";
        memoryOut3.scaleX = memoryOut3.scaleY = AppConstants.SCALE_FACTOR;
    }

/**
       Enable & Memory Set
**/

    private function enableLoadCompleteHandler(bmd:BitmapData):Void {
        enableBmpData = bmd;
        enable = new Bitmap(enableBmpData);
        enable.name = "enable";
        enable.scaleX = enable.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function memorySetLoadCompleteHandler(bmd:BitmapData):Void {
        memorySetBmpData = bmd;
        memorySet = new Bitmap(memorySetBmpData);
        memorySet.name = "memorySet";
        memorySet.scaleX = memorySet.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function hideMemoryOutLines():Void {
        if (getChildByName("memoryOut0") != null) {
            removeChild(getChildByName("memoryOut0"));
        }
        if (getChildByName("memoryOut1") != null) {
            removeChild(getChildByName("memoryOut1"));
        }
        if (getChildByName("memoryOut2") != null) {
            removeChild(getChildByName("memoryOut2"));
        }
        if (getChildByName("memoryOut3") != null) {
            removeChild(getChildByName("memoryOut3"));
        }
    }

/**
        Public Methods
**/

    public function showInputLines(codeArr:Array<Bool>):Void {
        hideAllInputLines();
        if (codeArr[4] == true) {
            addChild(memoryIn3);
        }
        if (codeArr[5] == true) {
            addChild(memoryIn2);
        }
        if (codeArr[6] == true) {
            addChild(memoryIn1);
        }
        if (codeArr[7] == true) {
            addChild(memoryIn0);
        }
        hideMemoryOutLines();
        if (codeArr[4] == true) {
            addChild(memoryOut3);
        }
        if (codeArr[5] == true) {
            addChild(memoryOut2);
        }
        if (codeArr[6] == true) {
            addChild(memoryOut1);
        }
        if (codeArr[7] == true) {
            addChild(memoryOut0);
        }
    }

    public function hideAllInputLines():Void {
        for (i in 0 ... 4) {
            if (getChildByName("memoryIn" + i) != null) {
                removeChild(getChildByName("memoryIn" + i));
            }
        }
    }

    public function showEnablerOutLines(codeArr:Array<Bool>):Void {
        hideEnablerOutLines();
        if (codeArr[4] == true) {
            addChild(enablerOut3);
        }
        if (codeArr[5] == true) {
            addChild(enablerOut2);
        }
        if (codeArr[6] == true) {
            addChild(enablerOut1);
        }
        if (codeArr[7] == true) {
            addChild(enablerOut0);
        }
    }

    public function hideEnablerOutLines():Void {
        if (getChildByName("enablerOut0") != null) {
            removeChild(getChildByName("enablerOut0"));
        }
        if (getChildByName("enablerOut1") != null) {
            removeChild(getChildByName("enablerOut1"));
        }
        if (getChildByName("enablerOut2") != null) {
            removeChild(getChildByName("enablerOut2"));
        }
        if (getChildByName("enablerOut3") != null) {
            removeChild(getChildByName("enablerOut3"));
        }
    }

    public function showEnableLine():Void {
        hideEnableLine();
        // Clock
        addChild(enable);
    }

    public function hideEnableLine():Void {
        if (getChildByName("enable") != null) {
            removeChild(getChildByName("enable"));
        }
    }

    public function showSetLine():Void {
        addChild(memorySet);
        hideMemoryOutLines();
        if (getChildByName("memoryIn0") != null) {
            if (getChildByName("memoryOut0") == null) {
                addChild(memoryOut0);
            }
        }
        if (getChildByName("memoryIn1") != null) {
            if (getChildByName("memoryOut1") == null) {
                addChild(memoryOut1);
            }
        }
        if (getChildByName("memoryIn2") != null) {
            if (getChildByName("memoryOut2") == null) {
                addChild(memoryOut2);
            }
        }
        if (getChildByName("memoryIn3") != null) {
            if (getChildByName("memoryOut3") == null) {
                addChild(memoryOut3);
            }
        }
    }

    public function hideSetLine():Void {
        if (getChildByName("memorySet") != null) {
            removeChild(getChildByName("memorySet"));
        }
    }

    public function destroy():Void {
        enablerOut0BmpData.dispose();
        enablerOut1BmpData.dispose();
        enablerOut2BmpData.dispose();
        enablerOut3BmpData.dispose();

        memoryIn0BmpData.dispose();
        memoryIn1BmpData.dispose();
        memoryIn2BmpData.dispose();
        memoryIn3BmpData.dispose();

        memoryOut0BmpData.dispose();
        memoryOut1BmpData.dispose();
        memoryOut2BmpData.dispose();
        memoryOut3BmpData.dispose();

        enableBmpData.dispose();
        memorySetBmpData.dispose();


        if (getChildByName("memoryIn0") != null) {
            removeChild(getChildByName("memoryIn0"));
        }
        if (getChildByName("memoryIn1") != null) {
            removeChild(getChildByName("memoryIn1"));
        }
        if (getChildByName("memoryIn2") != null) {
            removeChild(getChildByName("memoryIn2"));
        }
        if (getChildByName("memoryIn3") != null) {
            removeChild(getChildByName("memoryIn3"));
        }
        hideMemoryOutLines();
        hideEnablerOutLines();
        if (getChildByName("enable") != null) {
            removeChild(getChildByName("enable"));
        }
        if (getChildByName("memorySet") != null) {
            removeChild(getChildByName("memorySet"));
        }
    }
}
