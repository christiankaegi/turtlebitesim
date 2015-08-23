#ifndef INCLUDED_AppConstants
#define INCLUDED_AppConstants

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(AppConstants)


class HXCPP_CLASS_ATTRIBUTES  AppConstants_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AppConstants_obj OBJ_;
		AppConstants_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AppConstants_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AppConstants_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("AppConstants"); }

		static ::String APP_NAME;
		static ::String PREPARE_MODEL;
		static ::String PREPARE_VIEW;
		static ::String PROXY_INITIALIZED;
		static ::String MEDIATOR_INITIALIZED;
		static ::String STARTUP_COMPLETE;
		static ::String ADD_TO_ZOOM_VIEW;
		static ::String ADD_TO_NAVIG_VIEW;
		static ::String CLOCK_SIGNAL;
		static ::String CLOCK_ON;
		static ::String CLOCK_OFF;
		static ::String AUTO_CLOCK_START;
		static ::String CHANGE_CLOCK_SPEED;
		static ::String CLOCK_SPEED_CHANGED;
		static ::String REGISTER_1_CHANGED;
		static ::String REGISTER_2_CHANGED;
		static ::String ACCUMULATOR_CHANGED;
		static ::String MULTIPLEXER_OUT_CHANGED;
		static ::String UPDATE_DETAIL_ACCUMULATOR_LINES;
		static ::String ALU_EQUAL_ON;
		static ::String ALU_EQUAL_OFF;
		static ::String ALU_OUT_ACTIVE;
		static int INSTRUCTIONS_MAX;
		static ::String ZOOM_IN;
		static ::String ZOOM_OUT;
		static ::String ASSET_FOLDER;
		static int BG_COLOR;
		static ::String RESET;
		static ::String LOOP;
		static ::String MODEL_RESET_COMPLETE;
		static ::String POWER_ON;
		static ::String POWER_OFF;
		static ::String SHOW_OVERLAY_UNITS;
		static ::String HIDE_OVERLAY_UNITS;
		static ::String SHOW_OVERLAY_FLOW;
		static ::String HIDE_OVERLAY_FLOW;
		static ::String SHOW_HIGHLIGHT;
		static ::String HIDE_HIGHLIGHT;
		static ::String EDIT_ROM;
		static ::String PAUSE;
		static ::String SHOW_ARCHITECTURE;
		static ::String MANUAL_MODE_ON;
		static ::String PROGRAM_CHANGED;
		static ::String LOAD_ROM;
		static ::String DETAIL_ACCUMULATOR;
		static ::String OPCODE_NOP;
		static ::String OPCODE_MOV;
		static ::String OPCODE_LDI;
		static ::String OPCODE_ALU;
		static ::String OPCODE_SDA;
		static ::String OPCODE_LDA;
		static ::String OPCODE_INP;
		static ::String OPCODE_OUT;
		static ::String OPCODE_JE;
		static ::String OPCODE_JNE;
		static ::String OPCODE_JMP;
		static ::String ADDRESS_ADD;
		static ::String ADDRESS_SUB;
		static ::String ADDRESS_INC;
		static ::String ADDRESS_DEC;
		static ::String ADDRESS_ACCUMULATOR;
		static ::String ADDRESS_REGISTER1;
		static ::String ADDRESS_REGISTER2;
		static ::String MULTIPLEXER_ACCUMULATOR;
		static ::String MULTIPLEXER_REGISTER1;
		static ::String MULTIPLEXER_REGISTER2;
		static ::String MULTIPLEXER_KEYBOARD_INPUT;
		static ::String BROADCAST_NOP;
		static ::String BROADCAST_MOV;
		static ::String BROADCAST_LDI;
		static ::String BROADCAST_ALU;
		static ::String BROADCAST_SDA;
		static ::String BROADCAST_LDA;
		static ::String BROADCAST_INP;
		static ::String BROADCAST_OUT;
		static ::String BROADCAST_JUMP;
		static Float SCALE_FACTOR;
};


#endif /* INCLUDED_AppConstants */ 
