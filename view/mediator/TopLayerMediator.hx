package view.mediator;

import model.proxy.AppProxy;
import events.AppEvent;
import view.component.TopLayer;
import org.puremvc.haxe.multicore.interfaces.INotification;
import org.puremvc.haxe.multicore.patterns.mediator.Mediator;

class TopLayerMediator extends Mediator {
    public static inline var NAME:String = "TopLayerMediator";
    private var appProxy:AppProxy;

    public function new(viewComponent:TopLayer) {
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
            AppConstants.RESET,
            AppConstants.POWER_OFF
        ];
    }

    override public function handleNotification(note:INotification):Void {
        switch ( note.getName() )
        {
            case AppConstants.CLOCK_ON :
                getView().showClock();
            case AppConstants.CLOCK_OFF :
                getView().hideClock();
            case AppConstants.POWER_OFF :
                getView().hideClock();
            case AppConstants.RESET :
                getView().hideClock();
            case AppConstants.DETAIL_POPUP_ACTIVE :
                getView().hideClock();
        }
    }

    private function viewReadyHandler(event:AppEvent):Void {
        sendNotification(AppConstants.MEDIATOR_INITIALIZED, null, NAME);
    }

    public function getView():TopLayer {
        return viewComponent;
    }

}