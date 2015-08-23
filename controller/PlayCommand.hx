package controller;
import model.proxy.ClockProxy;
import model.proxy.AppProxy;
import org.puremvc.haxe.multicore.patterns.command.SimpleCommand;
import org.puremvc.haxe.multicore.interfaces.INotification;
class PlayCommand extends SimpleCommand {

    public function new() {
        super();
    }

    override function execute(note:INotification):Void {

        var appProxy:AppProxy = cast(facade.retrieveProxy(AppProxy.NAME), AppProxy);
        var clockProxy:ClockProxy = cast(facade.retrieveProxy(ClockProxy.NAME), ClockProxy);

        appProxy.setAutoClockOn(true);
        clockProxy.startClock();
    }
}
