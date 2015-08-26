/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package controller;
import view.mediator.DetailAccumulatorMediator;
import view.component.EditRom;
import view.mediator.EditRomMediator;
import model.proxy.ProgramProxy;
import org.puremvc.haxe.multicore.patterns.command.SimpleCommand;
import org.puremvc.haxe.multicore.interfaces.INotification;
class EditRomCommand extends SimpleCommand {


    public function new() {
        super();
    }

    override function execute(note:INotification):Void {

        if (!facade.hasMediator(EditRomMediator.NAME)) {
            var programProxy:ProgramProxy = cast(facade.retrieveProxy(ProgramProxy.NAME), ProgramProxy);

            sendNotification(AppConstants.PAUSE);
            facade.removeMediator(DetailAccumulatorMediator.NAME);
            facade.registerMediator(new EditRomMediator(new EditRom(programProxy.getData())));
        }
    }
}
