package view.mediator.lines;

import model.proxy.AppProxy;
import model.vo.InstructionVO;
import model.vo.SnapshotVO;
import model.proxy.SnapshotProxy;
import view.component.lines.Alu;
import events.AppEvent;
import org.puremvc.haxe.multicore.interfaces.INotification;
import org.puremvc.haxe.multicore.patterns.mediator.Mediator;


class AluMediator extends Mediator {
    public static inline var NAME:String = "AluMediator";
    private var appProxy:AppProxy;
    private var snapshotProxy:SnapshotProxy;

    public function new(viewComponent:Alu) {
        super(NAME, viewComponent);
    }

    override public function onRegister():Void {
        getView().addEventListener(AppEvent.VIEW_READY, viewReadyHandler);
        appProxy = cast(facade.retrieveProxy(AppProxy.NAME), AppProxy);
        snapshotProxy = cast(facade.retrieveProxy(SnapshotProxy.NAME), SnapshotProxy);
        sendNotification(AppConstants.ADD_TO_ZOOM_VIEW, getView());
    }

    override public function listNotificationInterests():Array<String> {
        return [
            AppConstants.CLOCK_ON,
            AppConstants.CLOCK_OFF,
            AppConstants.ALU_OUT_ACTIVE,
            AppConstants.ALU_EQUAL_ON,
            AppConstants.ALU_EQUAL_OFF,
            AppConstants.MODEL_RESET_COMPLETE,
            AppConstants.DETAIL_POPUP_ACTIVE
        ];
    }

    override public function handleNotification(note:INotification):Void {
        switch ( note.getName() )
        {
            case AppConstants.CLOCK_ON :
                if (!appProxy.getDetailPopupActive()) {
                    var register1:SnapshotVO = snapshotProxy.getRegister1();
                    var accumulator:SnapshotVO = snapshotProxy.getAccumulator();
                    var instruction:InstructionVO = cast(note.getBody(), InstructionVO);
                    if (instruction.codeOpcode != AppConstants.OPCODE_ALU) {
                        getView().hideLinesOut();
                    }
                }
            case AppConstants.CLOCK_OFF :
                getView().hideLineEqual();
            case AppConstants.ALU_EQUAL_ON :
                if (!appProxy.getDetailPopupActive()) {
                    if (!appProxy.getDetailPopupActive()) {
                        getView().showLineEqual();
                    }
                }
            case AppConstants.ALU_EQUAL_OFF :
                getView().hideLineEqual();
            case AppConstants.ALU_OUT_ACTIVE :
                if (!appProxy.getDetailPopupActive()) {
                    var snapshotVO:SnapshotVO = cast(note.getBody(), SnapshotVO);
                    getView().showLines(snapshotVO.getCodeArr());
                }
            case AppConstants.MODEL_RESET_COMPLETE :
                getView().hideLineEqual();
                getView().hideLinesOut();
            case AppConstants.DETAIL_POPUP_ACTIVE :
                getView().hideLineEqual();
                getView().hideLinesOut();
        }

    }

    private function viewReadyHandler(event:AppEvent):Void {
        sendNotification(AppConstants.MEDIATOR_INITIALIZED, null, NAME);
    }

    public function getView():Alu {
        return viewComponent;
    }

}