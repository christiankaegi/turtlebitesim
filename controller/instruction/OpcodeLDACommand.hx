package controller.instruction;
import model.vo.SnapshotVO;
import utilities.NumberFormat;
import model.vo.DecHexVO;
import model.proxy.SnapshotProxy;
import model.proxy.ProgramProxy;
import org.puremvc.haxe.multicore.patterns.command.SimpleCommand;
import org.puremvc.haxe.multicore.interfaces.INotification;
class OpcodeLDACommand extends SimpleCommand {

    public function new() {
        super();
    }

    override function execute(note:INotification):Void {

        var programProxy:ProgramProxy = cast(facade.retrieveProxy(ProgramProxy.NAME), ProgramProxy);
        var snapshotProxy:SnapshotProxy = cast(facade.retrieveProxy(SnapshotProxy.NAME), SnapshotProxy);

        var pointer:DecHexVO = NumberFormat.binaryToDecimal(programProxy.getAddressOrData());

        sendNotification(AppConstants.BROADCAST_LDA, {ram:snapshotProxy.getRam(),pointer:pointer.dec});

        var vo:SnapshotVO = snapshotProxy.getRam()[pointer.dec];
        snapshotProxy.setAccumulator(vo.getBinary());
        sendNotification(AppConstants.ACCUMULATOR_CHANGED, vo.getCodeArr());

    }
}
