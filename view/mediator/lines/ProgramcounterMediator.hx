package view.mediator.lines;

import model.proxy.AppProxy;
import utilities.NumberFormat;
import model.proxy.SnapshotProxy;
import model.vo.InstructionVO;
import view.component.lines.Programcounter;
import events.AppEvent;
import org.puremvc.haxe.multicore.interfaces.INotification;
import org.puremvc.haxe.multicore.patterns.mediator.Mediator;


class ProgramcounterMediator extends Mediator {
    public static inline var NAME:String = "ProgramcounterMediator";
    private var snapshotProxy:SnapshotProxy;
    private var appProxy:AppProxy;

    public function new(viewComponent:Programcounter) {
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
            AppConstants.BROADCAST_JUMP,
            AppConstants.MODEL_RESET_COMPLETE,
            AppConstants.DETAIL_POPUP_ACTIVE
        ];
    }

    override public function handleNotification(note:INotification):Void {
        switch ( note.getName() )
        {
            case AppConstants.CLOCK_ON :
                if (!appProxy.getDetailPopupActive()) {
                    var instruction:InstructionVO = cast(note.getBody(), InstructionVO);
                    var codeArr:Array<Bool> = NumberFormat.binaryToArray(NumberFormat.decimalToBinary(instruction.pointer), 4);
                    codeArr.unshift(false);
                    codeArr.unshift(false);
                    codeArr.unshift(false);
                    codeArr.unshift(false);
                    getView().showLines(codeArr);
                }
            case AppConstants.MODEL_RESET_COMPLETE :
                getView().hideAllLines();
            case AppConstants.DETAIL_POPUP_ACTIVE :
                getView().hideAllLines();
        }
    }

    private function viewReadyHandler(event:AppEvent):Void {
        sendNotification(AppConstants.MEDIATOR_INITIALIZED, null, NAME);
    }

    public function getView():Programcounter {
        return viewComponent;
    }

}