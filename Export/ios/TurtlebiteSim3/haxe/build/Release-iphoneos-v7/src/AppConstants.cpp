#include <hxcpp.h>

#ifndef INCLUDED_AppConstants
#include <AppConstants.h>
#endif

Void AppConstants_obj::__construct()
{
	return null();
}

//AppConstants_obj::~AppConstants_obj() { }

Dynamic AppConstants_obj::__CreateEmpty() { return  new AppConstants_obj; }
hx::ObjectPtr< AppConstants_obj > AppConstants_obj::__new()
{  hx::ObjectPtr< AppConstants_obj > result = new AppConstants_obj();
	result->__construct();
	return result;}

Dynamic AppConstants_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AppConstants_obj > result = new AppConstants_obj();
	result->__construct();
	return result;}

::String AppConstants_obj::APP_NAME;

::String AppConstants_obj::PREPARE_MODEL;

::String AppConstants_obj::PREPARE_VIEW;

::String AppConstants_obj::PROXY_INITIALIZED;

::String AppConstants_obj::MEDIATOR_INITIALIZED;

::String AppConstants_obj::STARTUP_COMPLETE;

::String AppConstants_obj::ADD_TO_ZOOM_VIEW;

::String AppConstants_obj::ADD_TO_NAVIG_VIEW;

::String AppConstants_obj::ADD_TO_DETAIL_POPUP_VIEW;

::String AppConstants_obj::CLOCK_SIGNAL;

::String AppConstants_obj::CLOCK_ON;

::String AppConstants_obj::CLOCK_OFF;

::String AppConstants_obj::AUTO_CLOCK_START;

::String AppConstants_obj::CHANGE_CLOCK_SPEED;

::String AppConstants_obj::CLOCK_SPEED_CHANGED;

::String AppConstants_obj::REGISTER_1_CHANGED;

::String AppConstants_obj::REGISTER_2_CHANGED;

::String AppConstants_obj::ACCUMULATOR_CHANGED;

::String AppConstants_obj::MULTIPLEXER_OUT_CHANGED;

::String AppConstants_obj::ALU_EQUAL_ON;

::String AppConstants_obj::ALU_EQUAL_OFF;

::String AppConstants_obj::ALU_OUT_ACTIVE;

int AppConstants_obj::INSTRUCTIONS_MAX;

::String AppConstants_obj::ZOOM_IN;

::String AppConstants_obj::ZOOM_OUT;

::String AppConstants_obj::ASSET_FOLDER;

int AppConstants_obj::BG_COLOR;

::String AppConstants_obj::RESET;

::String AppConstants_obj::LOOP;

::String AppConstants_obj::MODEL_RESET_COMPLETE;

::String AppConstants_obj::POWER_ON;

::String AppConstants_obj::POWER_OFF;

::String AppConstants_obj::SHOW_OVERLAY_UNITS;

::String AppConstants_obj::HIDE_OVERLAY_UNITS;

::String AppConstants_obj::SHOW_OVERLAY_FLOW;

::String AppConstants_obj::HIDE_OVERLAY_FLOW;

::String AppConstants_obj::SHOW_HIGHLIGHT;

::String AppConstants_obj::HIDE_HIGHLIGHT;

::String AppConstants_obj::EDIT_ROM;

::String AppConstants_obj::PLAY;

::String AppConstants_obj::PAUSE;

::String AppConstants_obj::SHOW_ARCHITECTURE;

::String AppConstants_obj::MANUAL_MODE_ON;

::String AppConstants_obj::PROGRAM_CHANGED;

::String AppConstants_obj::LOAD_ROM;

::String AppConstants_obj::DETAIL_ACCUMULATOR;

::String AppConstants_obj::DETAIL_POPUP_ACTIVE;

::String AppConstants_obj::ENTER_INSTRUCTION;

::String AppConstants_obj::ENTER_INSTRUCTION_CHANGED;

::String AppConstants_obj::OPCODE_NOP;

::String AppConstants_obj::OPCODE_MOV;

::String AppConstants_obj::OPCODE_LDI;

::String AppConstants_obj::OPCODE_ALU;

::String AppConstants_obj::OPCODE_SDA;

::String AppConstants_obj::OPCODE_LDA;

::String AppConstants_obj::OPCODE_INP;

::String AppConstants_obj::OPCODE_OUT;

::String AppConstants_obj::OPCODE_JE;

::String AppConstants_obj::OPCODE_JNE;

::String AppConstants_obj::OPCODE_JMP;

::String AppConstants_obj::ADDRESS_ADD;

::String AppConstants_obj::ADDRESS_SUB;

::String AppConstants_obj::ADDRESS_INC;

::String AppConstants_obj::ADDRESS_DEC;

::String AppConstants_obj::ADDRESS_ACCUMULATOR;

::String AppConstants_obj::ADDRESS_REGISTER1;

::String AppConstants_obj::ADDRESS_REGISTER2;

::String AppConstants_obj::INP_REGISTER1;

::String AppConstants_obj::INP_REGISTER2;

::String AppConstants_obj::OUT_REGISTER1;

::String AppConstants_obj::OUT_REGISTER2;

::String AppConstants_obj::MULTIPLEXER_ACCUMULATOR;

::String AppConstants_obj::MULTIPLEXER_REGISTER1;

::String AppConstants_obj::MULTIPLEXER_REGISTER2;

::String AppConstants_obj::MULTIPLEXER_KEYBOARD_INPUT;

::String AppConstants_obj::BROADCAST_NOP;

::String AppConstants_obj::BROADCAST_MOV;

::String AppConstants_obj::BROADCAST_LDI;

::String AppConstants_obj::BROADCAST_SDA;

::String AppConstants_obj::BROADCAST_LDA;

::String AppConstants_obj::BROADCAST_INP;

::String AppConstants_obj::BROADCAST_OUT;

::String AppConstants_obj::BROADCAST_JUMP;

Float AppConstants_obj::SCALE_FACTOR;


AppConstants_obj::AppConstants_obj()
{
}

Dynamic AppConstants_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"LOOP") ) { return LOOP; }
		if (HX_FIELD_EQ(inName,"PLAY") ) { return PLAY; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"RESET") ) { return RESET; }
		if (HX_FIELD_EQ(inName,"PAUSE") ) { return PAUSE; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ZOOM_IN") ) { return ZOOM_IN; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"APP_NAME") ) { return APP_NAME; }
		if (HX_FIELD_EQ(inName,"CLOCK_ON") ) { return CLOCK_ON; }
		if (HX_FIELD_EQ(inName,"ZOOM_OUT") ) { return ZOOM_OUT; }
		if (HX_FIELD_EQ(inName,"BG_COLOR") ) { return BG_COLOR; }
		if (HX_FIELD_EQ(inName,"POWER_ON") ) { return POWER_ON; }
		if (HX_FIELD_EQ(inName,"EDIT_ROM") ) { return EDIT_ROM; }
		if (HX_FIELD_EQ(inName,"LOAD_ROM") ) { return LOAD_ROM; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"CLOCK_OFF") ) { return CLOCK_OFF; }
		if (HX_FIELD_EQ(inName,"POWER_OFF") ) { return POWER_OFF; }
		if (HX_FIELD_EQ(inName,"OPCODE_JE") ) { return OPCODE_JE; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"OPCODE_NOP") ) { return OPCODE_NOP; }
		if (HX_FIELD_EQ(inName,"OPCODE_MOV") ) { return OPCODE_MOV; }
		if (HX_FIELD_EQ(inName,"OPCODE_LDI") ) { return OPCODE_LDI; }
		if (HX_FIELD_EQ(inName,"OPCODE_ALU") ) { return OPCODE_ALU; }
		if (HX_FIELD_EQ(inName,"OPCODE_SDA") ) { return OPCODE_SDA; }
		if (HX_FIELD_EQ(inName,"OPCODE_LDA") ) { return OPCODE_LDA; }
		if (HX_FIELD_EQ(inName,"OPCODE_INP") ) { return OPCODE_INP; }
		if (HX_FIELD_EQ(inName,"OPCODE_OUT") ) { return OPCODE_OUT; }
		if (HX_FIELD_EQ(inName,"OPCODE_JNE") ) { return OPCODE_JNE; }
		if (HX_FIELD_EQ(inName,"OPCODE_JMP") ) { return OPCODE_JMP; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ADDRESS_ADD") ) { return ADDRESS_ADD; }
		if (HX_FIELD_EQ(inName,"ADDRESS_SUB") ) { return ADDRESS_SUB; }
		if (HX_FIELD_EQ(inName,"ADDRESS_INC") ) { return ADDRESS_INC; }
		if (HX_FIELD_EQ(inName,"ADDRESS_DEC") ) { return ADDRESS_DEC; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"PREPARE_VIEW") ) { return PREPARE_VIEW; }
		if (HX_FIELD_EQ(inName,"CLOCK_SIGNAL") ) { return CLOCK_SIGNAL; }
		if (HX_FIELD_EQ(inName,"ALU_EQUAL_ON") ) { return ALU_EQUAL_ON; }
		if (HX_FIELD_EQ(inName,"ASSET_FOLDER") ) { return ASSET_FOLDER; }
		if (HX_FIELD_EQ(inName,"SCALE_FACTOR") ) { return SCALE_FACTOR; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"PREPARE_MODEL") ) { return PREPARE_MODEL; }
		if (HX_FIELD_EQ(inName,"ALU_EQUAL_OFF") ) { return ALU_EQUAL_OFF; }
		if (HX_FIELD_EQ(inName,"INP_REGISTER1") ) { return INP_REGISTER1; }
		if (HX_FIELD_EQ(inName,"INP_REGISTER2") ) { return INP_REGISTER2; }
		if (HX_FIELD_EQ(inName,"OUT_REGISTER1") ) { return OUT_REGISTER1; }
		if (HX_FIELD_EQ(inName,"OUT_REGISTER2") ) { return OUT_REGISTER2; }
		if (HX_FIELD_EQ(inName,"BROADCAST_NOP") ) { return BROADCAST_NOP; }
		if (HX_FIELD_EQ(inName,"BROADCAST_MOV") ) { return BROADCAST_MOV; }
		if (HX_FIELD_EQ(inName,"BROADCAST_LDI") ) { return BROADCAST_LDI; }
		if (HX_FIELD_EQ(inName,"BROADCAST_SDA") ) { return BROADCAST_SDA; }
		if (HX_FIELD_EQ(inName,"BROADCAST_LDA") ) { return BROADCAST_LDA; }
		if (HX_FIELD_EQ(inName,"BROADCAST_INP") ) { return BROADCAST_INP; }
		if (HX_FIELD_EQ(inName,"BROADCAST_OUT") ) { return BROADCAST_OUT; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ALU_OUT_ACTIVE") ) { return ALU_OUT_ACTIVE; }
		if (HX_FIELD_EQ(inName,"SHOW_HIGHLIGHT") ) { return SHOW_HIGHLIGHT; }
		if (HX_FIELD_EQ(inName,"HIDE_HIGHLIGHT") ) { return HIDE_HIGHLIGHT; }
		if (HX_FIELD_EQ(inName,"MANUAL_MODE_ON") ) { return MANUAL_MODE_ON; }
		if (HX_FIELD_EQ(inName,"BROADCAST_JUMP") ) { return BROADCAST_JUMP; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"PROGRAM_CHANGED") ) { return PROGRAM_CHANGED; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"STARTUP_COMPLETE") ) { return STARTUP_COMPLETE; }
		if (HX_FIELD_EQ(inName,"ADD_TO_ZOOM_VIEW") ) { return ADD_TO_ZOOM_VIEW; }
		if (HX_FIELD_EQ(inName,"AUTO_CLOCK_START") ) { return AUTO_CLOCK_START; }
		if (HX_FIELD_EQ(inName,"INSTRUCTIONS_MAX") ) { return INSTRUCTIONS_MAX; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"PROXY_INITIALIZED") ) { return PROXY_INITIALIZED; }
		if (HX_FIELD_EQ(inName,"ADD_TO_NAVIG_VIEW") ) { return ADD_TO_NAVIG_VIEW; }
		if (HX_FIELD_EQ(inName,"SHOW_OVERLAY_FLOW") ) { return SHOW_OVERLAY_FLOW; }
		if (HX_FIELD_EQ(inName,"HIDE_OVERLAY_FLOW") ) { return HIDE_OVERLAY_FLOW; }
		if (HX_FIELD_EQ(inName,"SHOW_ARCHITECTURE") ) { return SHOW_ARCHITECTURE; }
		if (HX_FIELD_EQ(inName,"ENTER_INSTRUCTION") ) { return ENTER_INSTRUCTION; }
		if (HX_FIELD_EQ(inName,"ADDRESS_REGISTER1") ) { return ADDRESS_REGISTER1; }
		if (HX_FIELD_EQ(inName,"ADDRESS_REGISTER2") ) { return ADDRESS_REGISTER2; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"CHANGE_CLOCK_SPEED") ) { return CHANGE_CLOCK_SPEED; }
		if (HX_FIELD_EQ(inName,"REGISTER_1_CHANGED") ) { return REGISTER_1_CHANGED; }
		if (HX_FIELD_EQ(inName,"REGISTER_2_CHANGED") ) { return REGISTER_2_CHANGED; }
		if (HX_FIELD_EQ(inName,"SHOW_OVERLAY_UNITS") ) { return SHOW_OVERLAY_UNITS; }
		if (HX_FIELD_EQ(inName,"HIDE_OVERLAY_UNITS") ) { return HIDE_OVERLAY_UNITS; }
		if (HX_FIELD_EQ(inName,"DETAIL_ACCUMULATOR") ) { return DETAIL_ACCUMULATOR; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"CLOCK_SPEED_CHANGED") ) { return CLOCK_SPEED_CHANGED; }
		if (HX_FIELD_EQ(inName,"ACCUMULATOR_CHANGED") ) { return ACCUMULATOR_CHANGED; }
		if (HX_FIELD_EQ(inName,"DETAIL_POPUP_ACTIVE") ) { return DETAIL_POPUP_ACTIVE; }
		if (HX_FIELD_EQ(inName,"ADDRESS_ACCUMULATOR") ) { return ADDRESS_ACCUMULATOR; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"MEDIATOR_INITIALIZED") ) { return MEDIATOR_INITIALIZED; }
		if (HX_FIELD_EQ(inName,"MODEL_RESET_COMPLETE") ) { return MODEL_RESET_COMPLETE; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"MULTIPLEXER_REGISTER1") ) { return MULTIPLEXER_REGISTER1; }
		if (HX_FIELD_EQ(inName,"MULTIPLEXER_REGISTER2") ) { return MULTIPLEXER_REGISTER2; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"MULTIPLEXER_OUT_CHANGED") ) { return MULTIPLEXER_OUT_CHANGED; }
		if (HX_FIELD_EQ(inName,"MULTIPLEXER_ACCUMULATOR") ) { return MULTIPLEXER_ACCUMULATOR; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"ADD_TO_DETAIL_POPUP_VIEW") ) { return ADD_TO_DETAIL_POPUP_VIEW; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"ENTER_INSTRUCTION_CHANGED") ) { return ENTER_INSTRUCTION_CHANGED; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"MULTIPLEXER_KEYBOARD_INPUT") ) { return MULTIPLEXER_KEYBOARD_INPUT; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AppConstants_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"LOOP") ) { LOOP=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PLAY") ) { PLAY=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"RESET") ) { RESET=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PAUSE") ) { PAUSE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ZOOM_IN") ) { ZOOM_IN=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"APP_NAME") ) { APP_NAME=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CLOCK_ON") ) { CLOCK_ON=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ZOOM_OUT") ) { ZOOM_OUT=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BG_COLOR") ) { BG_COLOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"POWER_ON") ) { POWER_ON=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"EDIT_ROM") ) { EDIT_ROM=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LOAD_ROM") ) { LOAD_ROM=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"CLOCK_OFF") ) { CLOCK_OFF=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"POWER_OFF") ) { POWER_OFF=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OPCODE_JE") ) { OPCODE_JE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"OPCODE_NOP") ) { OPCODE_NOP=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OPCODE_MOV") ) { OPCODE_MOV=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OPCODE_LDI") ) { OPCODE_LDI=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OPCODE_ALU") ) { OPCODE_ALU=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OPCODE_SDA") ) { OPCODE_SDA=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OPCODE_LDA") ) { OPCODE_LDA=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OPCODE_INP") ) { OPCODE_INP=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OPCODE_OUT") ) { OPCODE_OUT=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OPCODE_JNE") ) { OPCODE_JNE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OPCODE_JMP") ) { OPCODE_JMP=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ADDRESS_ADD") ) { ADDRESS_ADD=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ADDRESS_SUB") ) { ADDRESS_SUB=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ADDRESS_INC") ) { ADDRESS_INC=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ADDRESS_DEC") ) { ADDRESS_DEC=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"PREPARE_VIEW") ) { PREPARE_VIEW=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CLOCK_SIGNAL") ) { CLOCK_SIGNAL=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALU_EQUAL_ON") ) { ALU_EQUAL_ON=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ASSET_FOLDER") ) { ASSET_FOLDER=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SCALE_FACTOR") ) { SCALE_FACTOR=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"PREPARE_MODEL") ) { PREPARE_MODEL=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALU_EQUAL_OFF") ) { ALU_EQUAL_OFF=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INP_REGISTER1") ) { INP_REGISTER1=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INP_REGISTER2") ) { INP_REGISTER2=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OUT_REGISTER1") ) { OUT_REGISTER1=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OUT_REGISTER2") ) { OUT_REGISTER2=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BROADCAST_NOP") ) { BROADCAST_NOP=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BROADCAST_MOV") ) { BROADCAST_MOV=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BROADCAST_LDI") ) { BROADCAST_LDI=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BROADCAST_SDA") ) { BROADCAST_SDA=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BROADCAST_LDA") ) { BROADCAST_LDA=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BROADCAST_INP") ) { BROADCAST_INP=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BROADCAST_OUT") ) { BROADCAST_OUT=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ALU_OUT_ACTIVE") ) { ALU_OUT_ACTIVE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SHOW_HIGHLIGHT") ) { SHOW_HIGHLIGHT=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"HIDE_HIGHLIGHT") ) { HIDE_HIGHLIGHT=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MANUAL_MODE_ON") ) { MANUAL_MODE_ON=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BROADCAST_JUMP") ) { BROADCAST_JUMP=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"PROGRAM_CHANGED") ) { PROGRAM_CHANGED=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"STARTUP_COMPLETE") ) { STARTUP_COMPLETE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ADD_TO_ZOOM_VIEW") ) { ADD_TO_ZOOM_VIEW=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"AUTO_CLOCK_START") ) { AUTO_CLOCK_START=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INSTRUCTIONS_MAX") ) { INSTRUCTIONS_MAX=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"PROXY_INITIALIZED") ) { PROXY_INITIALIZED=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ADD_TO_NAVIG_VIEW") ) { ADD_TO_NAVIG_VIEW=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SHOW_OVERLAY_FLOW") ) { SHOW_OVERLAY_FLOW=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"HIDE_OVERLAY_FLOW") ) { HIDE_OVERLAY_FLOW=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SHOW_ARCHITECTURE") ) { SHOW_ARCHITECTURE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ENTER_INSTRUCTION") ) { ENTER_INSTRUCTION=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ADDRESS_REGISTER1") ) { ADDRESS_REGISTER1=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ADDRESS_REGISTER2") ) { ADDRESS_REGISTER2=inValue.Cast< ::String >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"CHANGE_CLOCK_SPEED") ) { CHANGE_CLOCK_SPEED=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"REGISTER_1_CHANGED") ) { REGISTER_1_CHANGED=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"REGISTER_2_CHANGED") ) { REGISTER_2_CHANGED=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SHOW_OVERLAY_UNITS") ) { SHOW_OVERLAY_UNITS=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"HIDE_OVERLAY_UNITS") ) { HIDE_OVERLAY_UNITS=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DETAIL_ACCUMULATOR") ) { DETAIL_ACCUMULATOR=inValue.Cast< ::String >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"CLOCK_SPEED_CHANGED") ) { CLOCK_SPEED_CHANGED=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ACCUMULATOR_CHANGED") ) { ACCUMULATOR_CHANGED=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DETAIL_POPUP_ACTIVE") ) { DETAIL_POPUP_ACTIVE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ADDRESS_ACCUMULATOR") ) { ADDRESS_ACCUMULATOR=inValue.Cast< ::String >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"MEDIATOR_INITIALIZED") ) { MEDIATOR_INITIALIZED=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MODEL_RESET_COMPLETE") ) { MODEL_RESET_COMPLETE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"MULTIPLEXER_REGISTER1") ) { MULTIPLEXER_REGISTER1=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MULTIPLEXER_REGISTER2") ) { MULTIPLEXER_REGISTER2=inValue.Cast< ::String >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"MULTIPLEXER_OUT_CHANGED") ) { MULTIPLEXER_OUT_CHANGED=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MULTIPLEXER_ACCUMULATOR") ) { MULTIPLEXER_ACCUMULATOR=inValue.Cast< ::String >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"ADD_TO_DETAIL_POPUP_VIEW") ) { ADD_TO_DETAIL_POPUP_VIEW=inValue.Cast< ::String >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"ENTER_INSTRUCTION_CHANGED") ) { ENTER_INSTRUCTION_CHANGED=inValue.Cast< ::String >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"MULTIPLEXER_KEYBOARD_INPUT") ) { MULTIPLEXER_KEYBOARD_INPUT=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AppConstants_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("APP_NAME"),
	HX_CSTRING("PREPARE_MODEL"),
	HX_CSTRING("PREPARE_VIEW"),
	HX_CSTRING("PROXY_INITIALIZED"),
	HX_CSTRING("MEDIATOR_INITIALIZED"),
	HX_CSTRING("STARTUP_COMPLETE"),
	HX_CSTRING("ADD_TO_ZOOM_VIEW"),
	HX_CSTRING("ADD_TO_NAVIG_VIEW"),
	HX_CSTRING("ADD_TO_DETAIL_POPUP_VIEW"),
	HX_CSTRING("CLOCK_SIGNAL"),
	HX_CSTRING("CLOCK_ON"),
	HX_CSTRING("CLOCK_OFF"),
	HX_CSTRING("AUTO_CLOCK_START"),
	HX_CSTRING("CHANGE_CLOCK_SPEED"),
	HX_CSTRING("CLOCK_SPEED_CHANGED"),
	HX_CSTRING("REGISTER_1_CHANGED"),
	HX_CSTRING("REGISTER_2_CHANGED"),
	HX_CSTRING("ACCUMULATOR_CHANGED"),
	HX_CSTRING("MULTIPLEXER_OUT_CHANGED"),
	HX_CSTRING("ALU_EQUAL_ON"),
	HX_CSTRING("ALU_EQUAL_OFF"),
	HX_CSTRING("ALU_OUT_ACTIVE"),
	HX_CSTRING("INSTRUCTIONS_MAX"),
	HX_CSTRING("ZOOM_IN"),
	HX_CSTRING("ZOOM_OUT"),
	HX_CSTRING("ASSET_FOLDER"),
	HX_CSTRING("BG_COLOR"),
	HX_CSTRING("RESET"),
	HX_CSTRING("LOOP"),
	HX_CSTRING("MODEL_RESET_COMPLETE"),
	HX_CSTRING("POWER_ON"),
	HX_CSTRING("POWER_OFF"),
	HX_CSTRING("SHOW_OVERLAY_UNITS"),
	HX_CSTRING("HIDE_OVERLAY_UNITS"),
	HX_CSTRING("SHOW_OVERLAY_FLOW"),
	HX_CSTRING("HIDE_OVERLAY_FLOW"),
	HX_CSTRING("SHOW_HIGHLIGHT"),
	HX_CSTRING("HIDE_HIGHLIGHT"),
	HX_CSTRING("EDIT_ROM"),
	HX_CSTRING("PLAY"),
	HX_CSTRING("PAUSE"),
	HX_CSTRING("SHOW_ARCHITECTURE"),
	HX_CSTRING("MANUAL_MODE_ON"),
	HX_CSTRING("PROGRAM_CHANGED"),
	HX_CSTRING("LOAD_ROM"),
	HX_CSTRING("DETAIL_ACCUMULATOR"),
	HX_CSTRING("DETAIL_POPUP_ACTIVE"),
	HX_CSTRING("ENTER_INSTRUCTION"),
	HX_CSTRING("ENTER_INSTRUCTION_CHANGED"),
	HX_CSTRING("OPCODE_NOP"),
	HX_CSTRING("OPCODE_MOV"),
	HX_CSTRING("OPCODE_LDI"),
	HX_CSTRING("OPCODE_ALU"),
	HX_CSTRING("OPCODE_SDA"),
	HX_CSTRING("OPCODE_LDA"),
	HX_CSTRING("OPCODE_INP"),
	HX_CSTRING("OPCODE_OUT"),
	HX_CSTRING("OPCODE_JE"),
	HX_CSTRING("OPCODE_JNE"),
	HX_CSTRING("OPCODE_JMP"),
	HX_CSTRING("ADDRESS_ADD"),
	HX_CSTRING("ADDRESS_SUB"),
	HX_CSTRING("ADDRESS_INC"),
	HX_CSTRING("ADDRESS_DEC"),
	HX_CSTRING("ADDRESS_ACCUMULATOR"),
	HX_CSTRING("ADDRESS_REGISTER1"),
	HX_CSTRING("ADDRESS_REGISTER2"),
	HX_CSTRING("INP_REGISTER1"),
	HX_CSTRING("INP_REGISTER2"),
	HX_CSTRING("OUT_REGISTER1"),
	HX_CSTRING("OUT_REGISTER2"),
	HX_CSTRING("MULTIPLEXER_ACCUMULATOR"),
	HX_CSTRING("MULTIPLEXER_REGISTER1"),
	HX_CSTRING("MULTIPLEXER_REGISTER2"),
	HX_CSTRING("MULTIPLEXER_KEYBOARD_INPUT"),
	HX_CSTRING("BROADCAST_NOP"),
	HX_CSTRING("BROADCAST_MOV"),
	HX_CSTRING("BROADCAST_LDI"),
	HX_CSTRING("BROADCAST_SDA"),
	HX_CSTRING("BROADCAST_LDA"),
	HX_CSTRING("BROADCAST_INP"),
	HX_CSTRING("BROADCAST_OUT"),
	HX_CSTRING("BROADCAST_JUMP"),
	HX_CSTRING("SCALE_FACTOR"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AppConstants_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AppConstants_obj::APP_NAME,"APP_NAME");
	HX_MARK_MEMBER_NAME(AppConstants_obj::PREPARE_MODEL,"PREPARE_MODEL");
	HX_MARK_MEMBER_NAME(AppConstants_obj::PREPARE_VIEW,"PREPARE_VIEW");
	HX_MARK_MEMBER_NAME(AppConstants_obj::PROXY_INITIALIZED,"PROXY_INITIALIZED");
	HX_MARK_MEMBER_NAME(AppConstants_obj::MEDIATOR_INITIALIZED,"MEDIATOR_INITIALIZED");
	HX_MARK_MEMBER_NAME(AppConstants_obj::STARTUP_COMPLETE,"STARTUP_COMPLETE");
	HX_MARK_MEMBER_NAME(AppConstants_obj::ADD_TO_ZOOM_VIEW,"ADD_TO_ZOOM_VIEW");
	HX_MARK_MEMBER_NAME(AppConstants_obj::ADD_TO_NAVIG_VIEW,"ADD_TO_NAVIG_VIEW");
	HX_MARK_MEMBER_NAME(AppConstants_obj::ADD_TO_DETAIL_POPUP_VIEW,"ADD_TO_DETAIL_POPUP_VIEW");
	HX_MARK_MEMBER_NAME(AppConstants_obj::CLOCK_SIGNAL,"CLOCK_SIGNAL");
	HX_MARK_MEMBER_NAME(AppConstants_obj::CLOCK_ON,"CLOCK_ON");
	HX_MARK_MEMBER_NAME(AppConstants_obj::CLOCK_OFF,"CLOCK_OFF");
	HX_MARK_MEMBER_NAME(AppConstants_obj::AUTO_CLOCK_START,"AUTO_CLOCK_START");
	HX_MARK_MEMBER_NAME(AppConstants_obj::CHANGE_CLOCK_SPEED,"CHANGE_CLOCK_SPEED");
	HX_MARK_MEMBER_NAME(AppConstants_obj::CLOCK_SPEED_CHANGED,"CLOCK_SPEED_CHANGED");
	HX_MARK_MEMBER_NAME(AppConstants_obj::REGISTER_1_CHANGED,"REGISTER_1_CHANGED");
	HX_MARK_MEMBER_NAME(AppConstants_obj::REGISTER_2_CHANGED,"REGISTER_2_CHANGED");
	HX_MARK_MEMBER_NAME(AppConstants_obj::ACCUMULATOR_CHANGED,"ACCUMULATOR_CHANGED");
	HX_MARK_MEMBER_NAME(AppConstants_obj::MULTIPLEXER_OUT_CHANGED,"MULTIPLEXER_OUT_CHANGED");
	HX_MARK_MEMBER_NAME(AppConstants_obj::ALU_EQUAL_ON,"ALU_EQUAL_ON");
	HX_MARK_MEMBER_NAME(AppConstants_obj::ALU_EQUAL_OFF,"ALU_EQUAL_OFF");
	HX_MARK_MEMBER_NAME(AppConstants_obj::ALU_OUT_ACTIVE,"ALU_OUT_ACTIVE");
	HX_MARK_MEMBER_NAME(AppConstants_obj::INSTRUCTIONS_MAX,"INSTRUCTIONS_MAX");
	HX_MARK_MEMBER_NAME(AppConstants_obj::ZOOM_IN,"ZOOM_IN");
	HX_MARK_MEMBER_NAME(AppConstants_obj::ZOOM_OUT,"ZOOM_OUT");
	HX_MARK_MEMBER_NAME(AppConstants_obj::ASSET_FOLDER,"ASSET_FOLDER");
	HX_MARK_MEMBER_NAME(AppConstants_obj::BG_COLOR,"BG_COLOR");
	HX_MARK_MEMBER_NAME(AppConstants_obj::RESET,"RESET");
	HX_MARK_MEMBER_NAME(AppConstants_obj::LOOP,"LOOP");
	HX_MARK_MEMBER_NAME(AppConstants_obj::MODEL_RESET_COMPLETE,"MODEL_RESET_COMPLETE");
	HX_MARK_MEMBER_NAME(AppConstants_obj::POWER_ON,"POWER_ON");
	HX_MARK_MEMBER_NAME(AppConstants_obj::POWER_OFF,"POWER_OFF");
	HX_MARK_MEMBER_NAME(AppConstants_obj::SHOW_OVERLAY_UNITS,"SHOW_OVERLAY_UNITS");
	HX_MARK_MEMBER_NAME(AppConstants_obj::HIDE_OVERLAY_UNITS,"HIDE_OVERLAY_UNITS");
	HX_MARK_MEMBER_NAME(AppConstants_obj::SHOW_OVERLAY_FLOW,"SHOW_OVERLAY_FLOW");
	HX_MARK_MEMBER_NAME(AppConstants_obj::HIDE_OVERLAY_FLOW,"HIDE_OVERLAY_FLOW");
	HX_MARK_MEMBER_NAME(AppConstants_obj::SHOW_HIGHLIGHT,"SHOW_HIGHLIGHT");
	HX_MARK_MEMBER_NAME(AppConstants_obj::HIDE_HIGHLIGHT,"HIDE_HIGHLIGHT");
	HX_MARK_MEMBER_NAME(AppConstants_obj::EDIT_ROM,"EDIT_ROM");
	HX_MARK_MEMBER_NAME(AppConstants_obj::PLAY,"PLAY");
	HX_MARK_MEMBER_NAME(AppConstants_obj::PAUSE,"PAUSE");
	HX_MARK_MEMBER_NAME(AppConstants_obj::SHOW_ARCHITECTURE,"SHOW_ARCHITECTURE");
	HX_MARK_MEMBER_NAME(AppConstants_obj::MANUAL_MODE_ON,"MANUAL_MODE_ON");
	HX_MARK_MEMBER_NAME(AppConstants_obj::PROGRAM_CHANGED,"PROGRAM_CHANGED");
	HX_MARK_MEMBER_NAME(AppConstants_obj::LOAD_ROM,"LOAD_ROM");
	HX_MARK_MEMBER_NAME(AppConstants_obj::DETAIL_ACCUMULATOR,"DETAIL_ACCUMULATOR");
	HX_MARK_MEMBER_NAME(AppConstants_obj::DETAIL_POPUP_ACTIVE,"DETAIL_POPUP_ACTIVE");
	HX_MARK_MEMBER_NAME(AppConstants_obj::ENTER_INSTRUCTION,"ENTER_INSTRUCTION");
	HX_MARK_MEMBER_NAME(AppConstants_obj::ENTER_INSTRUCTION_CHANGED,"ENTER_INSTRUCTION_CHANGED");
	HX_MARK_MEMBER_NAME(AppConstants_obj::OPCODE_NOP,"OPCODE_NOP");
	HX_MARK_MEMBER_NAME(AppConstants_obj::OPCODE_MOV,"OPCODE_MOV");
	HX_MARK_MEMBER_NAME(AppConstants_obj::OPCODE_LDI,"OPCODE_LDI");
	HX_MARK_MEMBER_NAME(AppConstants_obj::OPCODE_ALU,"OPCODE_ALU");
	HX_MARK_MEMBER_NAME(AppConstants_obj::OPCODE_SDA,"OPCODE_SDA");
	HX_MARK_MEMBER_NAME(AppConstants_obj::OPCODE_LDA,"OPCODE_LDA");
	HX_MARK_MEMBER_NAME(AppConstants_obj::OPCODE_INP,"OPCODE_INP");
	HX_MARK_MEMBER_NAME(AppConstants_obj::OPCODE_OUT,"OPCODE_OUT");
	HX_MARK_MEMBER_NAME(AppConstants_obj::OPCODE_JE,"OPCODE_JE");
	HX_MARK_MEMBER_NAME(AppConstants_obj::OPCODE_JNE,"OPCODE_JNE");
	HX_MARK_MEMBER_NAME(AppConstants_obj::OPCODE_JMP,"OPCODE_JMP");
	HX_MARK_MEMBER_NAME(AppConstants_obj::ADDRESS_ADD,"ADDRESS_ADD");
	HX_MARK_MEMBER_NAME(AppConstants_obj::ADDRESS_SUB,"ADDRESS_SUB");
	HX_MARK_MEMBER_NAME(AppConstants_obj::ADDRESS_INC,"ADDRESS_INC");
	HX_MARK_MEMBER_NAME(AppConstants_obj::ADDRESS_DEC,"ADDRESS_DEC");
	HX_MARK_MEMBER_NAME(AppConstants_obj::ADDRESS_ACCUMULATOR,"ADDRESS_ACCUMULATOR");
	HX_MARK_MEMBER_NAME(AppConstants_obj::ADDRESS_REGISTER1,"ADDRESS_REGISTER1");
	HX_MARK_MEMBER_NAME(AppConstants_obj::ADDRESS_REGISTER2,"ADDRESS_REGISTER2");
	HX_MARK_MEMBER_NAME(AppConstants_obj::INP_REGISTER1,"INP_REGISTER1");
	HX_MARK_MEMBER_NAME(AppConstants_obj::INP_REGISTER2,"INP_REGISTER2");
	HX_MARK_MEMBER_NAME(AppConstants_obj::OUT_REGISTER1,"OUT_REGISTER1");
	HX_MARK_MEMBER_NAME(AppConstants_obj::OUT_REGISTER2,"OUT_REGISTER2");
	HX_MARK_MEMBER_NAME(AppConstants_obj::MULTIPLEXER_ACCUMULATOR,"MULTIPLEXER_ACCUMULATOR");
	HX_MARK_MEMBER_NAME(AppConstants_obj::MULTIPLEXER_REGISTER1,"MULTIPLEXER_REGISTER1");
	HX_MARK_MEMBER_NAME(AppConstants_obj::MULTIPLEXER_REGISTER2,"MULTIPLEXER_REGISTER2");
	HX_MARK_MEMBER_NAME(AppConstants_obj::MULTIPLEXER_KEYBOARD_INPUT,"MULTIPLEXER_KEYBOARD_INPUT");
	HX_MARK_MEMBER_NAME(AppConstants_obj::BROADCAST_NOP,"BROADCAST_NOP");
	HX_MARK_MEMBER_NAME(AppConstants_obj::BROADCAST_MOV,"BROADCAST_MOV");
	HX_MARK_MEMBER_NAME(AppConstants_obj::BROADCAST_LDI,"BROADCAST_LDI");
	HX_MARK_MEMBER_NAME(AppConstants_obj::BROADCAST_SDA,"BROADCAST_SDA");
	HX_MARK_MEMBER_NAME(AppConstants_obj::BROADCAST_LDA,"BROADCAST_LDA");
	HX_MARK_MEMBER_NAME(AppConstants_obj::BROADCAST_INP,"BROADCAST_INP");
	HX_MARK_MEMBER_NAME(AppConstants_obj::BROADCAST_OUT,"BROADCAST_OUT");
	HX_MARK_MEMBER_NAME(AppConstants_obj::BROADCAST_JUMP,"BROADCAST_JUMP");
	HX_MARK_MEMBER_NAME(AppConstants_obj::SCALE_FACTOR,"SCALE_FACTOR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AppConstants_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::APP_NAME,"APP_NAME");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::PREPARE_MODEL,"PREPARE_MODEL");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::PREPARE_VIEW,"PREPARE_VIEW");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::PROXY_INITIALIZED,"PROXY_INITIALIZED");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::MEDIATOR_INITIALIZED,"MEDIATOR_INITIALIZED");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::STARTUP_COMPLETE,"STARTUP_COMPLETE");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::ADD_TO_ZOOM_VIEW,"ADD_TO_ZOOM_VIEW");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::ADD_TO_NAVIG_VIEW,"ADD_TO_NAVIG_VIEW");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::ADD_TO_DETAIL_POPUP_VIEW,"ADD_TO_DETAIL_POPUP_VIEW");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::CLOCK_SIGNAL,"CLOCK_SIGNAL");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::CLOCK_ON,"CLOCK_ON");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::CLOCK_OFF,"CLOCK_OFF");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::AUTO_CLOCK_START,"AUTO_CLOCK_START");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::CHANGE_CLOCK_SPEED,"CHANGE_CLOCK_SPEED");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::CLOCK_SPEED_CHANGED,"CLOCK_SPEED_CHANGED");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::REGISTER_1_CHANGED,"REGISTER_1_CHANGED");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::REGISTER_2_CHANGED,"REGISTER_2_CHANGED");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::ACCUMULATOR_CHANGED,"ACCUMULATOR_CHANGED");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::MULTIPLEXER_OUT_CHANGED,"MULTIPLEXER_OUT_CHANGED");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::ALU_EQUAL_ON,"ALU_EQUAL_ON");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::ALU_EQUAL_OFF,"ALU_EQUAL_OFF");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::ALU_OUT_ACTIVE,"ALU_OUT_ACTIVE");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::INSTRUCTIONS_MAX,"INSTRUCTIONS_MAX");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::ZOOM_IN,"ZOOM_IN");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::ZOOM_OUT,"ZOOM_OUT");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::ASSET_FOLDER,"ASSET_FOLDER");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::BG_COLOR,"BG_COLOR");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::RESET,"RESET");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::LOOP,"LOOP");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::MODEL_RESET_COMPLETE,"MODEL_RESET_COMPLETE");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::POWER_ON,"POWER_ON");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::POWER_OFF,"POWER_OFF");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::SHOW_OVERLAY_UNITS,"SHOW_OVERLAY_UNITS");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::HIDE_OVERLAY_UNITS,"HIDE_OVERLAY_UNITS");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::SHOW_OVERLAY_FLOW,"SHOW_OVERLAY_FLOW");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::HIDE_OVERLAY_FLOW,"HIDE_OVERLAY_FLOW");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::SHOW_HIGHLIGHT,"SHOW_HIGHLIGHT");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::HIDE_HIGHLIGHT,"HIDE_HIGHLIGHT");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::EDIT_ROM,"EDIT_ROM");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::PLAY,"PLAY");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::PAUSE,"PAUSE");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::SHOW_ARCHITECTURE,"SHOW_ARCHITECTURE");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::MANUAL_MODE_ON,"MANUAL_MODE_ON");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::PROGRAM_CHANGED,"PROGRAM_CHANGED");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::LOAD_ROM,"LOAD_ROM");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::DETAIL_ACCUMULATOR,"DETAIL_ACCUMULATOR");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::DETAIL_POPUP_ACTIVE,"DETAIL_POPUP_ACTIVE");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::ENTER_INSTRUCTION,"ENTER_INSTRUCTION");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::ENTER_INSTRUCTION_CHANGED,"ENTER_INSTRUCTION_CHANGED");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::OPCODE_NOP,"OPCODE_NOP");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::OPCODE_MOV,"OPCODE_MOV");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::OPCODE_LDI,"OPCODE_LDI");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::OPCODE_ALU,"OPCODE_ALU");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::OPCODE_SDA,"OPCODE_SDA");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::OPCODE_LDA,"OPCODE_LDA");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::OPCODE_INP,"OPCODE_INP");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::OPCODE_OUT,"OPCODE_OUT");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::OPCODE_JE,"OPCODE_JE");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::OPCODE_JNE,"OPCODE_JNE");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::OPCODE_JMP,"OPCODE_JMP");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::ADDRESS_ADD,"ADDRESS_ADD");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::ADDRESS_SUB,"ADDRESS_SUB");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::ADDRESS_INC,"ADDRESS_INC");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::ADDRESS_DEC,"ADDRESS_DEC");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::ADDRESS_ACCUMULATOR,"ADDRESS_ACCUMULATOR");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::ADDRESS_REGISTER1,"ADDRESS_REGISTER1");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::ADDRESS_REGISTER2,"ADDRESS_REGISTER2");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::INP_REGISTER1,"INP_REGISTER1");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::INP_REGISTER2,"INP_REGISTER2");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::OUT_REGISTER1,"OUT_REGISTER1");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::OUT_REGISTER2,"OUT_REGISTER2");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::MULTIPLEXER_ACCUMULATOR,"MULTIPLEXER_ACCUMULATOR");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::MULTIPLEXER_REGISTER1,"MULTIPLEXER_REGISTER1");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::MULTIPLEXER_REGISTER2,"MULTIPLEXER_REGISTER2");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::MULTIPLEXER_KEYBOARD_INPUT,"MULTIPLEXER_KEYBOARD_INPUT");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::BROADCAST_NOP,"BROADCAST_NOP");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::BROADCAST_MOV,"BROADCAST_MOV");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::BROADCAST_LDI,"BROADCAST_LDI");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::BROADCAST_SDA,"BROADCAST_SDA");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::BROADCAST_LDA,"BROADCAST_LDA");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::BROADCAST_INP,"BROADCAST_INP");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::BROADCAST_OUT,"BROADCAST_OUT");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::BROADCAST_JUMP,"BROADCAST_JUMP");
	HX_VISIT_MEMBER_NAME(AppConstants_obj::SCALE_FACTOR,"SCALE_FACTOR");
};

#endif

Class AppConstants_obj::__mClass;

void AppConstants_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("AppConstants"), hx::TCanCast< AppConstants_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void AppConstants_obj::__boot()
{
	APP_NAME= HX_CSTRING("TurtlebiteSIM");
	PREPARE_MODEL= HX_CSTRING("prepareModel");
	PREPARE_VIEW= HX_CSTRING("prepareView");
	PROXY_INITIALIZED= HX_CSTRING("proxyInitialized");
	MEDIATOR_INITIALIZED= HX_CSTRING("mediatorInitialized");
	STARTUP_COMPLETE= HX_CSTRING("startupComplete");
	ADD_TO_ZOOM_VIEW= HX_CSTRING("addToZoomView");
	ADD_TO_NAVIG_VIEW= HX_CSTRING("addToNavigView");
	ADD_TO_DETAIL_POPUP_VIEW= HX_CSTRING("addToDetailPopupView");
	CLOCK_SIGNAL= HX_CSTRING("clockSignal");
	CLOCK_ON= HX_CSTRING("clockOn");
	CLOCK_OFF= HX_CSTRING("clockOff");
	AUTO_CLOCK_START= HX_CSTRING("autoClockStart");
	CHANGE_CLOCK_SPEED= HX_CSTRING("changeClockSpeed");
	CLOCK_SPEED_CHANGED= HX_CSTRING("clockSpeedChanged");
	REGISTER_1_CHANGED= HX_CSTRING("register1changed");
	REGISTER_2_CHANGED= HX_CSTRING("register2changed");
	ACCUMULATOR_CHANGED= HX_CSTRING("accumulatorChanged");
	MULTIPLEXER_OUT_CHANGED= HX_CSTRING("multiplexerOutChanged");
	ALU_EQUAL_ON= HX_CSTRING("aluEqualOn");
	ALU_EQUAL_OFF= HX_CSTRING("aluEqualOff");
	ALU_OUT_ACTIVE= HX_CSTRING("aluOutActive");
	INSTRUCTIONS_MAX= (int)16;
	ZOOM_IN= HX_CSTRING("zoomIn");
	ZOOM_OUT= HX_CSTRING("zoomOut");
	ASSET_FOLDER= HX_CSTRING("images");
	BG_COLOR= (int)10526880;
	RESET= HX_CSTRING("reset");
	LOOP= HX_CSTRING("loop");
	MODEL_RESET_COMPLETE= HX_CSTRING("modelReset");
	POWER_ON= HX_CSTRING("powerOn");
	POWER_OFF= HX_CSTRING("powerOff");
	SHOW_OVERLAY_UNITS= HX_CSTRING("showOverlayUnits");
	HIDE_OVERLAY_UNITS= HX_CSTRING("hideOverlayUnits");
	SHOW_OVERLAY_FLOW= HX_CSTRING("showOverlayFlow");
	HIDE_OVERLAY_FLOW= HX_CSTRING("hideOverlayFlow");
	SHOW_HIGHLIGHT= HX_CSTRING("showHighlight");
	HIDE_HIGHLIGHT= HX_CSTRING("hideHighlight");
	EDIT_ROM= HX_CSTRING("editRom");
	PLAY= HX_CSTRING("play");
	PAUSE= HX_CSTRING("pause");
	SHOW_ARCHITECTURE= HX_CSTRING("showArchitecture");
	MANUAL_MODE_ON= HX_CSTRING("manualModeOn");
	PROGRAM_CHANGED= HX_CSTRING("programChanged");
	LOAD_ROM= HX_CSTRING("loadRom");
	DETAIL_ACCUMULATOR= HX_CSTRING("detailAccumulator");
	DETAIL_POPUP_ACTIVE= HX_CSTRING("detailPopupActive");
	ENTER_INSTRUCTION= HX_CSTRING("enterInstruction");
	ENTER_INSTRUCTION_CHANGED= HX_CSTRING("enterInstructionChanged");
	OPCODE_NOP= HX_CSTRING("0000");
	OPCODE_MOV= HX_CSTRING("0001");
	OPCODE_LDI= HX_CSTRING("0010");
	OPCODE_ALU= HX_CSTRING("0011");
	OPCODE_SDA= HX_CSTRING("0100");
	OPCODE_LDA= HX_CSTRING("0101");
	OPCODE_INP= HX_CSTRING("0110");
	OPCODE_OUT= HX_CSTRING("0111");
	OPCODE_JE= HX_CSTRING("1000");
	OPCODE_JNE= HX_CSTRING("1001");
	OPCODE_JMP= HX_CSTRING("1010");
	ADDRESS_ADD= HX_CSTRING("0000");
	ADDRESS_SUB= HX_CSTRING("0001");
	ADDRESS_INC= HX_CSTRING("0010");
	ADDRESS_DEC= HX_CSTRING("0011");
	ADDRESS_ACCUMULATOR= HX_CSTRING("0000");
	ADDRESS_REGISTER1= HX_CSTRING("0100");
	ADDRESS_REGISTER2= HX_CSTRING("1000");
	INP_REGISTER1= HX_CSTRING("0111");
	INP_REGISTER2= HX_CSTRING("1011");
	OUT_REGISTER1= HX_CSTRING("0110");
	OUT_REGISTER2= HX_CSTRING("1001");
	MULTIPLEXER_ACCUMULATOR= HX_CSTRING("00");
	MULTIPLEXER_REGISTER1= HX_CSTRING("10");
	MULTIPLEXER_REGISTER2= HX_CSTRING("01");
	MULTIPLEXER_KEYBOARD_INPUT= HX_CSTRING("11");
	BROADCAST_NOP= HX_CSTRING("broadcastNOP");
	BROADCAST_MOV= HX_CSTRING("broadcastMOV");
	BROADCAST_LDI= HX_CSTRING("broadcastLDI");
	BROADCAST_SDA= HX_CSTRING("broadcastSDA");
	BROADCAST_LDA= HX_CSTRING("broadcastLDA");
	BROADCAST_INP= HX_CSTRING("broadcastINP");
	BROADCAST_OUT= HX_CSTRING("broadcastOUT");
	BROADCAST_JUMP= HX_CSTRING("broadcastJUMP");
	SCALE_FACTOR= (int)2;
}

