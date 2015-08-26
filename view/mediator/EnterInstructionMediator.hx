/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package view.mediator;

import model.proxy.ClockProxy;
import model.proxy.ProgramProxy;
import utilities.NumberFormat;
import view.component.EnterInstruction;
import model.proxy.AppProxy;
import model.vo.InstructionVO;
import model.proxy.SnapshotProxy;
import events.AppEvent;
import org.puremvc.haxe.multicore.interfaces.INotification;
import org.puremvc.haxe.multicore.patterns.mediator.Mediator;


class EnterInstructionMediator extends Mediator {
    public static inline var NAME:String = "EnterInstructionMediator";
    private var appProxy:AppProxy;
    private var clockProxy:ClockProxy;
    private var programProxy:ProgramProxy;
    private var snapshotProxy:SnapshotProxy;

    public function new(viewComponent:EnterInstruction) {
        super(NAME, viewComponent);
    }

    override public function onRegister():Void {
        getView().addEventListener(AppEvent.VIEW_READY, viewReadyHandler);
        getView().addEventListener(AppEvent.DATA, dataEventHandler);
        getView().y = 5 * AppConstants.SCALE_FACTOR;
        appProxy = cast(facade.retrieveProxy(AppProxy.NAME), AppProxy);
        clockProxy = cast(facade.retrieveProxy(ClockProxy.NAME), ClockProxy);
        programProxy = cast(facade.retrieveProxy(ProgramProxy.NAME), ProgramProxy);
        snapshotProxy = cast(facade.retrieveProxy(SnapshotProxy.NAME), SnapshotProxy);
        sendNotification(AppConstants.ADD_TO_ZOOM_VIEW, getView());
    }

    override public function onRemove():Void {
        getView().destroy();
    }

    override public function listNotificationInterests():Array<String> {
        return [
            AppConstants.CLOCK_ON,
            AppConstants.PLAY,
            AppConstants.MODEL_RESET_COMPLETE,
            AppConstants.POWER_OFF
        ];
    }

    override public function handleNotification(note:INotification):Void {
        switch ( note.getName() )
        {
            case AppConstants.CLOCK_ON :
                getView().hideBarriere();
            case AppConstants.POWER_OFF :
                destroy();
            case AppConstants.PLAY :
                destroy();
            case AppConstants.MODEL_RESET_COMPLETE :
                destroy();
        }
    }

    private function dataEventHandler(event:AppEvent):Void {
        if (event.data.id == "closeButton") {
            destroy();
        } else {
            appProxy.setEnterInstructionOutputValid(false);
            sendNotification(AppConstants.ENTER_INSTRUCTION_CHANGED);
            var opc:String = "";
            var addr:String = "";
            if (event.data.id == "opcodeMenu") {
                opc = event.data.opcode;
                addr = event.data.address;
                getView().showLines(opc, addr);
            } else {
                if (event.data.on) {
                    getView().hideLine(event.data.id);
                } else {
                    getView().showLine(event.data.id);
                }
                opc = getView().getOpcode();
                addr = getView().getAddress();
            }
            var opcode:String = "?";
            var address:String = "?";
            switch (opc) {
                case AppConstants.OPCODE_NOP :
                    opcode = "NOP";
                    address = "";
                    if (addr != "0000") {
                        opcode = "?";
                        address = "?";
                    }
                case AppConstants.OPCODE_MOV :
                    opcode = "MOV";
                    switch (addr) {
                        case AppConstants.ADDRESS_REGISTER1 :
                            address = "R1";
                        case AppConstants.ADDRESS_REGISTER2 :
                            address = "R2";
                    }
                case AppConstants.OPCODE_LDI :
                    opcode = "LDI";
                    address = Std.string(NumberFormat.binaryToDecimal(addr).dec);
                case AppConstants.OPCODE_ALU :
                    opcode = "(ALU)";
                    switch(addr) {
                        case AppConstants.ADDRESS_ADD :
                            opcode = "ADD";
                            address = "<---";
                        case AppConstants.ADDRESS_SUB :
                            opcode = "SUB";
                            address = "<---";
                        case AppConstants.ADDRESS_INC :
                            opcode = "INC";
                            address = "<---";
                        case AppConstants.ADDRESS_DEC :
                            opcode = "DEC";
                            address = "<---";

                    }
                case AppConstants.OPCODE_SDA :
                    opcode = "SDA";
                    address = Std.string(NumberFormat.binaryToDecimal(addr).dec);
                case AppConstants.OPCODE_LDA :
                    opcode = "LDA";
                    address = Std.string(NumberFormat.binaryToDecimal(addr).dec);
                case AppConstants.OPCODE_INP :
                    opcode = "INP";
                    switch (addr) {
                        case AppConstants.ADDRESS_ACCUMULATOR :
                            address = "A";
                        case AppConstants.ADDRESS_REGISTER1 :
                            address = "R1";
                        case AppConstants.ADDRESS_REGISTER2 :
                            address = "R2";
                    }
                case AppConstants.OPCODE_OUT :
                    opcode = "OUT";
                    switch (addr) {
                        case "" :
                            addr = "0000";
                            address = "A";
                        case AppConstants.ADDRESS_ACCUMULATOR :
                            address = "A";
                        case AppConstants.ADDRESS_REGISTER1 :
                            address = "R1";
                        case AppConstants.ADDRESS_REGISTER2 :
                            address = "R2";
                    }
                case AppConstants.OPCODE_JE :
                    opcode = "JE";
                    address = Std.string(NumberFormat.binaryToDecimal(addr).dec);
                case AppConstants.OPCODE_JNE :
                    opcode = "JNE";
                    address = Std.string(NumberFormat.binaryToDecimal(addr).dec);
                case AppConstants.OPCODE_JMP :
                    opcode = "JMP";
                    address = Std.string(NumberFormat.binaryToDecimal(addr).dec);
            }
            getView().setTfOpcode(opcode);
            getView().setTfAddress(address);
            if (opcode != "?" && address != "?") {
                var vo:InstructionVO = new InstructionVO(0, opcode + " " + address);
                programProxy.setManualInstruction(vo);
                appProxy.setEnterInstructionOutputValid(true);
            }
            clockProxy.setClockOff();
            sendNotification(AppConstants.CLOCK_SIGNAL, clockProxy.getClockOn());
        }
    }

    private function destroy():Void {
        appProxy.setEnterInstructionActive(false);
        facade.removeMediator(NAME);
    }

    private function viewReadyHandler(event:AppEvent):Void {
        sendNotification(AppConstants.MEDIATOR_INITIALIZED, null, NAME);
    }

    public function getView():EnterInstruction {
        return viewComponent;
    }

}