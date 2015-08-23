package view.component;

import view.elements.SimpleRectangle;
import events.AppEvent;
import openfl.events.MouseEvent;
import openfl.display.Sprite;
import openfl.events.Event;

class Hotspot extends Sprite {

    private var clockButton:Sprite;
    private var accumulatorButton:Sprite;
    private var romButton:Sprite;

    public static var COLOR:UInt = 0xFF00FF;
    private static var ALPHA:Float = 0;


    public function new() {
        super();
        addEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
    }

    private function addedToStageHandler(event:Event):Void {
        removeEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
        createClockButton();
        createAccumulatorButton();
        createRomButton();
        dispatchEvent(new AppEvent(AppEvent.VIEW_READY));
    }

    private function createClockButton():Void {
        var s:SimpleRectangle = new SimpleRectangle(37 * AppConstants.SCALE_FACTOR, 37 * AppConstants.SCALE_FACTOR, COLOR, ALPHA);
        clockButton = new Sprite();
        clockButton.addChild(s);
        clockButton.buttonMode = true;
        clockButton.x = 569 * AppConstants.SCALE_FACTOR;
        clockButton.y = 583 * AppConstants.SCALE_FACTOR;
        clockButton.addEventListener(MouseEvent.MOUSE_DOWN, clockButtonEventHandler);
        addChild(clockButton);
    }

    private function createAccumulatorButton():Void {
        var s:SimpleRectangle = new SimpleRectangle(33 * AppConstants.SCALE_FACTOR, 70 * AppConstants.SCALE_FACTOR, COLOR, ALPHA);
        accumulatorButton = new Sprite();
        accumulatorButton.addChild(s);
        accumulatorButton.buttonMode = true;
        accumulatorButton.x = 767 * AppConstants.SCALE_FACTOR;
        accumulatorButton.y = 215 * AppConstants.SCALE_FACTOR;
        accumulatorButton.addEventListener(MouseEvent.MOUSE_DOWN, accumulatorButtonEventHandler);
        addChild(accumulatorButton);
    }

    private function createRomButton():Void {
        var s:SimpleRectangle = new SimpleRectangle(147 * AppConstants.SCALE_FACTOR, 52 * AppConstants.SCALE_FACTOR, COLOR, ALPHA);
        romButton = new Sprite();
        romButton.addChild(s);
        romButton.buttonMode = true;
        romButton.x = 431 * AppConstants.SCALE_FACTOR;
        romButton.y = 518 * AppConstants.SCALE_FACTOR;
        romButton.addEventListener(MouseEvent.MOUSE_DOWN, romButtonEventHandler);
        addChild(romButton);
    }

    private function clockButtonEventHandler(event:MouseEvent):Void {
        dispatchEvent(new AppEvent(AppEvent.DATA, {id:"clockButton"}));
    }

    private function accumulatorButtonEventHandler(event:MouseEvent):Void {
        dispatchEvent(new AppEvent(AppEvent.DATA, {id:"accumulatorButton"}));
    }

    private function romButtonEventHandler(event:MouseEvent):Void {
        dispatchEvent(new AppEvent(AppEvent.DATA, {id:"romButton"}));
    }

}
