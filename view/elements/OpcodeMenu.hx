package view.elements;

import openfl.display.BitmapData;
import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.Assets;
import openfl.events.Event;
import events.AppEvent;
import openfl.events.MouseEvent;


class OpcodeMenu extends Sprite {

    private var menuContainer:Sprite;
    private var menuButtons:Array<LabelButton>;

    public function new() {
        super();
        createMenu();
    }

    private function createMenu():Void {
        menuContainer = new Sprite();
        menuButtons = new Array<LabelButton>();
        var w:Float = 50;
        var i:UInt = 0;
        menuButtons[i++] = new LabelButton(w, "NOP");
        menuButtons[i++] = new LabelButton(w, "MOV");
        menuButtons[i++] = new LabelButton(w, "LDI");
        menuButtons[i++] = new LabelButton(w, "ADD");
        menuButtons[i++] = new LabelButton(w, "SUB");
        menuButtons[i++] = new LabelButton(w, "INC");
        menuButtons[i++] = new LabelButton(w, "DEC");
        menuButtons[i++] = new LabelButton(w, "SDA");
        menuButtons[i++] = new LabelButton(w, "LDA");
        menuButtons[i++] = new LabelButton(w, "INP");
        menuButtons[i++] = new LabelButton(w, "OUT");
        menuButtons[i++] = new LabelButton(w, "JE");
        menuButtons[i++] = new LabelButton(w, "JNE");
        menuButtons[i++] = new LabelButton(w, "JMP");
        for (i in 0 ... menuButtons.length) {
            menuContainer.addChild(menuButtons[i]);
            menuButtons[i].name = "opcodeMenuButton"+i;
            menuButtons[i].addEventListener(AppEvent.DATA, dataEventHandler);
            if (i > 0) {
                menuButtons[i].x = menuButtons[i - 1].x + w * AppConstants.SCALE_FACTOR;
            }
        }
        addChild(menuContainer);
    }

    private function dataEventHandler(event:AppEvent):Void {
        var opcode:String = "";
        var address:String = "";
        switch(event.data.id) {
            case "opcodeMenuButton0" :
                opcode = "0000";
                address = "0000";
            case "opcodeMenuButton1" :
                opcode = "0001";
            case "opcodeMenuButton2" :
                opcode = "0010";
            case "opcodeMenuButton3" :
                opcode = "0011";
                address = "0000";
            case "opcodeMenuButton4" :
                opcode = "0011";
                address = "0001";
            case "opcodeMenuButton5" :
                opcode = "0011";
                address = "0010";
            case "opcodeMenuButton6" :
                opcode = "0011";
                address = "0011";
            case "opcodeMenuButton7" :
                opcode = "0100";
            case "opcodeMenuButton8" :
                opcode = "0101";
            case "opcodeMenuButton9" :
                opcode = "0110";
            case "opcodeMenuButton10" :
                opcode = "0111";
            case "opcodeMenuButton11" :
                opcode = "1000";
            case "opcodeMenuButton12" :
                opcode = "1001";
            case "opcodeMenuButton13" :
                opcode = "1010";
        }
        dispatchEvent(new AppEvent(AppEvent.DATA, {id:event.data.id, opcode:opcode, address:address}));
    }

/**
    Public Methods
**/

    public function destroy():Void {
        for (i in 0 ... menuButtons.length) {
            menuButtons[i].destroy();
            menuContainer.removeChild(menuButtons[i]);
        }
        removeChild(menuContainer);
    }
}
