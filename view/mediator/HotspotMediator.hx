/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package view.mediator;

import model.proxy.AppProxy;
import model.proxy.ClockProxy;
import view.component.Hotspot;
import events.AppEvent;
import org.puremvc.haxe.multicore.interfaces.INotification;
import org.puremvc.haxe.multicore.patterns.mediator.Mediator;

class HotspotMediator extends Mediator {
    public static inline var NAME:String = "HotspotMediator";

    private var appProxy:AppProxy;
    private var clockProxy:ClockProxy;
    private var clockOn:Bool = true;

    public function new(viewComponent:Hotspot) {
        super(NAME, viewComponent);
    }

    override public function onRegister():Void {
        getView().addEventListener(AppEvent.DATA, dataEventHandler);
        getView().addEventListener(AppEvent.VIEW_READY, viewReadyHandler);
        appProxy = cast(facade.retrieveProxy(AppProxy.NAME), AppProxy);
        clockProxy = cast(facade.retrieveProxy(ClockProxy.NAME), ClockProxy);
        sendNotification(AppConstants.ADD_TO_ZOOM_VIEW, getView());
    }

    override public function listNotificationInterests():Array<String> {
        return [];
    }

    override public function handleNotification(note:INotification):Void {

    }

    private function dataEventHandler(event:AppEvent):Void {
        switch(event.data.id) {
            case "clockButton" :
                sendNotification(AppConstants.MANUAL_MODE_ON);
                if (appProxy.getEnterInstructionOutputValid()) {
                    sendNotification(AppConstants.CLOCK_SIGNAL, clockProxy.getClockOn());
                }
            case "accumulatorButton" :
                sendNotification(AppConstants.DETAIL_ACCUMULATOR);
            case "romButton" :
                sendNotification(AppConstants.ENTER_INSTRUCTION);
        }
    }

    private function viewReadyHandler(event:AppEvent):Void {
        sendNotification(AppConstants.MEDIATOR_INITIALIZED, null, NAME);
    }

    public function getView():Hotspot {
        return viewComponent;
    }

}