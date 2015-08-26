/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package view.mediator;

import model.vo.InstructionVO;
import model.proxy.ProgramProxy;
import model.proxy.AppProxy;
import model.proxy.ClockProxy;
import events.AppEvent;
import view.component.MainMenu;
import org.puremvc.haxe.multicore.interfaces.INotification;
import org.puremvc.haxe.multicore.patterns.mediator.Mediator;

class MainMenuMediator extends Mediator {
    public static inline var NAME:String = "MainMenuMediator";

    private var appProxy:AppProxy;
    private var clockProxy:ClockProxy;
    private var programProxy:ProgramProxy;

    public function new(viewComponent:MainMenu) {
        super(NAME, viewComponent);
    }

    override public function onRegister():Void {
        getView().addEventListener(AppEvent.DATA, dataEventHandler);
        getView().addEventListener(AppEvent.VIEW_READY, viewReadyHandler);
        appProxy = cast(facade.retrieveProxy(AppProxy.NAME), AppProxy);
        clockProxy = cast(facade.retrieveProxy(ClockProxy.NAME), ClockProxy);
        programProxy = cast(facade.retrieveProxy(ProgramProxy.NAME), ProgramProxy);
        sendNotification(AppConstants.ADD_TO_NAVIG_VIEW, getView());
    }

    override public function listNotificationInterests():Array<String> {
        return [
            AppConstants.CLOCK_ON,
            AppConstants.PLAY,
            AppConstants.PAUSE,
            AppConstants.MANUAL_MODE_ON,
            AppConstants.MODEL_RESET_COMPLETE
        ];
    }

    override public function handleNotification(note:INotification):Void {
        switch ( note.getName() )
        {
            case AppConstants.CLOCK_ON :
                var instruction:InstructionVO = cast(programProxy.getInstruction(), InstructionVO);
                getView().setProgramPointer(Std.string(instruction.pointer));
            case AppConstants.MODEL_RESET_COMPLETE :
                getView().setProgramPointer("");
                getView().setPlay(false);
                getView().setHertzActive(false);
                getView().setHertz(clockProxy.getCurrentFrequency().label);
                getView().setShowFlowActive(false);
                getView().setShowHighlightActive(false);
                getView().setShowUnitsActive(false);
            case AppConstants.PAUSE :
                getView().setPlay(false);
            case AppConstants.PLAY :
                getView().setPlay(true);
            case AppConstants.MANUAL_MODE_ON :
                getView().setPlay(false);
        }
    }

    private function dataEventHandler(event:AppEvent):Void {
        var id:String = event.data.id;
        resetSubmenus(id);
        switch(id) {
            case "resetButton" :
                sendNotification(AppConstants.RESET);
            case "powerButton" :
                appProxy.setPowerOn(!appProxy.getPowerOn());
                if (appProxy.getPowerOn()) {
                    getView().setPowerOn(true);
                    sendNotification(AppConstants.POWER_ON);
                } else {
                    getView().setPowerOn(false);
                    sendNotification(AppConstants.POWER_OFF);
                    appProxy.setIsZoomed(false);
                    getView().setZoomActive(false);
                    sendNotification(AppConstants.ZOOM_OUT);
                    appProxy.setShowHightlightOn(false);
                    getView().setShowHighlightActive(false);
                    sendNotification(AppConstants.HIDE_HIGHLIGHT);
                    appProxy.setShowUnitsOn(false);
                    getView().setShowUnitsActive(false);
                    sendNotification(AppConstants.HIDE_OVERLAY_UNITS);
                    appProxy.setShowFlowOn(false);
                    getView().setShowFlowActive(false);
                    sendNotification(AppConstants.HIDE_OVERLAY_FLOW);
                }
            case "manualClockButton" :
                sendNotification(AppConstants.MANUAL_MODE_ON);
                if (appProxy.getEnterInstructionOutputValid()) {
                    sendNotification(AppConstants.CLOCK_SIGNAL, clockProxy.getClockOn());
                }
            case "playButton" :
                getView().setHertz(clockProxy.getCurrentFrequency().label);
                if (appProxy.getAutoClockOn()) {
                    sendNotification(AppConstants.PAUSE);
                } else {
                    sendNotification(AppConstants.PLAY);
                }
            case "hertzButton" :
                if (appProxy.getHertzSubmenuOn()) {
                    appProxy.setHertzSubmenuOn(false);
                    getView().setHertzActive(false);
                } else {
                    appProxy.setHertzSubmenuOn(true);
                    getView().setHertzActive(true, clockProxy.getCurrentFrequencyPointer());
                }
            case "componentsButton" :
                if (appProxy.getComponentsSubmenuOn()) {
                    appProxy.setComponentsSubmenuOn(false);
                    getView().setComponentsActive(false);
                } else {
                    appProxy.setComponentsSubmenuOn(true);
                    getView().setComponentsActive(true);
                }
            case "zoomButton" :
                if (appProxy.getIsZoomed()) {
                    appProxy.setIsZoomed(false);
                    getView().setZoomActive(false);
                    sendNotification(AppConstants.ZOOM_OUT);
                } else {
                    appProxy.setIsZoomed(true);
                    getView().setZoomActive(true);
                    sendNotification(AppConstants.ZOOM_IN);
                }
            case "showUnitsButton" :
                if (appProxy.getShowUnitsOn()) {
                    appProxy.setShowUnitsOn(false);
                    getView().setShowUnitsActive(false);
                    sendNotification(AppConstants.HIDE_OVERLAY_UNITS);
                } else {
                    appProxy.setShowUnitsOn(true);
                    getView().setShowUnitsActive(true);
                    sendNotification(AppConstants.SHOW_OVERLAY_UNITS);
                }
            case "showFlowButton" :
                if (appProxy.getShowFlowOn()) {
                    appProxy.setShowFlowOn(false);
                    getView().setShowFlowActive(false);
                    sendNotification(AppConstants.HIDE_OVERLAY_FLOW);
                } else {
                    appProxy.setShowFlowOn(true);
                    getView().setShowFlowActive(true);
                    sendNotification(AppConstants.SHOW_OVERLAY_FLOW);
                }
            case "showHighlightButton" :
                if (appProxy.getShowHighlightOn()) {
                    appProxy.setShowHightlightOn(false);
                    getView().setShowHighlightActive(false);
                    sendNotification(AppConstants.HIDE_HIGHLIGHT);
                } else {
                    appProxy.setShowHightlightOn(true);
                    getView().setShowHighlightActive(true);
                    sendNotification(AppConstants.SHOW_HIGHLIGHT);
                }
            case "editRomButton" :
                sendNotification(AppConstants.EDIT_ROM);
            case "architectureButton" :
                sendNotification(AppConstants.SHOW_ARCHITECTURE);
        }

        if (id.substr(0, 18) == "hertzSubmenuButton") {
            var pos:Int = Std.parseInt(id.substr(18));
            clockProxy.changeClockSpeed(pos);
            appProxy.setHertzSubmenuOn(false);
            getView().setHertzActive(false);
            getView().setHertz(clockProxy.getCurrentFrequency().label);
        } else if (id.substr(0, 23) == "componentsSubmenuButton") {
            var pos:Int = Std.parseInt(id.substr(23));
            // 8 = Accumulator
            if (pos == 8) {
                sendNotification(AppConstants.DETAIL_ACCUMULATOR);
            }
            appProxy.setComponentsSubmenuOn(false);
            getView().setComponentsActive(false);
        }

    }

    private function resetSubmenus(id:String):Void {
        getView().setHertzActive(false);
        getView().setComponentsActive(false);
        if (id != "componentsButton") {
            appProxy.setComponentsSubmenuOn(false);
        }
        if (id != "hertzButton") {
            appProxy.setHertzSubmenuOn(false);
        }
    }

    private function viewReadyHandler(event:AppEvent):Void {
        getView().setHertz(clockProxy.getCurrentFrequency().label);
        getView().createHertzSubmenu(clockProxy.getFrequencies());
        sendNotification(AppConstants.MEDIATOR_INITIALIZED, null, NAME);
    }

    public function getView():MainMenu {
        return viewComponent;
    }

}