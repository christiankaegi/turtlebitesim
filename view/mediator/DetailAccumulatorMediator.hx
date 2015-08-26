/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package view.mediator;

import model.vo.SnapshotVO;
import model.proxy.ClockProxy;
import model.proxy.AppProxy;
import model.vo.InstructionVO;
import model.proxy.SnapshotProxy;
import view.component.DetailAccumulator;
import events.AppEvent;
import org.puremvc.haxe.multicore.interfaces.INotification;
import org.puremvc.haxe.multicore.patterns.mediator.Mediator;


class DetailAccumulatorMediator extends Mediator {
    public static inline var NAME:String = "DetailAccumulatorMediator";
    private var appProxy:AppProxy;
    private var clockProxy:ClockProxy;
    private var snapshotProxy:SnapshotProxy;

    public function new(viewComponent:DetailAccumulator) {
        super(NAME, viewComponent);
    }

    override public function onRegister():Void {
        appProxy = cast(facade.retrieveProxy(AppProxy.NAME), AppProxy);
        clockProxy = cast(facade.retrieveProxy(ClockProxy.NAME), ClockProxy);
        snapshotProxy = cast(facade.retrieveProxy(SnapshotProxy.NAME), SnapshotProxy);
        getView().addEventListener(AppEvent.DATA, dataEventHandler);
        getView().addEventListener(AppEvent.VIEW_READY, viewReadyHandler);
        sendNotification(AppConstants.ADD_TO_DETAIL_POPUP_VIEW, getView());
    }

    override public function onRemove():Void {
        getView().destroy();
    }

    override public function listNotificationInterests():Array<String> {
        return [
            AppConstants.ACCUMULATOR_CHANGED,
            AppConstants.CLOCK_ON,
            AppConstants.CLOCK_OFF,
            AppConstants.POWER_OFF
        ];
    }

    override public function handleNotification(note:INotification):Void {
        var accuChanged:Bool = false;
        switch ( note.getName() )
        {
            case AppConstants.ACCUMULATOR_CHANGED :
                getView().setOutputText(snapshotProxy.getAccumulator().getHex());
                getView().showInputLines(snapshotProxy.getAccumulator().getCodeArr());
                getView().showEnablerOutLines(snapshotProxy.getAccumulator().getCodeArr());
                getView().showSetLine();
                accuChanged = true;
            case AppConstants.CLOCK_ON :
                var instruction:InstructionVO = cast(note.getBody(), InstructionVO);
                var opcode:String = instruction.code.substr(0, 4);
                var codeArr:Array<Bool> = new Array<Bool>();
                if (opcode == AppConstants.OPCODE_MOV || opcode == AppConstants.OPCODE_SDA || opcode == AppConstants.OPCODE_INP || opcode == AppConstants.OPCODE_OUT) {
                    switch(instruction.code.substr(6, 2)) {
                        case AppConstants.MULTIPLEXER_ACCUMULATOR :
                            codeArr = snapshotProxy.getData().accumulator.getCodeArr();
                            getView().showInputLines(codeArr);
                            getView().showEnableLine();
                            getView().showEnablerOutLines(codeArr);
                    }
                } else {
                    if (!accuChanged) {
                        getView().showEnableLine();
                        getView().showEnablerOutLines(snapshotProxy.getAccumulator().getCodeArr());
                    }
                }
            case AppConstants.CLOCK_OFF :
                getView().hideEnableLine();
                getView().hideEnablerOutLines();
                getView().hideSetLine();
            case AppConstants.POWER_OFF :
                facade.removeMediator(NAME);
        }
    }

    private function viewReadyHandler(event:AppEvent):Void {
        var vo:SnapshotVO = snapshotProxy.getAccumulator();
        getView().setOutputText(vo.getHex());
        getView().showInputLines(vo.getCodeArr());
        var clkOn:Bool = clockProxy.getClockOn();
        if (clockProxy.getClockOn()) {
            getView().showEnableLine();
            getView().showEnablerOutLines(vo.getCodeArr());
        }
        sendNotification(AppConstants.MEDIATOR_INITIALIZED, null, NAME);
    }

    public function getView():DetailAccumulator {
        return viewComponent;
    }

    private function dataEventHandler(event:AppEvent):Void {
        switch(event.data.id) {
            case "closeButton" :
                facade.removeMediator(NAME);
                appProxy.setDetailPopupActive(false);
            case "oneBitMemoryManualMode" :
                sendNotification(AppConstants.MANUAL_MODE_ON);
        }
    }

}