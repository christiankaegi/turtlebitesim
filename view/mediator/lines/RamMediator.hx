package view.mediator.lines;

import model.proxy.AppProxy;
import model.proxy.SnapshotProxy;
import view.component.lines.Ram;
import events.AppEvent;
import org.puremvc.haxe.multicore.interfaces.INotification;
import org.puremvc.haxe.multicore.patterns.mediator.Mediator;


class RamMediator extends Mediator {
    public static inline var NAME:String = "RamMediator";
    private var snapshotProxy:SnapshotProxy;
    private var appProxy:AppProxy;

    public function new(viewComponent:Ram) {
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
            AppConstants.BROADCAST_SDA,
            AppConstants.BROADCAST_LDA,
            AppConstants.MODEL_RESET_COMPLETE
            //AppConstants.DETAIL_POPUP_ACTIVE
        ];
    }

    override public function handleNotification(note:INotification):Void {
        switch ( note.getName() )
        {
            case AppConstants.CLOCK_ON :
                if (!appProxy.getDetailPopupActive()) {
                    getView().hideAllLines();
                }
            case AppConstants.BROADCAST_SDA :
                if (!appProxy.getDetailPopupActive()) {
                    getView().showLines(note.getBody().ram[note.getBody().pointer]);
                }
            case AppConstants.BROADCAST_LDA :
                if (!appProxy.getDetailPopupActive()) {
                    getView().showLines(note.getBody().ram[note.getBody().pointer]);
                }
            case AppConstants.MODEL_RESET_COMPLETE :
                getView().hideAllLines();
            case AppConstants.DETAIL_POPUP_ACTIVE :
                getView().hideAllLines();

        }
    }

    private function viewReadyHandler(event:AppEvent):Void {
        sendNotification(AppConstants.MEDIATOR_INITIALIZED, null, NAME);
    }

    public function getView():Ram {
        return viewComponent;
    }

}