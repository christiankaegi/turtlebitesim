package controller;
import model.proxy.AppProxy;
import model.proxy.ClockProxy;
import model.proxy.SnapshotProxy;
import model.vo.InstructionVO;
import model.proxy.ProgramProxy;
import org.puremvc.haxe.multicore.patterns.command.SimpleCommand;
import org.puremvc.haxe.multicore.interfaces.INotification;
class ClockSignalCommand extends SimpleCommand {

    private var instruction:InstructionVO;
    private var pointer:Int;

    public function new() {
        super();
    }

    override function execute(note:INotification):Void {

        var appProxy:AppProxy = cast(facade.retrieveProxy(AppProxy.NAME), AppProxy);
        var clockProxy:ClockProxy = cast(facade.retrieveProxy(ClockProxy.NAME), ClockProxy);
        var programProxy:ProgramProxy = cast(facade.retrieveProxy(ProgramProxy.NAME), ProgramProxy);
        var snapshotProxy:SnapshotProxy = cast(facade.retrieveProxy(SnapshotProxy.NAME), SnapshotProxy);
        var on:Bool = cast(note.getBody(), Bool);

        instruction = programProxy.getInstruction();
        appProxy.setStarted(true);
        if (on) {
//trace("-------------- Pointer: " + programProxy.getInstructionPointer() + "------------------------");
//trace("asm: " + programProxy.getInstruction().asm);
//trace("code: " + programProxy.getInstruction().code + " (Opcode: " + opcode + ", Address/Data: " + addressOrData);
//trace("hex: " + programProxy.getInstruction().hex);
//trace("desc: " + programProxy.getInstruction().description);
            if (instruction != null) {
                sendNotification(AppConstants.CLOCK_ON, instruction);
                sendNotification(instruction.codeOpcode, instruction);

                if (snapshotProxy.getAccumulator().getDecimal() == snapshotProxy.getRegister1().getDecimal()) {
                    sendNotification(AppConstants.ALU_EQUAL_ON);
                } else {
                    sendNotification(AppConstants.ALU_EQUAL_OFF);
                }

                if (programProxy.getInstructionPointer() == 0 && !appProxy.getEnterInstructionActive()) {
                    sendNotification(AppConstants.LOOP);
                }

                if (!appProxy.getEnterInstructionActive()) {
                    pointer = programProxy.getInstructionPointer() + 1;
// without Loop
/*
            if (pointer == programProxy.getNumberOfInstructions() || pointer == AppConstants.INSTRUCTIONS_MAX) {
                pointer = 0;
                clockProxy.stopClock();
            } else {
                programProxy.setPointer(pointer);
            }
            */
                    if (pointer == programProxy.getNumberOfInstructions() || pointer == AppConstants.INSTRUCTIONS_MAX) {
                        pointer = 0;
                    }
                    programProxy.setInstructionPointer(pointer);
                }
            }

        } else {
            sendNotification(AppConstants.CLOCK_OFF, programProxy.getPreviousInstruction());
        }
    }

}
