/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package view.component;

import view.elements.RomRamDisplay;
import model.vo.SnapshotVO;
import model.vo.InstructionVO;
import utilities.TextFieldFactory;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.text.TextField;
import openfl.Assets;


class Output extends Sprite {

    private var r1:TextField;
    private var r2:TextField;
    private var accu:TextField;

    private var rom:RomRamDisplay;
    private var ram:RomRamDisplay;

    public function new() {
        super();
        addEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
    }

    private function addedToStageHandler(event:Event):Void {
        removeEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
        createRegister1Display();
        createRegister2Display();
        createAccumulatorDisplay();
        createRomDisplay();
        createRamDisplay();
    }

/**
    Creation
**/
    private function createRomDisplay():Void {
        rom = new RomRamDisplay(0x4493FF);
        rom.x = 432 * AppConstants.SCALE_FACTOR;
        rom.y = 541 * AppConstants.SCALE_FACTOR;
        addChild(rom);
    }

    private function createRamDisplay():Void {
        ram = new RomRamDisplay(0x00FF00);
        ram.x = 797 * AppConstants.SCALE_FACTOR;
        ram.y = 377 * AppConstants.SCALE_FACTOR;
        addChild(ram);
    }

    private function createRegister1Display():Void {
        r1 = TextFieldFactory.getOutputTFBold();
        r1.x = 532 * AppConstants.SCALE_FACTOR;
        r1.y = 281 * AppConstants.SCALE_FACTOR;
        r1.text = "";
        addChild(r1);
    }

    private function createRegister2Display():Void {
        r2 = TextFieldFactory.getOutputTFBold();
        r2.x = 532 * AppConstants.SCALE_FACTOR;
        r2.y = 206 * AppConstants.SCALE_FACTOR;
        r2.text = "";
        addChild(r2);
    }

    private function createAccumulatorDisplay():Void {
        accu = TextFieldFactory.getOutputTFBold();
        accu.x = 775 * AppConstants.SCALE_FACTOR;
        accu.y = 219 * AppConstants.SCALE_FACTOR;
        accu.text = "";
        addChild(accu);
    }

/**
    Public Methods
**/

    public function setRegister1(value:String):Void {
        r1.text = value;
        r1.textColor = TextFieldFactory.TEXT_ACTIVE_COLOR;
    }

    public function setRegister2(value:String):Void {
        r2.text = value;
        r2.textColor = TextFieldFactory.TEXT_ACTIVE_COLOR;
    }

    public function setAccumulator(value:String):Void {
        accu.text = value;
        accu.textColor = TextFieldFactory.TEXT_ACTIVE_COLOR;
    }

    public function loadRomDisplay(instructions:Array<InstructionVO>):Void {
        rom.clear();
        rom.loadMemory(instructions);
    }

    public function powerOn():Void {
        ram.clear();
        r1.text = "0";
        r2.text = "0";
        accu.text = "0";
    }

    public function powerOff():Void {
        rom.clear(true);
        ram.clear(true);
        r1.text = "";
        r2.text = "";
        accu.text = "";
    }

    public function setProgramCountPointer(pointer:UInt):Void {
        rom.setPointer(pointer);
    }

    public function updateRam(values:Array<SnapshotVO>, pointer:UInt):Void {
        ram.updateCell(values,pointer);
    }

    public function resetRamPointer():Void {
        ram.resetPointer();
    }

    public function setRamPointer(pointer:UInt):Void {
        ram.setPointer(pointer);
    }

    public function resetRam():Void {
        ram.clear();
    }

    public function resetAll():Void {
        ram.clear();
        rom.resetPointer();
        r1.text = "0";
        r2.text = "0";
        accu.text = "0";
    }

}
