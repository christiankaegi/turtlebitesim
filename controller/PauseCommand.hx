package controller;
import model.proxy.ClockProxy;
import model.proxy.AppProxy;
import view.component.EditRom;
import view.mediator.EditRomMediator;
import model.proxy.ProgramProxy;
import org.puremvc.haxe.multicore.patterns.command.SimpleCommand;
import org.puremvc.haxe.multicore.interfaces.INotification;
class PauseCommand extends SimpleCommand {


    public function new() {
        super();
    }

    override function execute(note:INotification):Void {

        var appProxy:AppProxy = cast(facade.retrieveProxy(AppProxy.NAME), AppProxy);
        var clockProxy:ClockProxy = cast(facade.retrieveProxy(ClockProxy.NAME), ClockProxy);

        appProxy.setAutoClockOn(false);
        clockProxy.stopClock();
    }
}
