package view.mediator.lines;

import view.component.lines.Keyboard;
import events.AppEvent;
import org.puremvc.haxe.multicore.patterns.mediator.Mediator;


class KeyboardMediator extends Mediator {
    public static inline var NAME:String = "KeyboardMediator";

    public function new(viewComponent:Keyboard) {
        super(NAME, viewComponent);
    }

    override public function onRegister():Void {
        getView().addEventListener(AppEvent.VIEW_READY, viewReadyHandler);
        sendNotification(AppConstants.ADD_TO_ZOOM_VIEW, getView());
    }

    private function viewReadyHandler(event:AppEvent):Void {
        sendNotification(AppConstants.MEDIATOR_INITIALIZED, null, NAME);
    }

    public function getView():Keyboard {
        return viewComponent;
    }

}