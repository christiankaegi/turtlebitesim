package controller.instruction;
import model.proxy.SnapshotProxy;
import model.proxy.ProgramProxy;
import model.vo.SnapshotVO;
import org.puremvc.haxe.multicore.patterns.command.SimpleCommand;
import org.puremvc.haxe.multicore.interfaces.INotification;
class OpcodeMOVCommand extends SimpleCommand {

    private var pos:Int;

    public function new() {
        super();
    }

    override function execute(note:INotification):Void {

        var programProxy:ProgramProxy = cast(facade.retrieveProxy(ProgramProxy.NAME), ProgramProxy);
        var snapshotProxy:SnapshotProxy = cast(facade.retrieveProxy(SnapshotProxy.NAME), SnapshotProxy);

        switch (programProxy.getAddressOrData()) {
            case AppConstants.ADDRESS_REGISTER1 :
                snapshotProxy.setRegister1(snapshotProxy.getAccumulator().getBinary());
                sendNotification(AppConstants.REGISTER_1_CHANGED, snapshotProxy.getAccumulator().getCodeArr());
            case AppConstants.ADDRESS_REGISTER2 :
                snapshotProxy.setRegister2(snapshotProxy.getAccumulator().getBinary());
                sendNotification(AppConstants.REGISTER_2_CHANGED, snapshotProxy.getAccumulator().getCodeArr());
        }

        sendNotification(AppConstants.BROADCAST_MOV, programProxy.getInstruction().code);

    }
}
