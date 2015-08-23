package ;
import controller.PlayCommand;
import controller.EnterInstructionCommand;
import controller.DetailAccumulatorCommand;
import controller.ProgramChangedCommand;
import controller.ManualModeOnCommand;
import controller.PauseCommand;
import controller.EditRomCommand;
import controller.ResetCommand;
import controller.instruction.OpcodeJumpCommand;
import controller.instruction.OpcodeSDACommand;
import controller.instruction.OpcodeLDACommand;
import controller.instruction.OpcodeALUCommand;
import controller.instruction.OpcodeLDICommand;
import controller.instruction.OpcodeMOVCommand;
import controller.StartupCompleteCommand;
import controller.ClockSignalCommand;
import controller.ChangeClockSpeedCommand;
import controller.startup.PrepareViewCommand;
import AppConstants;
import controller.startup.PrepareModelCommand;
import org.puremvc.haxe.multicore.interfaces.IFacade;
import org.puremvc.haxe.multicore.patterns.facade.Facade;
import haxe.ds.StringMap;

class AppFacade extends Facade implements IFacade {


    public function new(key:String) {
        super(key);
    }

    public static function getInstance(key:String):AppFacade {
        if (!Facade.instanceMap.exists(key)) {
            Facade.instanceMap.set(key, new AppFacade( key ));
        }
        return cast( Facade.instanceMap.get(key), AppFacade );

    }

    public function startup(app:App):Void {
        sendNotification(AppConstants.PREPARE_MODEL, app);
    }

    override private function initializeController():Void {
        super.initializeController();
        registerCommand(AppConstants.PREPARE_MODEL, PrepareModelCommand);
        registerCommand(AppConstants.PROXY_INITIALIZED, PrepareModelCommand);
        registerCommand(AppConstants.PREPARE_VIEW, PrepareViewCommand);
        registerCommand(AppConstants.MEDIATOR_INITIALIZED, PrepareViewCommand);
        registerCommand(AppConstants.CLOCK_SIGNAL, ClockSignalCommand);
        registerCommand(AppConstants.CHANGE_CLOCK_SPEED, ChangeClockSpeedCommand);
        registerCommand(AppConstants.STARTUP_COMPLETE, StartupCompleteCommand);
        registerCommand(AppConstants.OPCODE_MOV, OpcodeMOVCommand);
        registerCommand(AppConstants.OPCODE_LDI, OpcodeLDICommand);
        registerCommand(AppConstants.OPCODE_LDA, OpcodeLDACommand);
        registerCommand(AppConstants.OPCODE_SDA, OpcodeSDACommand);
        registerCommand(AppConstants.OPCODE_ALU, OpcodeALUCommand);
        registerCommand(AppConstants.OPCODE_JE, OpcodeJumpCommand);
        registerCommand(AppConstants.OPCODE_JNE, OpcodeJumpCommand);
        registerCommand(AppConstants.OPCODE_JMP, OpcodeJumpCommand);
        registerCommand(AppConstants.RESET, ResetCommand);
        registerCommand(AppConstants.POWER_OFF, ResetCommand);
        registerCommand(AppConstants.PLAY, PlayCommand);
        registerCommand(AppConstants.PAUSE, PauseCommand);
        registerCommand(AppConstants.EDIT_ROM, EditRomCommand);
        registerCommand(AppConstants.MANUAL_MODE_ON, ManualModeOnCommand);
        registerCommand(AppConstants.PROGRAM_CHANGED, ProgramChangedCommand);
        registerCommand(AppConstants.DETAIL_ACCUMULATOR, DetailAccumulatorCommand);
        registerCommand(AppConstants.ENTER_INSTRUCTION, EnterInstructionCommand);
    }


}


