package view.mediator;

import view.component.Overlay;
import events.AppEvent;
import org.puremvc.haxe.multicore.interfaces.INotification;
import org.puremvc.haxe.multicore.patterns.mediator.Mediator;

class OverlayMediator extends Mediator {
    public static inline var NAME:String = "OverlayMediator";

    public function new(viewComponent:Overlay) {
        super(NAME, viewComponent);
    }

    override public function onRegister():Void {
        getView().addEventListener(AppEvent.VIEW_READY, viewReadyHandler);
        sendNotification(AppConstants.ADD_TO_ZOOM_VIEW, getView());
    }

    override public function listNotificationInterests():Array<String> {
        return [
            AppConstants.SHOW_OVERLAY_UNITS,
            AppConstants.HIDE_OVERLAY_UNITS,
            AppConstants.SHOW_OVERLAY_FLOW,
            AppConstants.HIDE_OVERLAY_FLOW
        ];
    }

    override public function handleNotification(note:INotification):Void {
        switch ( note.getName() )
        {
            case AppConstants.SHOW_OVERLAY_UNITS :
                getView().showUnits();
            case AppConstants.HIDE_OVERLAY_UNITS :
                getView().hideUnits();
            case AppConstants.SHOW_OVERLAY_FLOW :
                getView().showFlow();
            case AppConstants.HIDE_OVERLAY_FLOW :
                getView().hideFlow();
        }
    }

    private function viewReadyHandler(event:AppEvent):Void {
        sendNotification(AppConstants.MEDIATOR_INITIALIZED, null, NAME);
    }

    public function getView():Overlay {
        return viewComponent;
    }

}