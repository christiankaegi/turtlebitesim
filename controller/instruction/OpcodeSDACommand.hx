package controller.instruction;
import model.vo.SnapshotVO;
import utilities.NumberFormat;
import model.vo.DecHexVO;
import model.proxy.SnapshotProxy;
import model.proxy.ProgramProxy;
import org.puremvc.haxe.multicore.patterns.command.SimpleCommand;
import org.puremvc.haxe.multicore.interfaces.INotification;
class OpcodeSDACommand extends SimpleCommand {

    private var pos:Int;

    public function new() {
        super();
    }

    override function execute(note:INotification):Void {

        var programProxy:ProgramProxy = cast(facade.retrieveProxy(ProgramProxy.NAME), ProgramProxy);
        var snapshotProxy:SnapshotProxy = cast(facade.retrieveProxy(SnapshotProxy.NAME), SnapshotProxy);

        var address:DecHexVO = NumberFormat.binaryToDecimal(programProxy.getInstruction().code.substr(4,4));
        snapshotProxy.setRam(snapshotProxy.getAccumulator(), address.dec);

        var value = snapshotProxy.getRam()[address.dec];
        sendNotification(AppConstants.BROADCAST_SDA, {ram:snapshotProxy.getRam(),pointer:address.dec});

    }
}
