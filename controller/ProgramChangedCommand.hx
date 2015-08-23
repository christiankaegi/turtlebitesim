package controller;
import model.proxy.ProgramProxy;
import org.puremvc.haxe.multicore.patterns.command.SimpleCommand;
import org.puremvc.haxe.multicore.interfaces.INotification;
class ProgramChangedCommand extends SimpleCommand {


    public function new() {
        super();
    }

    override function execute(note:INotification):Void {

        var programProxy:ProgramProxy = cast(facade.retrieveProxy(ProgramProxy.NAME), ProgramProxy);

        var programPointer:Int = note.getBody();
        if (programProxy.getProgramPointer() != programPointer) {
            programProxy.setProgramPointer(programPointer);
            sendNotification(AppConstants.RESET);
            sendNotification(AppConstants.LOAD_ROM, programPointer);
        }
    }
}
