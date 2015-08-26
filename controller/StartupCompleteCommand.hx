/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package controller;
import model.proxy.ClockProxy;
import org.puremvc.haxe.multicore.interfaces.INotification;
import org.puremvc.haxe.multicore.patterns.command.SimpleCommand;
class StartupCompleteCommand extends SimpleCommand {

    public function new() {
        super();
    }

    override function execute(note:INotification):Void {

        var clockProxy:ClockProxy = cast(facade.retrieveProxy(ClockProxy.NAME), ClockProxy);
        // nothing to do yet...
    }
}
