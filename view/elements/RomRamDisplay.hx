/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package view.elements;

import openfl.display.BitmapData;
import openfl.display.Bitmap;
import openfl.text.TextFormatAlign;
import openfl.text.TextFormat;
import utilities.TextFieldFactory;
import model.vo.SnapshotVO;
import model.vo.InstructionVO;
import utilities.TextFieldFactory;
import openfl.text.TextField;
import openfl.display.Sprite;
import openfl.Assets;
import openfl.events.Event;

class RomRamDisplay extends Sprite {

    private var tfOut:Array<TextField>;
    private var textColor:UInt;
    private var tfFrame:Bitmap;

    public function new(color:UInt) {
        super();
        textColor = color;
        tfOut = new Array<TextField>();
// upper row
        tfOut[0] = getBasicTextField();
        addChild(tfOut[0]);

        tfOut[1] = getBasicTextField();
        tfOut[1].x = tfOut[0].x + TextFieldFactory.TF_WIDTH;
        addChild(tfOut[1]);

        tfOut[2] = getBasicTextField();
        tfOut[2].x = tfOut[1].x + TextFieldFactory.TF_WIDTH;
        addChild(tfOut[2]);

        tfOut[3] = getBasicTextField();
        tfOut[3].x = tfOut[2].x + TextFieldFactory.TF_WIDTH;
        addChild(tfOut[3]);

        tfOut[4] = getBasicTextField();
        tfOut[4].x = tfOut[3].x + TextFieldFactory.TF_WIDTH;
        addChild(tfOut[4]);

        tfOut[5] = getBasicTextField();
        tfOut[5].x = tfOut[4].x + TextFieldFactory.TF_WIDTH;
        addChild(tfOut[5]);

        tfOut[6] = getBasicTextField();
        tfOut[6].x = tfOut[5].x + TextFieldFactory.TF_WIDTH;
        addChild(tfOut[6]);

        tfOut[7] = getBasicTextField();
        tfOut[7].x = tfOut[6].x + TextFieldFactory.TF_WIDTH;
        addChild(tfOut[7]);

// lower row
        tfOut[8] = getBasicTextField();
        tfOut[8].x = tfOut[0].x;
        tfOut[8].y = tfOut[0].x + TextFieldFactory.TF_HEIGHT;
        addChild(tfOut[8]);

        tfOut[9] = getBasicTextField();
        tfOut[9].x = tfOut[1].x;
        tfOut[9].y = tfOut[0].x + TextFieldFactory.TF_HEIGHT;
        addChild(tfOut[9]);

        tfOut[10] = getBasicTextField();
        tfOut[10].x = tfOut[2].x;
        tfOut[10].y = tfOut[0].x + TextFieldFactory.TF_HEIGHT;
        addChild(tfOut[10]);

        tfOut[11] = getBasicTextField();
        tfOut[11].x = tfOut[3].x;
        tfOut[11].y = tfOut[0].x + TextFieldFactory.TF_HEIGHT;
        addChild(tfOut[11]);

        tfOut[12] = getBasicTextField();
        tfOut[12].x = tfOut[4].x;
        tfOut[12].y = tfOut[0].x + TextFieldFactory.TF_HEIGHT;
        addChild(tfOut[12]);

        tfOut[13] = getBasicTextField();
        tfOut[13].x = tfOut[5].x;
        tfOut[13].y = tfOut[0].x + TextFieldFactory.TF_HEIGHT;
        addChild(tfOut[13]);

        tfOut[14] = getBasicTextField();
        tfOut[14].x = tfOut[6].x;
        tfOut[14].y = tfOut[0].x + TextFieldFactory.TF_HEIGHT;
        addChild(tfOut[14]);

        tfOut[15] = getBasicTextField();
        tfOut[15].x = tfOut[7].x;
        tfOut[15].y = tfOut[0].x + TextFieldFactory.TF_HEIGHT;
        addChild(tfOut[15]);

        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/tfFrame.png", tfFrameBmpLoadCompleteHandler);
        resetValues(true);
    }

    private function tfFrameBmpLoadCompleteHandler(bmd:BitmapData):Void {
        tfFrame = new Bitmap(bmd);
        tfFrame.name = "tfFrame";
#if ios
#else
        tfFrame.scaleX = tfFrame.scaleY = 0.5;
#end
        tfFrame.visible = false;
        addChild(tfFrame);
    }

    private function resetValues(?powerOff:Bool = false):Void {
        for (i in 0 ... 16) {
            if (powerOff) {
                tfOut[i].text = "";
            } else {
                tfOut[i].text = "0";
            }
        }
    }

/**
    Public Methods
**/

    public function getBasicTextField():TextField {
        var tf:TextField = new TextField();
        tf.defaultTextFormat = new TextFormat("Consolas Bold", 12 * AppConstants.SCALE_FACTOR, 0x00FF00, null, null, null, null, null, TextFormatAlign.CENTER);
        tf.embedFonts = true;
        tf.textColor = textColor;
        tf.border = true;
        tf.borderColor = 0xA0A0A0;
        tf.background = true;
        tf.backgroundColor = 0x000000;
        tf.width = 18 * AppConstants.SCALE_FACTOR;
        tf.height = 15 * AppConstants.SCALE_FACTOR;
        return tf;
    }

/**
    Load Memory
**/

    public function loadMemory(instructions:Array<InstructionVO>):Void {
        for (i in 0 ... instructions.length) {
            tfOut[i].text = instructions[i].hex;
            tfOut[i].textColor = textColor;
        }
    }

    public function updateCell(values:Array<SnapshotVO>, pointer:UInt):Void {
        tfOut[pointer].text = values[pointer].getHex();
        tfFrame.x = tfOut[pointer].x - 1;
#if ios
        tfFrame.y = tfOut[pointer].y - 3;
#else
        tfFrame.y = tfOut[pointer].y - 1;
#end
        tfFrame.visible = true;
    }

    public function setPointer(pointer:UInt):Void {
        tfFrame.x = tfOut[pointer].x - 1;
#if ios
        tfFrame.y = tfOut[pointer].y - 3;
#else
        tfFrame.y = tfOut[pointer].y - 1;
#end
        tfFrame.visible = true;

    }

    public function resetPointer():Void {
        tfFrame.visible = false;
    }

    public function clear(?powerOff:Bool = false):Void {
        resetValues(powerOff);
        resetPointer();
    }

}
