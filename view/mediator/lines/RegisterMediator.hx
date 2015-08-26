/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package view.mediator.lines;

import model.proxy.AppProxy;
import model.proxy.SnapshotProxy;
import view.component.lines.Register;
import events.AppEvent;
import org.puremvc.haxe.multicore.interfaces.INotification;
import org.puremvc.haxe.multicore.patterns.mediator.Mediator;


class RegisterMediator extends Mediator {
    public static inline var NAME:String = "RegisterMediator";
    private var snapshotProxy:SnapshotProxy;
    private var appProxy:AppProxy;

    public function new(viewComponent:Register) {
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
            AppConstants.CLOCK_OFF,
            AppConstants.REGISTER_1_CHANGED,
            AppConstants.REGISTER_2_CHANGED,
            AppConstants.MODEL_RESET_COMPLETE,
            AppConstants.DETAIL_POPUP_ACTIVE
        ];
    }

    override public function handleNotification(note:INotification):Void {
        switch ( note.getName() )
        {
            case AppConstants.CLOCK_ON :
                if (!appProxy.getDetailPopupActive()) {
                    getView().showLinesRegister1(snapshotProxy.getRegister1().getCodeArr());
                    getView().showLinesRegister2(snapshotProxy.getRegister2().getCodeArr());
                }
            case AppConstants.CLOCK_OFF :
                getView().hideAllLines();
            case AppConstants.REGISTER_1_CHANGED :
                if (!appProxy.getDetailPopupActive()) {
                    getView().showLinesRegister1(note.getBody());
                }
            case AppConstants.REGISTER_2_CHANGED :
                if (!appProxy.getDetailPopupActive()) {
                    getView().showLinesRegister2(note.getBody());
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

    public function getView():Register {
        return viewComponent;
    }

}