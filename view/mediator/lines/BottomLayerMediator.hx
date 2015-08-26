/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package view.mediator.lines;

import events.AppEvent;
import view.component.lines.BottomLayer;
import org.puremvc.haxe.multicore.interfaces.INotification;
import org.puremvc.haxe.multicore.patterns.mediator.Mediator;

class BottomLayerMediator extends Mediator {
    public static inline var NAME:String = "BottomLayerMediator";

    public function new(viewComponent:BottomLayer) {
        super(NAME, viewComponent);
    }

    override public function onRegister():Void {
        getView().addEventListener(AppEvent.VIEW_READY, viewReadyHandler);
        sendNotification(AppConstants.ADD_TO_ZOOM_VIEW, getView());
    }

    override public function listNotificationInterests():Array<String> {
        return [];
    }

    override public function handleNotification(note:INotification):Void {
    }

    private function viewReadyHandler(event:AppEvent):Void {
        sendNotification(AppConstants.MEDIATOR_INITIALIZED, null, NAME);
    }

    public function getView():BottomLayer {
        return viewComponent;
    }
}