package view.component;

import utilities.NumberFormat;
import view.elements.SimpleRectangle;
import openfl.text.TextField;
import openfl.text.TextFormat;
import openfl.display.BitmapData;
import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.Assets;
import openfl.events.Event;
import events.AppEvent;
import openfl.events.MouseEvent;

class Display extends Sprite {

    private var tf:TextField;
    private var checkBoxContainer:Sprite;
    private var charCodeCheckbox:SimpleRectangle;
    private var charCodeCheckboxActive:SimpleRectangle;
    private var clickArea:Sprite;
    private var displayBufferNumbers:String;
    private var displayBufferChars:String;

    public function new() {
        super();
        addEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
    }

    private function addedToStageHandler(event:Event):Void {
        removeEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
        createOutputTextField();
        createCharCodeButton();
        createClickArea();
    }

    private function createOutputTextField():Void {
        tf = new TextField();
#if ios
        tf.defaultTextFormat = new TextFormat("Myriad Pro Bold", 36, 0xAAAAFF);
#else
        tf.defaultTextFormat = new TextFormat("Myriad Pro Bold", 18, 0xAAAAFF);
#end
        tf.textColor = 0x000000;
        tf.x = 817 * AppConstants.SCALE_FACTOR;
        tf.y = 515 * AppConstants.SCALE_FACTOR;
        tf.height = 100 * AppConstants.SCALE_FACTOR;
        tf.width = 145 * AppConstants.SCALE_FACTOR;
        tf.multiline = true;
        tf.wordWrap = true;
        tf.text = "";
        addChild(tf);
    }

    private function createCharCodeButton():Void {
        checkBoxContainer = new Sprite();
        checkBoxContainer.x = 812 * AppConstants.SCALE_FACTOR;
        checkBoxContainer.y = 618 * AppConstants.SCALE_FACTOR;
        var size:Float = 14 * AppConstants.SCALE_FACTOR;

        charCodeCheckbox = new SimpleRectangle(size, size, 0x272727, 1);
        checkBoxContainer.addChild(charCodeCheckbox);

        charCodeCheckboxActive = new SimpleRectangle(size, size, 0x8C0909, 1);
        charCodeCheckboxActive.visible = false;
        checkBoxContainer.addChild(charCodeCheckboxActive);

        addChild(checkBoxContainer);

    }

    private function createClickArea():Void {
        var s:SimpleRectangle = new SimpleRectangle(170 * AppConstants.SCALE_FACTOR, 130 * AppConstants.SCALE_FACTOR, 0xffff00, 0);
        clickArea = new Sprite();
        clickArea.addChild(s);
        clickArea.buttonMode = true;
        clickArea.addEventListener(MouseEvent.MOUSE_DOWN, dataEventHandler);
        clickArea.x = 805 * AppConstants.SCALE_FACTOR;
        clickArea.y = 505 * AppConstants.SCALE_FACTOR;
        addChild(clickArea);
    }

    private function dataEventHandler(event:MouseEvent):Void {
        dispatchEvent(new AppEvent(AppEvent.DATA, {id:"charCodeButton"}));
    }

/**
    Public Methods
**/

    public function setCharCodeCheckBox(on:Bool):Void {
        charCodeCheckboxActive.visible = on;
        if (on) {
            tf.text = displayBufferChars;
        } else {
            tf.text = displayBufferNumbers;
        }
    }

    public function setOutput(value:Int):Void {
        displayBufferNumbers = displayBufferNumbers + Std.string(value) + " ";
        displayBufferChars = displayBufferChars + NumberFormat.decimalToChar(value) + " ";
        if (charCodeCheckboxActive.visible) {
            tf.text = displayBufferChars;
        } else {
            tf.text = displayBufferNumbers;
        }
    }

    public function clear():Void {
        tf.text = "";
        displayBufferNumbers = "";
        displayBufferChars = "";
    }


}
