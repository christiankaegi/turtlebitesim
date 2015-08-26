/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package view.mediator;

import view.component.EditRom;
import model.proxy.ProgramProxy;
import events.AppEvent;
import org.puremvc.haxe.multicore.interfaces.INotification;
import org.puremvc.haxe.multicore.patterns.mediator.Mediator;

class EditRomMediator extends Mediator {
    public static inline var NAME:String = "EditRomMediator";

    private var programProxy:ProgramProxy;
    private var newProgramPointer:Int = 0;

    public function new(viewComponent:EditRom) {
        super(NAME, viewComponent);
    }

    override public function onRegister():Void {
        getView().addEventListener(AppEvent.DATA, dataEventHandler);
        programProxy = cast(facade.retrieveProxy(ProgramProxy.NAME), ProgramProxy);
        getView().addEventListener(AppEvent.VIEW_READY, viewReadyHandler);
        sendNotification(AppConstants.ADD_TO_NAVIG_VIEW, getView());
    }

    override public function onRemove():Void {
        getView().destroy();
    }

    override public function listNotificationInterests():Array<String> {
        return [];
    }

    override public function handleNotification(note:INotification):Void {
    }

    private function dataEventHandler(event:AppEvent):Void {
        switch(event.data.id) {
            case "okButton" :
                sendNotification(AppConstants.PROGRAM_CHANGED, newProgramPointer);
                facade.removeMediator(NAME);
            case "cancelButton" :
                facade.removeMediator(NAME);
            case "sample1Button" :
                populateRomRows(0);
            case "sample2Button" :
                populateRomRows(1);
            case "sample3Button" :
                populateRomRows(2);
        }
    }

    private function populateRomRows(id:Int):Void {
        newProgramPointer = id;
        getView().setActiveSample(id + 1);
        getView().populateRomRows(programProxy.getInstructionsByProgramPointer(id));
    }
    
    private function viewReadyHandler(event:AppEvent):Void {
        getView().setActiveSample(programProxy.getProgramPointer() + 1);
        getView().populateRomRows(programProxy.getCurrentInstructions());
        sendNotification(AppConstants.MEDIATOR_INITIALIZED, null, NAME);
    }

    public function getView():EditRom {
        return viewComponent;
    }

}