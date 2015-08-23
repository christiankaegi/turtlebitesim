package view.mediator;

import model.proxy.AppProxy;
import model.vo.InstructionVO;
import model.proxy.ProgramProxy;
import model.proxy.SnapshotProxy;
import view.component.Output;
import events.AppEvent;
import org.puremvc.haxe.multicore.interfaces.INotification;
import org.puremvc.haxe.multicore.patterns.mediator.Mediator;

class OutputMediator extends Mediator {
    public static inline var NAME:String = "OutputMediator";

    private var programProxy:ProgramProxy;
    private var snapshotProxy:SnapshotProxy;
    private var appProxy:AppProxy;

    public function new(viewComponent:Output) {
        super(NAME, viewComponent);
    }

    override public function onRegister():Void {
        getView().addEventListener(AppEvent.VIEW_READY, viewReadyHandler);
        sendNotification(AppConstants.ADD_TO_ZOOM_VIEW, getView());
        appProxy = cast(facade.retrieveProxy(AppProxy.NAME), AppProxy);
        programProxy = cast(facade.retrieveProxy(ProgramProxy.NAME), ProgramProxy);
        snapshotProxy = cast(facade.retrieveProxy(SnapshotProxy.NAME), SnapshotProxy);
    }

    override public function listNotificationInterests():Array<String> {
        return [
            AppConstants.CLOCK_ON,
            AppConstants.CLOCK_OFF,
            AppConstants.BROADCAST_SDA,
            AppConstants.BROADCAST_LDA,
            AppConstants.REGISTER_1_CHANGED,
            AppConstants.REGISTER_2_CHANGED,
            AppConstants.ACCUMULATOR_CHANGED,
            AppConstants.LOAD_ROM,
            AppConstants.POWER_ON,
            AppConstants.POWER_OFF,
            AppConstants.MODEL_RESET_COMPLETE
        ];
    }

    override public function handleNotification(note:INotification):Void {
        switch ( note.getName() )
        {
            case AppConstants.CLOCK_ON :
                if (!appProxy.getEnterInstructionActive()) {
                    var instruction:InstructionVO = cast(note.getBody(), InstructionVO);
                    getView().setProgramCountPointer(instruction.pointer);
                }
            case AppConstants.BROADCAST_LDA :
                getView().setRamPointer(note.getBody().pointer);
            case AppConstants.BROADCAST_SDA :
                getView().updateRam(note.getBody().ram, note.getBody().pointer);
            case AppConstants.CLOCK_OFF :
                getView().resetRamPointer();
            case AppConstants.REGISTER_1_CHANGED :
                getView().setRegister1(snapshotProxy.getRegister1().getHex());
            case AppConstants.REGISTER_2_CHANGED :
                getView().setRegister2(snapshotProxy.getRegister2().getHex());
            case AppConstants.ACCUMULATOR_CHANGED :
                getView().setAccumulator(snapshotProxy.getAccumulator().getHex());
            case AppConstants.LOAD_ROM :
                getView().loadRomDisplay(programProxy.getCurrentInstructions());
            case AppConstants.POWER_ON :
                getView().powerOn();
                getView().loadRomDisplay(programProxy.getCurrentInstructions());
            case AppConstants.POWER_OFF :
                getView().powerOff();
            case AppConstants.MODEL_RESET_COMPLETE :
                getView().resetAll();
        }
    }

    private function viewReadyHandler(event:AppEvent):Void {
        sendNotification(AppConstants.MEDIATOR_INITIALIZED, null, NAME);
    }

    public function getView():Output {
        return viewComponent;
    }

}