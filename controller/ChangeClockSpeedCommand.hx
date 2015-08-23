package controller;
import org.puremvc.haxe.multicore.patterns.command.SimpleCommand;
import model.data.ClockData;
import model.proxy.ClockProxy;
import org.puremvc.haxe.multicore.interfaces.INotification;
class ChangeClockSpeedCommand extends SimpleCommand {

    private var pos:Int;

    public function new() {
        super();
    }

    override function execute(note:INotification):Void {

        var pointer = cast(note.getBody(), String);
        var clockProxy:ClockProxy = cast(facade.retrieveProxy(ClockProxy.NAME), ClockProxy);

        if (pointer == "+") {
            pos = clockProxy.getCurrentFrequencyPointer() + 1;
        }
        clockProxy.changeClockSpeed(pos);

    }
}
