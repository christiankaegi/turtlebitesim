/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package view.mediator.lines;

import model.proxy.AppProxy;
import model.vo.InstructionVO;
import view.component.lines.Decoder;
import events.AppEvent;
import org.puremvc.haxe.multicore.interfaces.INotification;
import org.puremvc.haxe.multicore.patterns.mediator.Mediator;

class DecoderMediator extends Mediator {
    public static inline var NAME:String = "DecoderMediator";
    private var appProxy:AppProxy;

    public function new(viewComponent:Decoder) {
        super(NAME, viewComponent);
    }

    override public function onRegister():Void {
        getView().addEventListener(AppEvent.VIEW_READY, viewReadyHandler);
        appProxy = cast(facade.retrieveProxy(AppProxy.NAME), AppProxy);
        sendNotification(AppConstants.ADD_TO_ZOOM_VIEW, getView());
    }

    override public function listNotificationInterests():Array<String> {
        return [
            AppConstants.CLOCK_ON,
            AppConstants.BROADCAST_MOV,
            AppConstants.BROADCAST_INP,
            AppConstants.CHANGE_CLOCK_SPEED,
            AppConstants.MODEL_RESET_COMPLETE
            //AppConstants.DETAIL_POPUP_ACTIVE
        ];
    }

    override public function handleNotification(note:INotification):Void {
        switch ( note.getName() )
        {
            case AppConstants.CLOCK_ON :
                if (!appProxy.getDetailPopupActive()) {
                    var instruction:InstructionVO = cast(note.getBody(), InstructionVO);
                    if (instruction.code.substr(0, 4) == AppConstants.OPCODE_OUT) {
                        getView().showLines(instruction.code);
                    } else {
                        getView().hideAllLines();
                    }
                }
            case AppConstants.BROADCAST_MOV :
                if (!appProxy.getDetailPopupActive()) {
                    getView().showLines(note.getBody());

                }
            case AppConstants.BROADCAST_INP :
                if (!appProxy.getDetailPopupActive()) {
                    getView().showLines(note.getBody());
                    getView().showLines(note.getBody());
                }
            case AppConstants.CHANGE_CLOCK_SPEED :
                getView().hideAllLines();
            case AppConstants.MODEL_RESET_COMPLETE :
                getView().hideAllLines();
            case AppConstants.DETAIL_POPUP_ACTIVE :
                getView().hideAllLines();
        }
    }

    private function viewReadyHandler(event:AppEvent):Void {
        sendNotification(AppConstants.MEDIATOR_INITIALIZED, null, NAME);
    }

    public function getView():Decoder {
        return viewComponent;
    }

}