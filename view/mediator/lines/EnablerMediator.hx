/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package view.mediator.lines;

import model.vo.SnapshotVO;
import model.proxy.AppProxy;
import model.proxy.SnapshotProxy;
import view.component.lines.Enabler;
import events.AppEvent;
import org.puremvc.haxe.multicore.interfaces.INotification;
import org.puremvc.haxe.multicore.patterns.mediator.Mediator;

class EnablerMediator extends Mediator {
    public static inline var NAME:String = "EnablerMediator";
    private var appProxy:AppProxy;
    private var snapshotProxy:SnapshotProxy;

    public function new(viewComponent:Enabler) {
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
            AppConstants.BROADCAST_LDI,
            AppConstants.BROADCAST_LDA,
            AppConstants.CLOCK_ON,
            AppConstants.CHANGE_CLOCK_SPEED,
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
            case AppConstants.BROADCAST_LDI :
                if (!appProxy.getDetailPopupActive()) {
                    getView().showLinesEnabler2(note.getBody());
                }
            case AppConstants.BROADCAST_LDA :
                if (!appProxy.getDetailPopupActive()) {
                    var vo:SnapshotVO = cast(note.getBody().ram[note.getBody().pointer], SnapshotVO);
                    getView().showLinesEnabler1(vo.getCodeArr());
                }
            case AppConstants.CHANGE_CLOCK_SPEED :
                getView().hideAllLines();
            case AppConstants.MODEL_RESET_COMPLETE :
                getView().hideAllLines();
            case AppConstants.DETAIL_POPUP_ACTIVE :
                getView().hideAllLines();
        }
    }

    private function viewReadyHandler(event:AppEvent):Void {
        sendNotification(AppConstants.MEDIATOR_INITIALIZED, null, NAME);
    }

    public function getView():Enabler {
        return viewComponent;
    }

}