/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package view.mediator.lines;

import model.proxy.AppProxy;
import model.proxy.SnapshotProxy;
import view.component.lines.Accumulator;
import events.AppEvent;
import org.puremvc.haxe.multicore.interfaces.INotification;
import org.puremvc.haxe.multicore.patterns.mediator.Mediator;
import openfl.display.BitmapData;
import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.Assets;
import openfl.events.Event;


class AccumulatorMediator extends Mediator {
    public static inline var NAME:String = "AccumulatorMediator";
    private var snapshotProxy:SnapshotProxy;
    private var appProxy:AppProxy;

    public function new(viewComponent:Accumulator) {
        super(NAME, viewComponent);
    }

    override public function onRegister():Void {
        getView().addEventListener(AppEvent.VIEW_READY, viewReadyHandler);
        snapshotProxy = cast(facade.retrieveProxy(SnapshotProxy.NAME), SnapshotProxy);
        appProxy = cast(facade.retrieveProxy(AppProxy.NAME), AppProxy);
        sendNotification(AppConstants.ADD_TO_ZOOM_VIEW, getView());
    }

    override public function listNotificationInterests():Array<String> {
        return [
            AppConstants.ACCUMULATOR_CHANGED,
            AppConstants.CLOCK_ON,
            AppConstants.CLOCK_OFF,
            AppConstants.MODEL_RESET_COMPLETE
            //AppConstants.DETAIL_POPUP_ACTIVE
        ];
    }

    override public function handleNotification(note:INotification):Void {
        switch ( note.getName() )
        {
            case AppConstants.ACCUMULATOR_CHANGED :
                if (!appProxy.getDetailPopupActive()) {
                    getView().showLines(note.getBody());
                }
            case AppConstants.CLOCK_ON :
                if (!appProxy.getDetailPopupActive()) {
                    getView().showLines(snapshotProxy.getAccumulator().getCodeArr());
                }
            case AppConstants.CLOCK_OFF :
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

    public function getView():Accumulator {
        return viewComponent;
    }

}