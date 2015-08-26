/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package view.mediator.lines;

import model.proxy.AppProxy;
import utilities.NumberFormat;
import model.vo.DecHexVO;
import model.proxy.SnapshotProxy;
import model.vo.InstructionVO;
import view.component.lines.Gates;
import events.AppEvent;
import org.puremvc.haxe.multicore.interfaces.INotification;
import org.puremvc.haxe.multicore.patterns.mediator.Mediator;

class GatesMediator extends Mediator {
    public static inline var NAME:String = "GatesMediator";
    private var appProxy:AppProxy;

    private var snapshotProxy:SnapshotProxy;

    public function new(viewComponent:Gates) {
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
            AppConstants.CHANGE_CLOCK_SPEED,
            AppConstants.MULTIPLEXER_OUT_CHANGED,
            AppConstants.ALU_EQUAL_ON,
            AppConstants.ALU_EQUAL_OFF,
            AppConstants.POWER_ON,
            AppConstants.POWER_OFF,
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
                    if (instruction.codeOpcode == AppConstants.OPCODE_LDA) {
                        var pointer:DecHexVO = NumberFormat.binaryToDecimal(instruction.code.substr(4, 4));
                        getView().showLines(instruction, null, null, snapshotProxy.getRam()[pointer.dec]);
                    } else {
                        getView().showLines(instruction, snapshotProxy.getAccumulator(), snapshotProxy.getRegister1(), null);
                    }
                }
            case AppConstants.CLOCK_OFF :
                var instruction:InstructionVO = cast(note.getBody(), InstructionVO);
                if (instruction.codeOpcode != AppConstants.OPCODE_ALU && instruction.codeOpcode != AppConstants.OPCODE_LDI) {
                    getView().hideLinesG1();
                }
            case AppConstants.MULTIPLEXER_OUT_CHANGED :
                if (!appProxy.getDetailPopupActive()) {
                    getView().showLinesG1(note.getBody());
                }
            case AppConstants.CHANGE_CLOCK_SPEED :
                getView().hideAllLines();
            case AppConstants.ALU_EQUAL_ON :
                getView().hideLineG6();
            case AppConstants.ALU_EQUAL_OFF :
                if (!appProxy.getDetailPopupActive()) {
                    getView().showLineG6();
                }
            case AppConstants.POWER_ON :
                if (!appProxy.getDetailPopupActive()) {
                    getView().showLineG6();
                }
            case AppConstants.POWER_OFF :
                getView().hideLineG6();
            case AppConstants.MODEL_RESET_COMPLETE :
                getView().hideAllLines();
            case AppConstants.DETAIL_POPUP_ACTIVE :
                getView().hideAllLines();
        }
    }

    private function viewReadyHandler(event:AppEvent):Void {
        sendNotification(AppConstants.MEDIATOR_INITIALIZED, null, NAME);
    }

    public function getView():Gates {
        return viewComponent;
    }
}