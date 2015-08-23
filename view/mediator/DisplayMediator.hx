package view.mediator;

import model.proxy.AppProxy;
import model.vo.InstructionVO;
import model.proxy.SnapshotProxy;
import view.component.Display;
import events.AppEvent;
import org.puremvc.haxe.multicore.interfaces.INotification;
import org.puremvc.haxe.multicore.patterns.mediator.Mediator;


class DisplayMediator extends Mediator {
    public static inline var NAME:String = "DisplayMediator";
    private var appProxy:AppProxy;
    private var snapshotProxy:SnapshotProxy;

    public function new(viewComponent:Display) {
        super(NAME, viewComponent);
    }

    override public function onRegister():Void {
        getView().addEventListener(AppEvent.VIEW_READY, viewReadyHandler);
        getView().addEventListener(AppEvent.DATA, dataEventHandler);
        appProxy = cast(facade.retrieveProxy(AppProxy.NAME), AppProxy);
        snapshotProxy = cast(facade.retrieveProxy(SnapshotProxy.NAME), SnapshotProxy);
        sendNotification(AppConstants.ADD_TO_ZOOM_VIEW, getView());
    }

    override public function listNotificationInterests():Array<String> {
        return [
            AppConstants.CLOCK_ON,
            AppConstants.LOOP,
            AppConstants.MODEL_RESET_COMPLETE,
            AppConstants.DETAIL_POPUP_ACTIVE,
            AppConstants.LOAD_ROM
        ];
    }

    override public function handleNotification(note:INotification):Void {
        switch ( note.getName() )
        {
            case AppConstants.CLOCK_ON :
                if (!appProxy.getDetailPopupActive()) {
                    var instruction:InstructionVO = cast(note.getBody(), InstructionVO);
                    if (instruction.codeOpcode == AppConstants.OPCODE_OUT) {
                        switch(instruction.codeAddress) {
                            case AppConstants.ADDRESS_ACCUMULATOR :
                                getView().setOutput(snapshotProxy.getAccumulator().getDecimal());
                            case AppConstants.OUT_REGISTER1 :
                                getView().setOutput(snapshotProxy.getRegister1().getDecimal());
                            case AppConstants.OUT_REGISTER2 :
                                getView().setOutput(snapshotProxy.getRegister2().getDecimal());
                        }
                    }
                }
            case AppConstants.LOOP :
                getView().clear();
            case AppConstants.MODEL_RESET_COMPLETE :
                getView().clear();
                getView().setCharCodeCheckBox(appProxy.getCharCodeActive());
            case AppConstants.DETAIL_POPUP_ACTIVE :
                getView().clear();
            case AppConstants.LOAD_ROM :
                if (note.getBody() == 1) {
                    // WELCOME!
                    appProxy.setCharCodeActive(true);
                    getView().setCharCodeCheckBox(appProxy.getCharCodeActive());
                }

        }
    }

    private function dataEventHandler(event:AppEvent):Void {
        var id:String = event.data.id;
        switch(id) {
            case "charCodeButton" :
                appProxy.setCharCodeActive(!appProxy.getCharCodeActive());
                getView().setCharCodeCheckBox(appProxy.getCharCodeActive());
        }
    }

    private function viewReadyHandler(event:AppEvent):Void {
        sendNotification(AppConstants.MEDIATOR_INITIALIZED, null, NAME);
    }

    public function getView():Display {
        return viewComponent;
    }

}