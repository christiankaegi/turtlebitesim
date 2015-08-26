/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package controller.instruction;
import model.proxy.SnapshotProxy;
import model.proxy.ProgramProxy;
import org.puremvc.haxe.multicore.patterns.command.SimpleCommand;
import org.puremvc.haxe.multicore.interfaces.INotification;
class OpcodeLDICommand extends SimpleCommand {

    private var pos:Int;

    public function new() {
        super();
    }

    override function execute(note:INotification):Void {

        var programProxy:ProgramProxy = cast(facade.retrieveProxy(ProgramProxy.NAME), ProgramProxy);
        var snapshotProxy:SnapshotProxy = cast(facade.retrieveProxy(SnapshotProxy.NAME), SnapshotProxy);

        snapshotProxy.setAccumulator(programProxy.getAddressOrData());
        sendNotification(AppConstants.BROADCAST_LDI, programProxy.getInstruction().codeArr);
        sendNotification(AppConstants.ACCUMULATOR_CHANGED, programProxy.getInstruction().codeArr);

    }
}
