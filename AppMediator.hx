/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package ;
import model.proxy.AppProxy;
import events.AppEvent;
import org.puremvc.haxe.multicore.patterns.mediator.Mediator;
import org.puremvc.haxe.multicore.interfaces.INotification;

class AppMediator extends Mediator {

    public static inline var NAME:String = "AppMediator";
    private var appProxy:AppProxy;

    public function new(viewComponent:App) {
        super(NAME, viewComponent);
    }

    override public function onRegister():Void {
        appProxy = cast(facade.retrieveProxy(AppProxy.NAME), AppProxy);
        getView().addEventListener(AppEvent.DRAG_START, dragStartHandler);
        getView().addEventListener(AppEvent.DRAG_STOP, dragStopHandler);
    }


    override public function listNotificationInterests():Array<String> {
        return [
            AppConstants.ADD_TO_ZOOM_VIEW,
            AppConstants.ADD_TO_NAVIG_VIEW,
            AppConstants.ADD_TO_DETAIL_POPUP_VIEW,
            AppConstants.ZOOM_IN,
            AppConstants.ZOOM_OUT
        ];
    }

    override public function handleNotification(note:INotification):Void {
        switch ( note.getName() )
        {
            case AppConstants.ADD_TO_ZOOM_VIEW:
                getView().addZoomView(note.getBody());
            case AppConstants.ADD_TO_DETAIL_POPUP_VIEW :
                getView().addDetailPopupView(note.getBody());
            case AppConstants.ADD_TO_NAVIG_VIEW:
                getView().addNavigView(note.getBody());
            case AppConstants.ZOOM_IN :
                getView().zoomIn();
            case AppConstants.ZOOM_OUT :
                getView().resetZoom();
        }
    }

    private function dragStartHandler(event:AppEvent):Void {
        if (!appProxy.getDetailPopupActive()) {
            getView().dragStart();
        }
    }

    private function dragStopHandler(event:AppEvent):Void {
        getView().dragStop();
    }

    public function getView():App {
        return viewComponent;
    }

}
