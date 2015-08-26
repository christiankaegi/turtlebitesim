/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package model.proxy;
import model.vo.InstructionVO;
import model.data.ProgramData;
import org.puremvc.haxe.multicore.patterns.proxy.Proxy;
class ProgramProxy extends Proxy {

    public static var NAME = "ProgramProxy";
    private var appProxy:AppProxy;

    public function new(data:ProgramData) {
        super(NAME, data);
    }

    override public function onRegister():Void {
        appProxy = cast(facade.retrieveProxy(AppProxy.NAME), AppProxy);
        sendNotification(AppConstants.PROXY_INITIALIZED, null, NAME);
    }

    public function getNumberOfInstructions():Int {
        return getData().getCurrentInstructions().length;
    }

    public function getCurrentInstructions():Array<InstructionVO> {
        return getData().getCurrentInstructions();
    }

    public function getInstructionsByProgramPointer(pointer:Int):Array<InstructionVO> {
        return getData().getInstructionsByProgramPointer(pointer);
    }

    public function getInstruction():InstructionVO {
        var t:InstructionVO;
        if (appProxy.getEnterInstructionActive()) {
            t = getData().manualInstruction;
        } else {
            t = getData().getInstruction(getData().instructionPointer);
        }
        return t;
    }

    public function getManualInstruction():InstructionVO {
        return getData().manualInstruction;
    }

    public function getPreviousInstruction():InstructionVO {
        var prev:Int = getData().instructionPointer - 1;
        if (prev == -1) {
            prev = getData().getCurrentInstructions().length - 1;
        }
        return getData().getInstruction(prev);
    }

    public function getProgram(pointer:Int):Array<InstructionVO> {
        return getData().programs[pointer];
    }

    public function getOpcode():String {
        var t:String;
        if (appProxy.getEnterInstructionActive()) {
            t = getData().manualInstruction.code.substr(0, 4);
        } else {
            t = getData().getCurrentInstructions()[getData().instructionPointer].code.substr(0, 4);
        }
        return t;
    }

    public function getAddressOrData():String {
        var t:String;
        if (appProxy.getEnterInstructionActive()) {
            t = getData().manualInstruction.code.substr(4, 4);
        } else {
            t = getData().getCurrentInstructions()[getData().instructionPointer].code.substr(4, 4);
        }
        return t;
    }

    public function setInstructionPointer(pointer:Int):Void {
        getData().instructionPointer = pointer;
    }

    public function getInstructionPointer():Int {
        return getData().instructionPointer;
    }

    public function setProgramPointer(pointer:Int):Void {
        getData().programPointer = pointer;
    }

    public function getProgramPointer():Int {
        return getData().programPointer;
    }

    public function reset():Void {
        getData().instructionPointer = 0;
        getData().manualInstruction = new InstructionVO(0, "NOP");
    }

    public function setManualInstruction(instruction:InstructionVO):Void {
        getData().manualInstruction = instruction;
    }

    override public function getData():ProgramData {
        return data;
    }

}
