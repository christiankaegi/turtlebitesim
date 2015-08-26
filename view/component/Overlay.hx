/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package view.component;

import view.elements.SimpleRectangle;
import events.AppEvent;
import openfl.display.BitmapData;
import openfl.display.Bitmap;
import openfl.events.MouseEvent;
import openfl.display.Sprite;
import openfl.Assets;
import openfl.events.Event;

class Overlay extends Sprite {

    private var bmpMarkUnits:Bitmap;
    private var bmpFlowArrows:Bitmap;

    public function new() {
        super();
        addEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
    }

    private function addedToStageHandler(event:Event):Void {
        removeEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/FlowArrows2048.png", flowArrowsLoadCompleteHandler, true);
#if ios
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/MarkUnits2048.png", markUnitsLoadCompleteHandler, true);
#else
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/MarkUnits.png", markUnitsLoadCompleteHandler, true);
#end
    }

    private function markUnitsLoadCompleteHandler(bmd:BitmapData):Void {
        bmpMarkUnits = new Bitmap(bmd);
        bmpMarkUnits.name = "markUnits";
    }

    private function flowArrowsLoadCompleteHandler(bmd:BitmapData):Void {
        bmpFlowArrows = new Bitmap(bmd);
        bmpFlowArrows.name = "flowArrows";
#if ios
#else
        bmpFlowArrows.scaleX = bmpFlowArrows.scaleY = 0.5;
#end
        dispatchEvent(new AppEvent(AppEvent.VIEW_READY));
    }

/**
    Public Methods
**/

    public function showUnits():Void {
        hideUnits();
        addChild(bmpMarkUnits);
    }

    public function hideUnits():Void {
        if (getChildByName("markUnits") != null) {
            removeChild(getChildByName("markUnits"));
        }
    }

    public function showFlow():Void {
        hideFlow();
        addChild(bmpFlowArrows);
    }

    public function hideFlow():Void {
        if (getChildByName("flowArrows") != null) {
            removeChild(getChildByName("flowArrows"));
        }
    }

}
