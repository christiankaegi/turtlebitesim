/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package controller.startup;
import model.data.SnapshotData;
import model.proxy.SnapshotProxy;
import model.data.ProgramData;
import model.proxy.ProgramProxy;
import model.data.ClockData;
import model.proxy.ClockProxy;
import model.proxy.AppProxy;
import model.data.AppData;
import org.puremvc.haxe.multicore.interfaces.INotification;
import org.puremvc.haxe.multicore.patterns.command.SimpleCommand;
class PrepareModelCommand extends SimpleCommand {
    public function new() {
        super();
    }

    override function execute(note:INotification):Void {
        if (note.getName() == AppConstants.PREPARE_MODEL) {
            var app = cast(note.getBody(), App);
            facade.registerProxy(new AppProxy(new AppData(app)));
        } else {
            var appProxy:AppProxy = cast(facade.retrieveProxy(AppProxy.NAME), AppProxy);
            switch(note.getType()) {
                case AppProxy.NAME :
                    //trace("APP PROXY");
                    facade.registerProxy(new ProgramProxy(new ProgramData()));
                case ProgramProxy.NAME :
                    //trace("PROGRAM PROXY");
                    facade.registerProxy(new SnapshotProxy(new SnapshotData()));
                case SnapshotProxy.NAME :
                    //trace("SNAPSHOT PROXY");
                    facade.registerProxy(new ClockProxy(new ClockData()));
                case ClockProxy.NAME :
                    //trace("CLOCK PROXY");
                    sendNotification(AppConstants.PREPARE_VIEW, appProxy.getApp());
            }
        }

    }

}

