package view.elements;

import openfl.text.TextFormatAlign;
import openfl.text.TextFormat;
import model.vo.InstructionVO;
import utilities.TextFieldFactory;
import openfl.text.TextFieldAutoSize;
import openfl.display.Sprite;
import openfl.text.TextField;
import events.AppEvent;
import openfl.events.MouseEvent;

class RomRow extends Sprite {

    private var tfPointer:TextField;
    private var tfOpcode:TextField;
    private var tfAddress:TextField;
    private var tfCode:TextField;
    private var tfHex:TextField;
    private var tfDescription:TextField;

    public function new(?instruction:InstructionVO) {
        super();
        createTfPointer();
        createTfOpcode();
        createTfAddress();
        createTfCode();
        createTfHex();
        createTfDescription();
        if (instruction != null) {
            populate(instruction);
        }
    }

    private function createTfPointer():Void {
        tfPointer = getBasicTextField();
        tfPointer.width = 35 * AppConstants.SCALE_FACTOR;
        addChild(tfPointer);
    }

    private function createTfOpcode():Void {
        tfOpcode = getBasicTextField();
        tfOpcode.width = 60 * AppConstants.SCALE_FACTOR;
        tfOpcode.x = tfPointer.x + tfPointer.width;
        tfOpcode.textColor = 0xFF0000;
        addChild(tfOpcode);
    }

    private function createTfAddress():Void {
        tfAddress = getBasicTextField();
        tfAddress.width = 90 * AppConstants.SCALE_FACTOR;
        tfAddress.x = tfOpcode.x + tfOpcode.width;
        tfAddress.textColor = 0xFF0000;
        addChild(tfAddress);
    }

    private function createTfCode():Void {
        tfCode = getBasicTextField();
        tfCode.width = 106 * AppConstants.SCALE_FACTOR;
        tfCode.x = tfAddress.x + tfAddress.width;
        tfCode.textColor = 0x00FF00;
        addChild(tfCode);
    }

    private function createTfHex():Void {
        tfHex = getBasicTextField();
        tfHex.width = 43 * AppConstants.SCALE_FACTOR;
        tfHex.x = tfCode.x + tfCode.width;
        tfHex.textColor = 0x4493FF;
        addChild(tfHex);
    }

    private function createTfDescription():Void {
        tfDescription = new TextField();
        tfDescription.defaultTextFormat = new TextFormat("Myriad Pro", 14 * AppConstants.SCALE_FACTOR, 0xffffff);
        tfDescription.embedFonts = true;
        tfDescription.selectable = false;
        tfDescription.width = 465 * AppConstants.SCALE_FACTOR;
        tfDescription.x = tfHex.x + tfHex.width + 5 * AppConstants.SCALE_FACTOR;
        tfDescription.y = 2 * AppConstants.SCALE_FACTOR;
        addChild(tfDescription);
    }

    private function getBasicTextField():TextField {
        var tf:TextField = new TextField();
        tf.defaultTextFormat = new TextFormat("Consolas Bold", 18 * AppConstants.SCALE_FACTOR, 0xffffff, null, null, null, null, null, TextFormatAlign.CENTER);
        tf.embedFonts = true;
        tf.selectable = false;
        //tf.border = true;
        //tf.borderColor = 0xA0A0A0;
        tf.height = 22 * AppConstants.SCALE_FACTOR;
        return tf;
    }

/**
    Public Methods
**/

    public function populate(instruction:InstructionVO):Void {
        tfPointer.text = Std.string(instruction.pointer);
        tfOpcode.text = instruction.asmOpcode;
        tfAddress.text = instruction.asmAddress;
        tfCode.text = instruction.codeOpcode + " "+instruction.codeAddress;
        tfHex.text = instruction.hex;
        tfDescription.text = instruction.description.split("x").join(instruction.asmAddress);
    }

    public function clear():Void {
        tfPointer.text = "";
        tfOpcode.text = "";
        tfAddress.text = "";
        tfCode.text = "";
        tfHex.text = "";
        tfDescription.text = "";
    }

    public function destroy():Void {
        removeChild(tfPointer);
        removeChild(tfOpcode);
        removeChild(tfAddress);
        removeChild(tfCode);
        removeChild(tfHex);
        removeChild(tfDescription);
    }
}
