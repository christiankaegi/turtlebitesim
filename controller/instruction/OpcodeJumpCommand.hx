package controller.instruction;
import model.vo.DecHexVO;
import utilities.NumberFormat;
import model.vo.InstructionVO;
import model.proxy.SnapshotProxy;
import model.proxy.ProgramProxy;
import model.vo.SnapshotVO;
import org.puremvc.haxe.multicore.patterns.command.SimpleCommand;
import org.puremvc.haxe.multicore.interfaces.INotification;
class OpcodeJumpCommand extends SimpleCommand {

    private var pos:Int;

    public function new() {
        super();
    }

    override function execute(note:INotification):Void {

        var programProxy:ProgramProxy = cast(facade.retrieveProxy(ProgramProxy.NAME), ProgramProxy);
        var snapshotProxy:SnapshotProxy = cast(facade.retrieveProxy(SnapshotProxy.NAME), SnapshotProxy);

        var instruction:InstructionVO = cast(note.getBody(), InstructionVO);
        var newPointer:DecHexVO = NumberFormat.binaryToDecimal(instruction.code.substr(4,4));
        var equal:Bool = snapshotProxy.getAccumulator().getDecimal() == snapshotProxy.getRegister1().getDecimal();

        switch(instruction.code.substr(0,4)) {
            case AppConstants.OPCODE_JE :
                if (equal) {
                    programProxy.setInstructionPointer(newPointer.dec - 1);
                }
            case AppConstants.OPCODE_JNE :
                if (!equal) {
                    programProxy.setInstructionPointer(newPointer.dec - 1);
                }
            case AppConstants.OPCODE_JMP :
                programProxy.setInstructionPointer(newPointer.dec - 1);
        }
    }
}
