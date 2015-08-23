package ;
import openfl.text.TextFormatAlign;
import openfl.text.TextFormat;
class AppConstants {

// Application + Startup
    public static var APP_NAME:String = "TurtlebiteSIM";
    public static var PREPARE_MODEL:String = "prepareModel";
    public static var PREPARE_VIEW:String = "prepareView";
    public static var PROXY_INITIALIZED:String = "proxyInitialized";
    public static var MEDIATOR_INITIALIZED:String = "mediatorInitialized";
    public static var STARTUP_COMPLETE:String = "startupComplete";
    public static var ADD_TO_ZOOM_VIEW:String = "addToZoomView";
    public static var ADD_TO_NAVIG_VIEW:String = "addToNavigView";
    public static var ADD_TO_DETAIL_POPUP_VIEW:String = "addToDetailPopupView";
    public static var CLOCK_SIGNAL:String = "clockSignal";
    public static var CLOCK_ON:String = "clockOn";
    public static var CLOCK_OFF:String = "clockOff";
    public static var AUTO_CLOCK_START:String = "autoClockStart";
    public static var CHANGE_CLOCK_SPEED:String = "changeClockSpeed";
    public static var CLOCK_SPEED_CHANGED:String = "clockSpeedChanged";
    public static var REGISTER_1_CHANGED:String = "register1changed";
    public static var REGISTER_2_CHANGED:String = "register2changed";
    public static var ACCUMULATOR_CHANGED:String = "accumulatorChanged";
    public static var MULTIPLEXER_OUT_CHANGED:String = "multiplexerOutChanged";
    public static var ALU_EQUAL_ON:String = "aluEqualOn";
    public static var ALU_EQUAL_OFF:String = "aluEqualOff";
    public static var ALU_OUT_ACTIVE:String = "aluOutActive";
    public static var INSTRUCTIONS_MAX:Int = 16;
    public static var ZOOM_IN:String = "zoomIn";
    public static var ZOOM_OUT:String = "zoomOut";
    public static var ASSET_FOLDER:String = "images";
    public static var BG_COLOR:Int = 0xA0A0A0;
    public static var RESET:String = "reset";
    public static var LOOP:String = "loop";
    public static var MODEL_RESET_COMPLETE:String = "modelReset";
    public static var POWER_ON:String = "powerOn";
    public static var POWER_OFF:String = "powerOff";
    public static var SHOW_OVERLAY_UNITS:String = "showOverlayUnits";
    public static var HIDE_OVERLAY_UNITS:String = "hideOverlayUnits";
    public static var SHOW_OVERLAY_FLOW:String = "showOverlayFlow";
    public static var HIDE_OVERLAY_FLOW:String = "hideOverlayFlow";
    public static var SHOW_HIGHLIGHT:String = "showHighlight";
    public static var HIDE_HIGHLIGHT:String = "hideHighlight";
    public static var EDIT_ROM:String = "editRom";
    public static var PLAY:String = "play";
    public static var PAUSE:String = "pause";
    public static var SHOW_ARCHITECTURE:String = "showArchitecture";
    public static var MANUAL_MODE_ON:String = "manualModeOn";
    public static var PROGRAM_CHANGED:String = "programChanged";
    public static var LOAD_ROM:String = "loadRom";
    public static var DETAIL_ACCUMULATOR:String = "detailAccumulator";
    public static var DETAIL_POPUP_ACTIVE:String = "detailPopupActive";
    public static var ENTER_INSTRUCTION:String = "enterInstruction";
    public static var ENTER_INSTRUCTION_CHANGED:String = "enterInstructionChanged";

    public static var OPCODE_NOP:String = "0000";
    public static var OPCODE_MOV:String = "0001";
    public static var OPCODE_LDI:String = "0010";
    public static var OPCODE_ALU:String = "0011";
    public static var OPCODE_SDA:String = "0100";
    public static var OPCODE_LDA:String = "0101";
    public static var OPCODE_INP:String = "0110";
    public static var OPCODE_OUT:String = "0111";
    public static var OPCODE_JE:String = "1000";
    public static var OPCODE_JNE:String = "1001";
    public static var OPCODE_JMP:String = "1010";
    public static var ADDRESS_ADD:String = "0000";
    public static var ADDRESS_SUB:String = "0001";
    public static var ADDRESS_INC:String = "0010";
    public static var ADDRESS_DEC:String = "0011";
    public static var ADDRESS_ACCUMULATOR:String = "0000";
    public static var ADDRESS_REGISTER1:String = "0100";
    public static var ADDRESS_REGISTER2:String = "1000";
    public static var INP_REGISTER1:String = "0111";
    public static var INP_REGISTER2:String = "1011";
    public static var OUT_REGISTER1:String = "0110";
    public static var OUT_REGISTER2:String = "1001";
    public static var MULTIPLEXER_ACCUMULATOR:String = "00";
    public static var MULTIPLEXER_REGISTER1:String = "10";
    public static var MULTIPLEXER_REGISTER2:String = "01";
    public static var MULTIPLEXER_KEYBOARD_INPUT:String = "11";

    public static var BROADCAST_NOP:String = "broadcastNOP";
    public static var BROADCAST_MOV:String = "broadcastMOV";
    public static var BROADCAST_LDI:String = "broadcastLDI";
    public static var BROADCAST_SDA:String = "broadcastSDA";
    public static var BROADCAST_LDA:String = "broadcastLDA";
    public static var BROADCAST_INP:String = "broadcastINP";
    public static var BROADCAST_OUT:String = "broadcastOUT";
    public static var BROADCAST_JUMP:String = "broadcastJUMP";

#if ios
    public static var SCALE_FACTOR:Float = 2;
#else
    public static var SCALE_FACTOR:Float = 1;
#end
}


