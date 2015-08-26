/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package controller.instruction;
import model.vo.SnapshotVO;
import utilities.NumberFormat;
import model.proxy.SnapshotProxy;
import model.proxy.ProgramProxy;
import org.puremvc.haxe.multicore.patterns.command.SimpleCommand;
import org.puremvc.haxe.multicore.interfaces.INotification;
class OpcodeALUCommand extends SimpleCommand {

    private var pos:Int;

    public function new() {
        super();
    }

    override function execute(note:INotification):Void {

        var programProxy:ProgramProxy = cast(facade.retrieveProxy(ProgramProxy.NAME), ProgramProxy);
        var snapshotProxy:SnapshotProxy = cast(facade.retrieveProxy(SnapshotProxy.NAME), SnapshotProxy);

        var reg1:UInt = snapshotProxy.getRegister1().getDecimal();
        var accu:UInt = snapshotProxy.getAccumulator().getDecimal();
        var result:Int = 0;
        switch (programProxy.getAddressOrData()) {
            case AppConstants.ADDRESS_ADD :
                result = reg1 + accu;
                if (result > 15) {
                    result = result % 15 - 1;
                }
            case AppConstants.ADDRESS_SUB :
                result = accu - reg1;
                if (result < 0) {
                    result = 15 - result % 15;
                }
            case AppConstants.ADDRESS_INC :
                result = accu + 1;
                if (result > 15) {
                    result = result % 15 - 1;
                }
            case AppConstants.ADDRESS_DEC :
                result = accu - 1;
                if (result < 0) {
                    result = 15;
                }
        }

        var bin:String = NumberFormat.decimalToBinary(result);
        snapshotProxy.setAccumulator(bin);
        sendNotification(AppConstants.ALU_OUT_ACTIVE, new SnapshotVO(bin));
        sendNotification(AppConstants.ACCUMULATOR_CHANGED, snapshotProxy.getAccumulator().getCodeArr());

    }
}
