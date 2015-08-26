/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package view.component;

import events.AppEvent;
import view.elements.SimpleRectangle;
import openfl.display.BitmapData;
import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.Assets;
import openfl.events.Event;


class Highlight extends Sprite {

    public static var ALPHA:Float = 0.8;

    private var posX:Float;
    private var posY:Float;
    private var w:Float;
    private var h:Float;

    private var coverRegister1:SimpleRectangle;
    private var coverRegister2:SimpleRectangle;
    private var coverAccumulator:SimpleRectangle;

    private var coverEnabler1:SimpleRectangle;
    private var coverEnabler2:SimpleRectangle;

    private var coverAluIC:Bitmap;
    private var coverMultiplexer:Bitmap;
    private var coverDecoder:Bitmap;

    private var coverRam:SimpleRectangle;
    private var coverDisplay:SimpleRectangle;

    private var coverMOV:SimpleRectangle;
    private var coverLDI:SimpleRectangle;
    private var coverALU:SimpleRectangle;
    private var coverSDA:SimpleRectangle;
    private var coverLDA:SimpleRectangle;
    private var coverINP:SimpleRectangle;
    private var coverOUT:SimpleRectangle;
    private var coverJE:SimpleRectangle;
    private var coverJNE:SimpleRectangle;
    private var coverJMP:SimpleRectangle;


    public function new() {
        super();
        addEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
    }

    private function addedToStageHandler(event:Event):Void {
        removeEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
        createRegisterCover();
        createAccumulatorCover();
        createComparatorCover();
        createEnabler1Cover();
        createEnabler2Cover();
        createRamCover();
        createDisplayCover();
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/coverAlu2048.png", coverAluLoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/coverMultiplexer2048.png", coverMultiplexerLoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/coverDecoder2048.png", coverDecoderLoadCompleteHandler);
        dispatchEvent(new AppEvent(AppEvent.VIEW_READY));
    }

    private function createRegisterCover():Void {
        posX = 529 * AppConstants.SCALE_FACTOR;
        w = 25 * AppConstants.SCALE_FACTOR;
        h = 65 * AppConstants.SCALE_FACTOR;
        coverRegister2 = new SimpleRectangle(w, h, AppConstants.BG_COLOR, ALPHA);
        coverRegister2.x = posX;
        coverRegister2.y = 204 * AppConstants.SCALE_FACTOR;
        addChild(coverRegister2);

        coverRegister1 = new SimpleRectangle(w, h, AppConstants.BG_COLOR, ALPHA);
        coverRegister1.x = posX;
        coverRegister1.y = 279 * AppConstants.SCALE_FACTOR;
        addChild(coverRegister1);
    }

    private function createAccumulatorCover():Void {
        w = 25 * AppConstants.SCALE_FACTOR;
        h = 65 * AppConstants.SCALE_FACTOR;
        coverAccumulator = new SimpleRectangle(w, h, AppConstants.BG_COLOR, ALPHA);
        coverAccumulator.x = 771 * AppConstants.SCALE_FACTOR;
        coverAccumulator.y = 217 * AppConstants.SCALE_FACTOR;
        addChild(coverAccumulator);
    }

    private function createRamCover():Void {
        w = 147 * AppConstants.SCALE_FACTOR;
        h = 52 * AppConstants.SCALE_FACTOR;
        coverRam = new SimpleRectangle(w, h, AppConstants.BG_COLOR, ALPHA);
        coverRam.x = 796 * AppConstants.SCALE_FACTOR;
        coverRam.y = 354 * AppConstants.SCALE_FACTOR;
        addChild(coverRam);
    }

    private function createDisplayCover():Void {
        w = 156 * AppConstants.SCALE_FACTOR;
        h = 108 * AppConstants.SCALE_FACTOR;
        coverDisplay = new SimpleRectangle(w, h, 0x6F6F6F, ALPHA);
        coverDisplay.x = 812 * AppConstants.SCALE_FACTOR;
        coverDisplay.y = 507 * AppConstants.SCALE_FACTOR;
        addChild(coverDisplay);
    }

    private function createComparatorCover():Void {
        posX = 178 * AppConstants.SCALE_FACTOR;
        w = h = 30 * AppConstants.SCALE_FACTOR;
        coverMOV = new SimpleRectangle(w, h, AppConstants.BG_COLOR, ALPHA);
        coverMOV.x = posX;
        coverMOV.y = 246 * AppConstants.SCALE_FACTOR;
        addChild(coverMOV);

        coverLDI = new SimpleRectangle(w, h, AppConstants.BG_COLOR, ALPHA);
        coverLDI.x = posX;
        coverLDI.y = 278 * AppConstants.SCALE_FACTOR;
        addChild(coverLDI);

        coverALU = new SimpleRectangle(w, h, AppConstants.BG_COLOR, ALPHA);
        coverALU.x = posX;
        coverALU.y = 311 * AppConstants.SCALE_FACTOR;
        addChild(coverALU);

        coverSDA = new SimpleRectangle(w, h, AppConstants.BG_COLOR, ALPHA);
        coverSDA.x = posX;
        coverSDA.y = 343 * AppConstants.SCALE_FACTOR;
        addChild(coverSDA);

        coverLDA = new SimpleRectangle(w, h, AppConstants.BG_COLOR, ALPHA);
        coverLDA.x = posX;
        coverLDA.y = 376 * AppConstants.SCALE_FACTOR;
        addChild(coverLDA);

        coverINP = new SimpleRectangle(w, h, AppConstants.BG_COLOR, ALPHA);
        coverINP.x = posX;
        coverINP.y = 408 * AppConstants.SCALE_FACTOR;
        addChild(coverINP);

        coverOUT = new SimpleRectangle(w, h, AppConstants.BG_COLOR, ALPHA);
        coverOUT.x = posX;
        coverOUT.y = 441 * AppConstants.SCALE_FACTOR;
        addChild(coverOUT);

        coverJE = new SimpleRectangle(w, h, AppConstants.BG_COLOR, ALPHA);
        coverJE.x = posX;
        coverJE.y = 473 * AppConstants.SCALE_FACTOR;
        addChild(coverJE);

        coverJNE = new SimpleRectangle(w, h, AppConstants.BG_COLOR, ALPHA);
        coverJNE.x = posX;
        coverJNE.y = 506 * AppConstants.SCALE_FACTOR;
        addChild(coverJNE);

        coverJMP = new SimpleRectangle(w, h, AppConstants.BG_COLOR, ALPHA);
        coverJMP.x = posX;
        coverJMP.y = 538 * AppConstants.SCALE_FACTOR;
        addChild(coverJMP);
    }

    private function createEnabler1Cover():Void {
        w = 20 * AppConstants.SCALE_FACTOR;
        h = 50 * AppConstants.SCALE_FACTOR;
        coverEnabler1 = new SimpleRectangle(w, h, AppConstants.BG_COLOR, ALPHA);
        coverEnabler1.x = 297 * AppConstants.SCALE_FACTOR;
        coverEnabler1.y = 97 * AppConstants.SCALE_FACTOR;
        addChild(coverEnabler1);
    }

    private function createEnabler2Cover():Void {
        w = 20 * AppConstants.SCALE_FACTOR;
        h = 50 * AppConstants.SCALE_FACTOR;
        coverEnabler2 = new SimpleRectangle(w, h, AppConstants.BG_COLOR, ALPHA);
        coverEnabler2.x = 215 * AppConstants.SCALE_FACTOR;
        coverEnabler2.y = 138 * AppConstants.SCALE_FACTOR;
        addChild(coverEnabler2);
    }

    private function coverAluLoadCompleteHandler(bmd:BitmapData):Void {
        coverAluIC = new Bitmap(bmd);
        coverAluIC.name = "coverAlu";
#if ios
#else
        coverAluIC.scaleX = coverAluIC.scaleY = 0.5;
#end
        coverAluIC.x = 740 * AppConstants.SCALE_FACTOR;
        coverAluIC.y = 155 * AppConstants.SCALE_FACTOR;
        addChild(coverAluIC);
    }

    private function coverMultiplexerLoadCompleteHandler(bmd:BitmapData):Void {
        coverMultiplexer = new Bitmap(bmd);
        coverMultiplexer.name = "coverMultiplexer";
#if ios
#else
        coverMultiplexer.scaleX = coverMultiplexer.scaleY = 0.5;
#end
        coverMultiplexer.x = 578 * AppConstants.SCALE_FACTOR;
        coverMultiplexer.y = 158 * AppConstants.SCALE_FACTOR;
        addChild(coverMultiplexer);
    }

    private function coverDecoderLoadCompleteHandler(bmd:BitmapData):Void {
        coverDecoder = new Bitmap(bmd);
        coverDecoder.name = "coverDecoder";
#if ios
#else
        coverDecoder.scaleX = coverDecoder.scaleY = 0.5;
#end
        coverDecoder.x = 255 * AppConstants.SCALE_FACTOR;
        coverDecoder.y = 173 * AppConstants.SCALE_FACTOR;
        addChild(coverDecoder);
    }

/**
    Public Methods
**/

    public function setVisibilityRegister1(visible:Bool):Void {
        coverRegister1.visible = visible;
    }

    public function setVisibilityRegister2(visible:Bool):Void {
        coverRegister2.visible = visible;
    }

    public function setVisibilityAccumulator(visible:Bool):Void {
        coverAccumulator.visible = visible;
    }

    public function setVisibilityRam(visible):Void {
        coverRam.visible = visible;
    }

    public function setVisibilityDisplay(visible):Void {
        coverDisplay.visible = visible;
    }

    public function setVisibilityMOV(visible:Bool):Void {
        coverMOV.visible = visible;
    }

    public function setVisibilityLDI(visible:Bool):Void {
        coverLDI.visible = visible;
    }

    public function setVisibilityALU(visible:Bool):Void {
        coverALU.visible = visible;
        coverAluIC.visible = visible;
    }

    public function setVisibilitySDA(visible:Bool):Void {
        coverSDA.visible = visible;
    }

    public function setVisibilityLDA(visible:Bool):Void {
        coverLDA.visible = visible;
    }

    public function setVisibilityINP(visible:Bool):Void {
        coverINP.visible = visible;
    }

    public function setVisibilityOUT(visible:Bool):Void {
        coverOUT.visible = visible;
    }

    public function setVisibilityJE(visible:Bool):Void {
        coverJE.visible = visible;
    }

    public function setVisibilityJNE(visible:Bool):Void {
        coverJNE.visible = visible;
    }

    public function setVisibilityJMP(visible:Bool):Void {
        coverJMP.visible = visible;
    }

    public function setVisibilityEnabler1(visible:Bool):Void {
        coverEnabler1.visible = visible;
    }

    public function setVisibilityEnabler2(visible:Bool):Void {
        coverEnabler2.visible = visible;
    }

    public function setVisibilityMultiplexer(visible:Bool):Void {
        coverMultiplexer.visible = visible;
    }

    public function setVisibilityDecoder(visible:Bool):Void {
        coverDecoder.visible = visible;
    }

    public function resetVisibilityAll(?visible:Bool = true):Void {
        coverRegister1.visible = visible;
        coverRegister2.visible = visible;
        coverAccumulator.visible = visible;
        coverRam.visible = visible;
        coverDisplay.visible = visible;
        coverMOV.visible = visible;
        coverLDI.visible = visible;
        coverALU.visible = visible;
        coverSDA.visible = visible;
        coverLDA.visible = visible;
        coverINP.visible = visible;
        coverOUT.visible = visible;
        coverJE.visible = visible;
        coverJNE.visible = visible;
        coverJMP.visible = visible;
        coverEnabler1.visible = visible;
        coverEnabler2.visible = visible;
        coverAluIC.visible = visible;
        coverMultiplexer.visible = visible;
        coverDecoder.visible = visible;
    }

}
