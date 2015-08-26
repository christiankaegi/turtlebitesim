/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package view.mediator.lines;

import model.proxy.AppProxy;
import view.component.lines.Clock;
import events.AppEvent;
import org.puremvc.haxe.multicore.interfaces.INotification;
import org.puremvc.haxe.multicore.patterns.mediator.Mediator;

class ClockMediator extends Mediator {
    public static inline var NAME:String = "ClockMediator";
    private var clockOn:Bool = false;
    private var appProxy:AppProxy;

    public function new(viewComponent:Clock) {
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
            AppConstants.CLOCK_OFF,
            AppConstants.CHANGE_CLOCK_SPEED,
            AppConstants.MODEL_RESET_COMPLETE
        ];
    }

    override public function handleNotification(note:INotification):Void {
        switch ( note.getName() )
        {
            case AppConstants.CLOCK_ON :
                getView().showLines();
            case AppConstants.CLOCK_OFF :
                getView().hideAllLines();
            case AppConstants.CHANGE_CLOCK_SPEED :
                getView().hideAllLines();
            case AppConstants.MODEL_RESET_COMPLETE :
                getView().hideAllLines();
        }
    }

    private function viewReadyHandler(event:AppEvent):Void {
        sendNotification(AppConstants.MEDIATOR_INITIALIZED, null, NAME);
    }

    public function getView():Clock {
        return viewComponent;
    }

}