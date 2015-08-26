/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package view.component;

import openfl.text.TextFieldType;
import openfl.text.TextFormat;
import model.vo.InstructionVO;
import openfl.text.TextFormatAlign;
import openfl.text.TextFieldAutoSize;
import events.AppEvent;
import openfl.display.BitmapData;
import openfl.display.Bitmap;
import utilities.TextFieldFactory;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.text.TextField;
import openfl.Assets;


class InstructionDisplay extends Sprite {

    private var bmp:Bitmap;
    private var tfPointer:TextField;
    private var tfAssemblerOpcode:TextField;
    private var tfAssemblerAddress:TextField;
    private var tfMachineOpcode:TextField;
    private var tfMachineAddress:TextField;
    private var tfHexOpcode:TextField;
    private var tfHexAddress:TextField;
    private var tfDescription:TextField;


    public function new() {
        super();
        addEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
    }

    private function addedToStageHandler(event:Event):Void {
        removeEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/instructionTable2048.png", bmpLoadCompleteHandler);
        createTfPointer();
        createTfAssembler();
        createTfMachine();
        createTfHex();
        createTfDescription();
    }

    private function bmpLoadCompleteHandler(bmd:BitmapData):Void {
        bmp = new Bitmap(bmd);
        bmp.name = "table";
#if ios
#else
        bmp.scaleX = bmp.scaleY = 0.5;
#end
        addChild(bmp);
        dispatchEvent(new AppEvent(AppEvent.VIEW_READY));
    }

/**
    Creation
**/

    private function createTfPointer():Void {
        tfPointer = new TextField();
        tfPointer.defaultTextFormat = new TextFormat("Myriad Pro", 14 * AppConstants.SCALE_FACTOR, 0xffffff);
        tfPointer.embedFonts = true;
        tfPointer.selectable = false;
        tfPointer.x = 5 * AppConstants.SCALE_FACTOR;
        tfPointer.y = 6 * AppConstants.SCALE_FACTOR;
        tfPointer.width = 80 * AppConstants.SCALE_FACTOR;
        tfPointer.height = 22 * AppConstants.SCALE_FACTOR;
        tfPointer.text = "";
        addChild(tfPointer);
    }

    private function createTfAssembler():Void {
        tfAssemblerOpcode = getBasicTextField();
        tfAssemblerOpcode.textColor = 0xFF0505;
        tfAssemblerOpcode.width = 59 * AppConstants.SCALE_FACTOR;
        tfAssemblerOpcode.x = 80 * AppConstants.SCALE_FACTOR;
        tfAssemblerOpcode.y = 29 * AppConstants.SCALE_FACTOR;
        tfAssemblerOpcode.text = "";
        addChild(tfAssemblerOpcode);

        tfAssemblerAddress = getBasicTextField();
        tfAssemblerAddress.textColor = 0xFF0505;
        tfAssemblerAddress.width = 90 * AppConstants.SCALE_FACTOR;
        tfAssemblerAddress.x = 137 * AppConstants.SCALE_FACTOR;
        tfAssemblerAddress.y = tfAssemblerOpcode.y;
        tfAssemblerAddress.text = "";
        addChild(tfAssemblerAddress);
    }

    private function createTfMachine():Void {
        tfMachineOpcode = getBasicTextField();
        tfMachineOpcode.textColor = TextFieldFactory.TEXT_ACTIVE_COLOR;
        tfMachineOpcode.width = tfAssemblerOpcode.width;
        tfMachineOpcode.x = tfAssemblerOpcode.x;
        tfMachineOpcode.type = TextFieldType.INPUT;
        tfMachineOpcode.y = 54 * AppConstants.SCALE_FACTOR;
        tfMachineOpcode.text = "";
        addChild(tfMachineOpcode);

        tfMachineAddress = getBasicTextField();
        tfMachineAddress.textColor = TextFieldFactory.TEXT_ACTIVE_COLOR;
        tfMachineAddress.width = tfAssemblerAddress.width;
        tfMachineAddress.x = tfAssemblerAddress.x;
        tfMachineAddress.y = tfMachineOpcode.y;
        tfMachineAddress.text = "";
        addChild(tfMachineAddress);
    }

    private function createTfHex():Void {
        tfHexOpcode = getBasicTextField();
        tfHexOpcode.textColor = 0x4493FF;
        tfHexOpcode.width = tfAssemblerOpcode.width;
        tfHexOpcode.x = tfAssemblerOpcode.x;
        tfHexOpcode.y = 79 * AppConstants.SCALE_FACTOR;
        tfHexOpcode.text = "";
        addChild(tfHexOpcode);

        tfHexAddress = getBasicTextField();
        tfHexAddress.textColor = 0x4493FF;
        tfHexAddress.width = tfAssemblerAddress.width;
        tfHexAddress.x = tfAssemblerAddress.x;
        tfHexAddress.y = tfHexOpcode.y;
        tfHexAddress.text = "";
        addChild(tfHexAddress);
    }

    private function createTfDescription():Void {
        tfDescription = new TextField();
        tfDescription.defaultTextFormat = new TextFormat("Myriad Pro", 14 * AppConstants.SCALE_FACTOR, 0xffffff);
        tfDescription.embedFonts = true;
        tfDescription.selectable = false;
        tfDescription.x = 230 * AppConstants.SCALE_FACTOR;
        tfDescription.y = 29 * AppConstants.SCALE_FACTOR;
        tfDescription.width = 175 * AppConstants.SCALE_FACTOR;
        tfDescription.height = 76 * AppConstants.SCALE_FACTOR;
        tfDescription.multiline = true;
        tfDescription.wordWrap = true;
        addChild(tfDescription);
    }

    private function getBasicTextField():TextField {
        var tf:TextField = new TextField();
        tf.defaultTextFormat = new TextFormat("Consolas Bold", 18 * AppConstants.SCALE_FACTOR, 0xffffff, null, null, null, null, null, TextFormatAlign.CENTER);
        tf.embedFonts = true;
        tf.selectable = false;
        tf.height = 22 * AppConstants.SCALE_FACTOR;
        return tf;
    }

/**
    Public Methods
**/

    public function setOutput(instruction:InstructionVO):Void {
        tfPointer.text = "Befehl #" + Std.string(instruction.pointer);
        tfAssemblerOpcode.text = instruction.asmOpcode;
        tfAssemblerAddress.text = instruction.asmAddress;
        tfMachineOpcode.text = instruction.codeOpcode;
        tfMachineAddress.text = instruction.codeAddress;
        tfHexOpcode.text = instruction.hexOpcode;
        tfHexAddress.text = instruction.hexAddress;
        tfDescription.text = instruction.description.split("x").join(instruction.asmAddress);
    }

    public function clearOutput():Void {
        tfPointer.text = "";
        tfAssemblerOpcode.text = "";
        tfAssemblerAddress.text = "";
        tfMachineOpcode.text = "";
        tfMachineAddress.text = "";
        tfHexOpcode.text = "";
        tfHexAddress.text = "";
        tfDescription.text = "";
    }
}
