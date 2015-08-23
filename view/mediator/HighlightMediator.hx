package view.mediator;

import model.proxy.AppProxy;
import model.vo.InstructionVO;
import view.component.Highlight;
import events.AppEvent;
import org.puremvc.haxe.multicore.interfaces.INotification;
import org.puremvc.haxe.multicore.patterns.mediator.Mediator;

class HighlightMediator extends Mediator {
    public static inline var NAME:String = "HighlightMediator";
    private var appProxy:AppProxy;

    public function new(viewComponent:Highlight) {
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
            AppConstants.ENTER_INSTRUCTION_CHANGED,
            AppConstants.REGISTER_1_CHANGED,
            AppConstants.REGISTER_2_CHANGED,
            AppConstants.ACCUMULATOR_CHANGED,
            AppConstants.OPCODE_OUT,
            AppConstants.SHOW_HIGHLIGHT,
            AppConstants.HIDE_HIGHLIGHT,
            AppConstants.MODEL_RESET_COMPLETE
        ];
    }

    override public function handleNotification(note:INotification):Void {
        switch ( note.getName() )
        {
            case AppConstants.CLOCK_ON :
                getView().resetVisibilityAll();
                var instruction:InstructionVO = cast(note.getBody(), InstructionVO);
                switch (instruction.codeOpcode)
                {
                    case AppConstants.OPCODE_MOV :
                        getView().setVisibilityMOV(false);
                        getView().setVisibilityDecoder(false);
                        getView().setVisibilityMultiplexer(false);
                        checkForAddressCover(instruction.asmAddress);
                    case AppConstants.OPCODE_LDI :
                        getView().setVisibilityLDI(false);
                        getView().setVisibilityEnabler2(false);
                    case AppConstants.OPCODE_ALU :
                        getView().setVisibilityALU(false);
                    case AppConstants.OPCODE_SDA :
                        getView().setVisibilitySDA(false);
                        getView().setVisibilityMultiplexer(false);
                        getView().setVisibilityRam(false);
                    case AppConstants.OPCODE_LDA :
                        getView().setVisibilityLDA(false);
                        getView().setVisibilityEnabler1(false);
                        getView().setVisibilityRam(false);
                    case AppConstants.OPCODE_INP :
                        getView().setVisibilityINP(false);
                        getView().setVisibilityDecoder(false);
                        getView().setVisibilityMultiplexer(false);
                        checkForAddressCover(instruction.asmAddress);
                    case AppConstants.OPCODE_OUT :
                        getView().setVisibilityOUT(false);
                        getView().setVisibilityDecoder(false);
                        getView().setVisibilityMultiplexer(false);
                        getView().setVisibilityDisplay(false);
                        checkForAddressCover(instruction.codeAddress);
                    case AppConstants.OPCODE_JE :
                        getView().setVisibilityJE(false);
                    case AppConstants.OPCODE_JNE :
                        getView().setVisibilityJNE(false);
                    case AppConstants.OPCODE_JMP :
                        getView().setVisibilityJMP(false);
                }
            case AppConstants.ENTER_INSTRUCTION_CHANGED :
                getView().resetVisibilityAll();
            case AppConstants.REGISTER_1_CHANGED :
                getView().setVisibilityRegister1(false);
            case AppConstants.REGISTER_2_CHANGED :
                getView().setVisibilityRegister2(false);
            case AppConstants.ACCUMULATOR_CHANGED :
                getView().setVisibilityAccumulator(false);
            case AppConstants.MODEL_RESET_COMPLETE :
                getView().resetVisibilityAll(true);
            case AppConstants.SHOW_HIGHLIGHT :
                getView().visible = true;
            case AppConstants.HIDE_HIGHLIGHT :
                getView().visible = false;
        }
    }

    private function checkForAddressCover(address:String):Void {
        switch(address) {
            case AppConstants.ADDRESS_ACCUMULATOR :
                getView().setVisibilityAccumulator(false);
            case AppConstants.ADDRESS_REGISTER1 :
                getView().setVisibilityRegister1(false);
            case AppConstants.ADDRESS_REGISTER2 :
                getView().setVisibilityRegister2(false);
        }
    }

    private function viewReadyHandler(event:AppEvent):Void {
        if (appProxy.getShowHighlightOn() == false) {
            getView().visible = false;
        }
        sendNotification(AppConstants.MEDIATOR_INITIALIZED, null, NAME);
    }

    public function getView():Highlight {
        return viewComponent;
    }

}