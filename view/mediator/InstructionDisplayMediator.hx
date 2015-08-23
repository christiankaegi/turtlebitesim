package view.mediator;

import model.proxy.ProgramProxy;
import model.vo.InstructionVO;
import view.component.InstructionDisplay;
import events.AppEvent;
import org.puremvc.haxe.multicore.interfaces.INotification;
import org.puremvc.haxe.multicore.patterns.mediator.Mediator;

class InstructionDisplayMediator extends Mediator {
    public static inline var NAME:String = "InstructionDisplayMediator";
    private var programProxy:ProgramProxy;

    public function new(viewComponent:InstructionDisplay) {
        super(NAME, viewComponent);
    }

    override public function onRegister():Void {
        getView().addEventListener(AppEvent.VIEW_READY, viewReadyHandler);
        programProxy = cast(facade.retrieveProxy(ProgramProxy.NAME), ProgramProxy);
        getView().visible = false;
        getView().x = 495 * AppConstants.SCALE_FACTOR;
        getView().y = 657 * AppConstants.SCALE_FACTOR;
        sendNotification(AppConstants.ADD_TO_NAVIG_VIEW, getView());
    }

    override public function listNotificationInterests():Array<String> {
        return [
            AppConstants.CLOCK_ON,
            AppConstants.RESET,
            AppConstants.POWER_ON,
            AppConstants.POWER_OFF
        ];
    }

    override public function handleNotification(note:INotification):Void {

        switch ( note.getName() )
        {
            case AppConstants.CLOCK_ON :
                var instruction:InstructionVO = cast(programProxy.getInstruction(), InstructionVO);
                getView().setOutput(instruction);
                programProxy.setManualInstruction(instruction);
            case AppConstants.POWER_ON :
                getView().visible = true;
            case AppConstants.POWER_OFF :
                getView().visible = false;
            case AppConstants.RESET :
                getView().clearOutput();
        }
    }

    private function viewReadyHandler(event:AppEvent):Void {
        sendNotification(AppConstants.MEDIATOR_INITIALIZED, null, NAME);
    }

    public function getView():InstructionDisplay {
        return viewComponent;
    }

}