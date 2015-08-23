package view.mediator;

import events.AppEvent;
import view.component.Welcome;
import org.puremvc.haxe.multicore.interfaces.INotification;
import org.puremvc.haxe.multicore.patterns.mediator.Mediator;

class WelcomeMediator extends Mediator {
    public static inline var NAME:String = "WelcomeMediator";

    public function new(viewComponent:Welcome) {
        super(NAME, viewComponent);
    }

    override public function onRegister():Void {
        getView().addEventListener(AppEvent.VIEW_READY, viewReadyHandler);
        sendNotification(AppConstants.ADD_TO_ZOOM_VIEW, getView());
    }

    override public function listNotificationInterests():Array<String> {
        return [
            AppConstants.POWER_ON,
            AppConstants.POWER_OFF,
            AppConstants.SHOW_ARCHITECTURE
        ];
    }

    override public function handleNotification(note:INotification):Void {

        switch ( note.getName() )
        {
            case AppConstants.POWER_ON :
                getView().hide();
            case AppConstants.POWER_OFF :
                getView().show();
            case AppConstants.SHOW_ARCHITECTURE :
                getView().toggleArchitecture();
        }
    }

    private function viewReadyHandler(event:AppEvent):Void {
        sendNotification(AppConstants.MEDIATOR_INITIALIZED, null, NAME);
    }

    public function getView():Welcome {
        return viewComponent;
    }

/*
    private function dataEventHandler(event:AppEvent):Void {
        getView().test(event.data.str);
    }
    */

}