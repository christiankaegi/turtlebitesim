/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package controller;
import model.proxy.ClockProxy;
import model.proxy.AppProxy;
import model.proxy.SnapshotProxy;
import model.proxy.ProgramProxy;
import org.puremvc.haxe.multicore.patterns.command.SimpleCommand;
import org.puremvc.haxe.multicore.interfaces.INotification;
class ResetCommand extends SimpleCommand {


    public function new() {
        super();
    }

    override function execute(note:INotification):Void {

        var appProxy:AppProxy = cast(facade.retrieveProxy(AppProxy.NAME), AppProxy);
        var clockProxy:ClockProxy = cast(facade.retrieveProxy(ClockProxy.NAME), ClockProxy);
        var programProxy:ProgramProxy = cast(facade.retrieveProxy(ProgramProxy.NAME), ProgramProxy);
        var snapshotProxy:SnapshotProxy = cast(facade.retrieveProxy(SnapshotProxy.NAME), SnapshotProxy);

        appProxy.reset();
        clockProxy.reset();
        programProxy.reset();
        snapshotProxy.reset();

        appProxy.setCharCodeActive(false);

        appProxy.setShowUnitsOn(false);
        sendNotification(AppConstants.HIDE_OVERLAY_UNITS);

        appProxy.setShowHightlightOn(false);
        sendNotification(AppConstants.HIDE_HIGHLIGHT);

        appProxy.setShowFlowOn(false);
        sendNotification(AppConstants.HIDE_OVERLAY_FLOW);

        sendNotification(AppConstants.MODEL_RESET_COMPLETE);

    }
}
