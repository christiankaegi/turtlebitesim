/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package controller;
import model.proxy.ClockProxy;
import model.proxy.ProgramProxy;
import model.vo.InstructionVO;
import model.proxy.AppProxy;
import view.component.EnterInstruction;
import view.mediator.EnterInstructionMediator;
import org.puremvc.haxe.multicore.patterns.command.SimpleCommand;
import org.puremvc.haxe.multicore.interfaces.INotification;

class EnterInstructionCommand extends SimpleCommand {


    public function new() {
        super();
    }

    override function execute(note:INotification):Void {

        if (!facade.hasMediator(EnterInstructionMediator.NAME)) {

            var appProxy:AppProxy = cast(facade.retrieveProxy(AppProxy.NAME), AppProxy);
            var programProxy:ProgramProxy = cast(facade.retrieveProxy(ProgramProxy.NAME), ProgramProxy);
            var clockProxy:ClockProxy = cast(facade.retrieveProxy(ClockProxy.NAME), ClockProxy);

            appProxy.setAutoClockOn(false);
            clockProxy.stopClock();
            sendNotification(AppConstants.PAUSE);
            appProxy.setEnterInstructionActive(true);
            facade.registerMediator(new EnterInstructionMediator(new EnterInstruction(programProxy.getManualInstruction())));
        }

    }
}
