/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package view.mediator.lines;

import model.proxy.AppProxy;
import model.vo.SnapshotVO;
import model.proxy.SnapshotProxy;
import model.vo.InstructionVO;
import view.component.lines.Multiplexer;
import events.AppEvent;
import org.puremvc.haxe.multicore.interfaces.INotification;
import org.puremvc.haxe.multicore.patterns.mediator.Mediator;


class MultiplexerMediator extends Mediator {
    public static inline var NAME:String = "MultiplexerMediator";
    private var snapshotProxy:SnapshotProxy;
    private var appProxy:AppProxy;

    public function new(viewComponent:Multiplexer) {
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
                    var opcode:String = instruction.code.substr(0, 4);
                    var codeArr:Array<Bool> = new Array<Bool>();
                    if (opcode == AppConstants.OPCODE_MOV
                    || opcode == AppConstants.OPCODE_SDA
                    || opcode == AppConstants.OPCODE_INP
                    || opcode == AppConstants.OPCODE_OUT) {
                        switch(instruction.code.substr(6, 2)) {
                            case AppConstants.MULTIPLEXER_ACCUMULATOR :
                                codeArr = snapshotProxy.getData().accumulator.getCodeArr();
                            case AppConstants.MULTIPLEXER_REGISTER2 :
                                codeArr = snapshotProxy.getData().register2.getCodeArr();
                            case AppConstants.MULTIPLEXER_REGISTER1 :
                                codeArr = snapshotProxy.getData().register1.getCodeArr();
                            case AppConstants.MULTIPLEXER_KEYBOARD_INPUT :
                                codeArr = snapshotProxy.getData().keyboard.getCodeArr();
                        }
                        getView().showLines(codeArr);
                        sendNotification(AppConstants.MULTIPLEXER_OUT_CHANGED, codeArr);
                    }
                }
            case AppConstants.CLOCK_OFF :
                getView().hideAllLines();
            case AppConstants.ALU_OUT_ACTIVE :
                if (!appProxy.getDetailPopupActive()) {
                    var snapshotVO:SnapshotVO = cast(note.getBody(), SnapshotVO);
                    getView().showLines(snapshotVO.getCodeArr());
                    sendNotification(AppConstants.MULTIPLEXER_OUT_CHANGED, snapshotVO.getCodeArr());
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

    public function getView():Multiplexer {
        return viewComponent;
    }


}