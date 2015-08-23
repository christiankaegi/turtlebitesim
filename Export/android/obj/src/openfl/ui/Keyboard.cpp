#include <hxcpp.h>

#ifndef INCLUDED_openfl_ui_Keyboard
#include <openfl/ui/Keyboard.h>
#endif
namespace openfl{
namespace ui{

Void Keyboard_obj::__construct()
{
	return null();
}

//Keyboard_obj::~Keyboard_obj() { }

Dynamic Keyboard_obj::__CreateEmpty() { return  new Keyboard_obj; }
hx::ObjectPtr< Keyboard_obj > Keyboard_obj::__new()
{  hx::ObjectPtr< Keyboard_obj > result = new Keyboard_obj();
	result->__construct();
	return result;}

Dynamic Keyboard_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Keyboard_obj > result = new Keyboard_obj();
	result->__construct();
	return result;}

int Keyboard_obj::NUMBER_0;

int Keyboard_obj::NUMBER_1;

int Keyboard_obj::NUMBER_2;

int Keyboard_obj::NUMBER_3;

int Keyboard_obj::NUMBER_4;

int Keyboard_obj::NUMBER_5;

int Keyboard_obj::NUMBER_6;

int Keyboard_obj::NUMBER_7;

int Keyboard_obj::NUMBER_8;

int Keyboard_obj::NUMBER_9;

int Keyboard_obj::A;

int Keyboard_obj::B;

int Keyboard_obj::C;

int Keyboard_obj::D;

int Keyboard_obj::E;

int Keyboard_obj::F;

int Keyboard_obj::G;

int Keyboard_obj::H;

int Keyboard_obj::I;

int Keyboard_obj::J;

int Keyboard_obj::K;

int Keyboard_obj::L;

int Keyboard_obj::M;

int Keyboard_obj::N;

int Keyboard_obj::O;

int Keyboard_obj::P;

int Keyboard_obj::Q;

int Keyboard_obj::R;

int Keyboard_obj::S;

int Keyboard_obj::T;

int Keyboard_obj::U;

int Keyboard_obj::V;

int Keyboard_obj::W;

int Keyboard_obj::X;

int Keyboard_obj::Y;

int Keyboard_obj::Z;

int Keyboard_obj::NUMPAD_0;

int Keyboard_obj::NUMPAD_1;

int Keyboard_obj::NUMPAD_2;

int Keyboard_obj::NUMPAD_3;

int Keyboard_obj::NUMPAD_4;

int Keyboard_obj::NUMPAD_5;

int Keyboard_obj::NUMPAD_6;

int Keyboard_obj::NUMPAD_7;

int Keyboard_obj::NUMPAD_8;

int Keyboard_obj::NUMPAD_9;

int Keyboard_obj::NUMPAD_MULTIPLY;

int Keyboard_obj::NUMPAD_ADD;

int Keyboard_obj::NUMPAD_ENTER;

int Keyboard_obj::NUMPAD_SUBTRACT;

int Keyboard_obj::NUMPAD_DECIMAL;

int Keyboard_obj::NUMPAD_DIVIDE;

int Keyboard_obj::F1;

int Keyboard_obj::F2;

int Keyboard_obj::F3;

int Keyboard_obj::F4;

int Keyboard_obj::F5;

int Keyboard_obj::F6;

int Keyboard_obj::F7;

int Keyboard_obj::F8;

int Keyboard_obj::F9;

int Keyboard_obj::F10;

int Keyboard_obj::F11;

int Keyboard_obj::F12;

int Keyboard_obj::F13;

int Keyboard_obj::F14;

int Keyboard_obj::F15;

int Keyboard_obj::BACKSPACE;

int Keyboard_obj::TAB;

int Keyboard_obj::ALTERNATE;

int Keyboard_obj::ENTER;

int Keyboard_obj::COMMAND;

int Keyboard_obj::SHIFT;

int Keyboard_obj::CONTROL;

int Keyboard_obj::BREAK;

int Keyboard_obj::CAPS_LOCK;

int Keyboard_obj::NUMPAD;

int Keyboard_obj::ESCAPE;

int Keyboard_obj::SPACE;

int Keyboard_obj::PAGE_UP;

int Keyboard_obj::PAGE_DOWN;

int Keyboard_obj::END;

int Keyboard_obj::HOME;

int Keyboard_obj::LEFT;

int Keyboard_obj::RIGHT;

int Keyboard_obj::UP;

int Keyboard_obj::DOWN;

int Keyboard_obj::INSERT;

int Keyboard_obj::DELETE;

int Keyboard_obj::NUMLOCK;

int Keyboard_obj::SEMICOLON;

int Keyboard_obj::EQUAL;

int Keyboard_obj::COMMA;

int Keyboard_obj::MINUS;

int Keyboard_obj::PERIOD;

int Keyboard_obj::SLASH;

int Keyboard_obj::BACKQUOTE;

int Keyboard_obj::LEFTBRACKET;

int Keyboard_obj::BACKSLASH;

int Keyboard_obj::RIGHTBRACKET;

int Keyboard_obj::QUOTE;

bool Keyboard_obj::capsLock;

bool Keyboard_obj::numLock;

int Keyboard_obj::convertKeyCode( int key){
	HX_STACK_FRAME("openfl.ui.Keyboard","convertKeyCode",0x8e558484,"openfl.ui.Keyboard.convertKeyCode","openfl/ui/Keyboard.hx",550,0x5fb867bb)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(550)
	switch( (int)(key)){
		case (int)8: {
			HX_STACK_LINE(552)
			return (int)8;
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(553)
			return (int)9;
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(554)
			return (int)13;
		}
		;break;
		case (int)27: {
			HX_STACK_LINE(555)
			return (int)27;
		}
		;break;
		case (int)32: {
			HX_STACK_LINE(556)
			return (int)32;
		}
		;break;
		case (int)33: {
			HX_STACK_LINE(557)
			return (int)49;
		}
		;break;
		case (int)34: {
			HX_STACK_LINE(558)
			return (int)222;
		}
		;break;
		case (int)35: {
			HX_STACK_LINE(559)
			return (int)51;
		}
		;break;
		case (int)36: {
			HX_STACK_LINE(560)
			return (int)52;
		}
		;break;
		case (int)37: {
			HX_STACK_LINE(561)
			return (int)53;
		}
		;break;
		case (int)38: {
			HX_STACK_LINE(562)
			return (int)55;
		}
		;break;
		case (int)39: {
			HX_STACK_LINE(563)
			return (int)222;
		}
		;break;
		case (int)40: {
			HX_STACK_LINE(564)
			return (int)57;
		}
		;break;
		case (int)41: {
			HX_STACK_LINE(565)
			return (int)48;
		}
		;break;
		case (int)42: {
			HX_STACK_LINE(566)
			return (int)56;
		}
		;break;
		case (int)44: {
			HX_STACK_LINE(568)
			return (int)188;
		}
		;break;
		case (int)45: {
			HX_STACK_LINE(569)
			return (int)189;
		}
		;break;
		case (int)46: {
			HX_STACK_LINE(570)
			return (int)190;
		}
		;break;
		case (int)47: {
			HX_STACK_LINE(571)
			return (int)191;
		}
		;break;
		case (int)48: {
			HX_STACK_LINE(572)
			return (int)48;
		}
		;break;
		case (int)49: {
			HX_STACK_LINE(573)
			return (int)49;
		}
		;break;
		case (int)50: {
			HX_STACK_LINE(574)
			return (int)50;
		}
		;break;
		case (int)51: {
			HX_STACK_LINE(575)
			return (int)51;
		}
		;break;
		case (int)52: {
			HX_STACK_LINE(576)
			return (int)52;
		}
		;break;
		case (int)53: {
			HX_STACK_LINE(577)
			return (int)53;
		}
		;break;
		case (int)54: {
			HX_STACK_LINE(578)
			return (int)54;
		}
		;break;
		case (int)55: {
			HX_STACK_LINE(579)
			return (int)55;
		}
		;break;
		case (int)56: {
			HX_STACK_LINE(580)
			return (int)56;
		}
		;break;
		case (int)57: {
			HX_STACK_LINE(581)
			return (int)57;
		}
		;break;
		case (int)58: {
			HX_STACK_LINE(582)
			return (int)186;
		}
		;break;
		case (int)59: {
			HX_STACK_LINE(583)
			return (int)186;
		}
		;break;
		case (int)60: {
			HX_STACK_LINE(584)
			return (int)60;
		}
		;break;
		case (int)61: {
			HX_STACK_LINE(585)
			return (int)187;
		}
		;break;
		case (int)62: {
			HX_STACK_LINE(586)
			return (int)190;
		}
		;break;
		case (int)63: {
			HX_STACK_LINE(587)
			return (int)191;
		}
		;break;
		case (int)64: {
			HX_STACK_LINE(588)
			return (int)50;
		}
		;break;
		case (int)91: {
			HX_STACK_LINE(589)
			return (int)219;
		}
		;break;
		case (int)92: {
			HX_STACK_LINE(590)
			return (int)220;
		}
		;break;
		case (int)93: {
			HX_STACK_LINE(591)
			return (int)221;
		}
		;break;
		case (int)94: {
			HX_STACK_LINE(592)
			return (int)54;
		}
		;break;
		case (int)95: {
			HX_STACK_LINE(593)
			return (int)189;
		}
		;break;
		case (int)96: {
			HX_STACK_LINE(594)
			return (int)192;
		}
		;break;
		case (int)97: {
			HX_STACK_LINE(595)
			return (int)65;
		}
		;break;
		case (int)98: {
			HX_STACK_LINE(596)
			return (int)66;
		}
		;break;
		case (int)99: {
			HX_STACK_LINE(597)
			return (int)67;
		}
		;break;
		case (int)100: {
			HX_STACK_LINE(598)
			return (int)68;
		}
		;break;
		case (int)101: {
			HX_STACK_LINE(599)
			return (int)69;
		}
		;break;
		case (int)102: {
			HX_STACK_LINE(600)
			return (int)70;
		}
		;break;
		case (int)103: {
			HX_STACK_LINE(601)
			return (int)71;
		}
		;break;
		case (int)104: {
			HX_STACK_LINE(602)
			return (int)72;
		}
		;break;
		case (int)105: {
			HX_STACK_LINE(603)
			return (int)73;
		}
		;break;
		case (int)106: {
			HX_STACK_LINE(604)
			return (int)74;
		}
		;break;
		case (int)107: {
			HX_STACK_LINE(605)
			return (int)75;
		}
		;break;
		case (int)108: {
			HX_STACK_LINE(606)
			return (int)76;
		}
		;break;
		case (int)109: {
			HX_STACK_LINE(607)
			return (int)77;
		}
		;break;
		case (int)110: {
			HX_STACK_LINE(608)
			return (int)78;
		}
		;break;
		case (int)111: {
			HX_STACK_LINE(609)
			return (int)79;
		}
		;break;
		case (int)112: {
			HX_STACK_LINE(610)
			return (int)80;
		}
		;break;
		case (int)113: {
			HX_STACK_LINE(611)
			return (int)81;
		}
		;break;
		case (int)114: {
			HX_STACK_LINE(612)
			return (int)82;
		}
		;break;
		case (int)115: {
			HX_STACK_LINE(613)
			return (int)83;
		}
		;break;
		case (int)116: {
			HX_STACK_LINE(614)
			return (int)84;
		}
		;break;
		case (int)117: {
			HX_STACK_LINE(615)
			return (int)85;
		}
		;break;
		case (int)118: {
			HX_STACK_LINE(616)
			return (int)86;
		}
		;break;
		case (int)119: {
			HX_STACK_LINE(617)
			return (int)87;
		}
		;break;
		case (int)120: {
			HX_STACK_LINE(618)
			return (int)88;
		}
		;break;
		case (int)121: {
			HX_STACK_LINE(619)
			return (int)89;
		}
		;break;
		case (int)122: {
			HX_STACK_LINE(620)
			return (int)90;
		}
		;break;
		case (int)127: {
			HX_STACK_LINE(621)
			return (int)46;
		}
		;break;
		case (int)1073741881: {
			HX_STACK_LINE(622)
			return (int)20;
		}
		;break;
		case (int)1073741882: {
			HX_STACK_LINE(623)
			return (int)112;
		}
		;break;
		case (int)1073741883: {
			HX_STACK_LINE(624)
			return (int)113;
		}
		;break;
		case (int)1073741884: {
			HX_STACK_LINE(625)
			return (int)114;
		}
		;break;
		case (int)1073741885: {
			HX_STACK_LINE(626)
			return (int)115;
		}
		;break;
		case (int)1073741886: {
			HX_STACK_LINE(627)
			return (int)116;
		}
		;break;
		case (int)1073741887: {
			HX_STACK_LINE(628)
			return (int)117;
		}
		;break;
		case (int)1073741888: {
			HX_STACK_LINE(629)
			return (int)118;
		}
		;break;
		case (int)1073741889: {
			HX_STACK_LINE(630)
			return (int)119;
		}
		;break;
		case (int)1073741890: {
			HX_STACK_LINE(631)
			return (int)120;
		}
		;break;
		case (int)1073741891: {
			HX_STACK_LINE(632)
			return (int)121;
		}
		;break;
		case (int)1073741892: {
			HX_STACK_LINE(633)
			return (int)122;
		}
		;break;
		case (int)1073741893: {
			HX_STACK_LINE(634)
			return (int)123;
		}
		;break;
		case (int)1073741894: {
			HX_STACK_LINE(635)
			return (int)301;
		}
		;break;
		case (int)1073741895: {
			HX_STACK_LINE(636)
			return (int)145;
		}
		;break;
		case (int)1073741896: {
			HX_STACK_LINE(637)
			return (int)19;
		}
		;break;
		case (int)1073741897: {
			HX_STACK_LINE(638)
			return (int)45;
		}
		;break;
		case (int)1073741898: {
			HX_STACK_LINE(639)
			return (int)36;
		}
		;break;
		case (int)1073741899: {
			HX_STACK_LINE(640)
			return (int)33;
		}
		;break;
		case (int)1073741901: {
			HX_STACK_LINE(641)
			return (int)35;
		}
		;break;
		case (int)1073741902: {
			HX_STACK_LINE(642)
			return (int)34;
		}
		;break;
		case (int)1073741903: {
			HX_STACK_LINE(643)
			return (int)39;
		}
		;break;
		case (int)1073741904: {
			HX_STACK_LINE(644)
			return (int)37;
		}
		;break;
		case (int)1073741905: {
			HX_STACK_LINE(645)
			return (int)40;
		}
		;break;
		case (int)1073741906: {
			HX_STACK_LINE(646)
			return (int)38;
		}
		;break;
		case (int)1073741907: {
			HX_STACK_LINE(647)
			return (int)144;
		}
		;break;
		case (int)1073741908: {
			HX_STACK_LINE(648)
			return (int)111;
		}
		;break;
		case (int)1073741909: {
			HX_STACK_LINE(649)
			return (int)106;
		}
		;break;
		case (int)1073741910: {
			HX_STACK_LINE(650)
			return (int)109;
		}
		;break;
		case (int)1073741911: {
			HX_STACK_LINE(651)
			return (int)107;
		}
		;break;
		case (int)1073741912: {
			HX_STACK_LINE(652)
			return (int)108;
		}
		;break;
		case (int)1073741913: {
			HX_STACK_LINE(653)
			return (int)97;
		}
		;break;
		case (int)1073741914: {
			HX_STACK_LINE(654)
			return (int)98;
		}
		;break;
		case (int)1073741915: {
			HX_STACK_LINE(655)
			return (int)99;
		}
		;break;
		case (int)1073741916: {
			HX_STACK_LINE(656)
			return (int)100;
		}
		;break;
		case (int)1073741917: {
			HX_STACK_LINE(657)
			return (int)101;
		}
		;break;
		case (int)1073741918: {
			HX_STACK_LINE(658)
			return (int)102;
		}
		;break;
		case (int)1073741919: {
			HX_STACK_LINE(659)
			return (int)103;
		}
		;break;
		case (int)1073741920: {
			HX_STACK_LINE(660)
			return (int)104;
		}
		;break;
		case (int)1073741921: {
			HX_STACK_LINE(661)
			return (int)105;
		}
		;break;
		case (int)1073741922: {
			HX_STACK_LINE(662)
			return (int)96;
		}
		;break;
		case (int)1073741923: {
			HX_STACK_LINE(663)
			return (int)110;
		}
		;break;
		case (int)1073741925: {
			HX_STACK_LINE(664)
			return (int)302;
		}
		;break;
		case (int)1073741928: {
			HX_STACK_LINE(667)
			return (int)124;
		}
		;break;
		case (int)1073741929: {
			HX_STACK_LINE(668)
			return (int)125;
		}
		;break;
		case (int)1073741930: {
			HX_STACK_LINE(669)
			return (int)126;
		}
		;break;
		case (int)1073741982: {
			HX_STACK_LINE(700)
			return (int)13;
		}
		;break;
		case (int)1073742044: {
			HX_STACK_LINE(751)
			return (int)110;
		}
		;break;
		case (int)1073742048: {
			HX_STACK_LINE(753)
			return (int)17;
		}
		;break;
		case (int)1073742049: {
			HX_STACK_LINE(754)
			return (int)16;
		}
		;break;
		case (int)1073742050: {
			HX_STACK_LINE(755)
			return (int)18;
		}
		;break;
		case (int)1073742051: {
			HX_STACK_LINE(756)
			return (int)15;
		}
		;break;
		case (int)1073742052: {
			HX_STACK_LINE(757)
			return (int)17;
		}
		;break;
		case (int)1073742053: {
			HX_STACK_LINE(758)
			return (int)16;
		}
		;break;
		case (int)1073742054: {
			HX_STACK_LINE(759)
			return (int)18;
		}
		;break;
		case (int)1073742055: {
			HX_STACK_LINE(760)
			return (int)15;
		}
		;break;
		default: {
			HX_STACK_LINE(787)
			return key;
		}
	}
	HX_STACK_LINE(550)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Keyboard_obj,convertKeyCode,return )

bool Keyboard_obj::isAccessible( ){
	HX_STACK_FRAME("openfl.ui.Keyboard","isAccessible",0xa9f8adcb,"openfl.ui.Keyboard.isAccessible","openfl/ui/Keyboard.hx",807,0x5fb867bb)
	HX_STACK_LINE(807)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Keyboard_obj,isAccessible,return )

int Keyboard_obj::__getCharCode( int key,hx::Null< bool >  __o_shift){
bool shift = __o_shift.Default(false);
	HX_STACK_FRAME("openfl.ui.Keyboard","__getCharCode",0x5c5ae14e,"openfl.ui.Keyboard.__getCharCode","openfl/ui/Keyboard.hx",812,0x5fb867bb)
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(shift,"shift")
{
		HX_STACK_LINE(814)
		if ((!(shift))){
			HX_STACK_LINE(816)
			switch( (int)(key)){
				case (int)8: {
					HX_STACK_LINE(818)
					return (int)8;
				}
				;break;
				case (int)9: {
					HX_STACK_LINE(819)
					return (int)9;
				}
				;break;
				case (int)13: {
					HX_STACK_LINE(820)
					return (int)13;
				}
				;break;
				case (int)27: {
					HX_STACK_LINE(821)
					return (int)27;
				}
				;break;
				case (int)32: {
					HX_STACK_LINE(822)
					return (int)32;
				}
				;break;
				case (int)186: {
					HX_STACK_LINE(823)
					return (int)59;
				}
				;break;
				case (int)187: {
					HX_STACK_LINE(824)
					return (int)61;
				}
				;break;
				case (int)188: {
					HX_STACK_LINE(825)
					return (int)44;
				}
				;break;
				case (int)189: {
					HX_STACK_LINE(826)
					return (int)45;
				}
				;break;
				case (int)190: {
					HX_STACK_LINE(827)
					return (int)46;
				}
				;break;
				case (int)191: {
					HX_STACK_LINE(828)
					return (int)47;
				}
				;break;
				case (int)192: {
					HX_STACK_LINE(829)
					return (int)96;
				}
				;break;
				case (int)219: {
					HX_STACK_LINE(830)
					return (int)91;
				}
				;break;
				case (int)220: {
					HX_STACK_LINE(831)
					return (int)92;
				}
				;break;
				case (int)221: {
					HX_STACK_LINE(832)
					return (int)93;
				}
				;break;
				case (int)222: {
					HX_STACK_LINE(833)
					return (int)39;
				}
				;break;
			}
			HX_STACK_LINE(837)
			if (((bool((key >= (int)48)) && bool((key <= (int)57))))){
				HX_STACK_LINE(839)
				return ((key - (int)48) + (int)48);
			}
			HX_STACK_LINE(843)
			if (((bool((key >= (int)65)) && bool((key <= (int)90))))){
				HX_STACK_LINE(845)
				return ((key - (int)65) + (int)97);
			}
		}
		else{
			HX_STACK_LINE(851)
			switch( (int)(key)){
				case (int)48: {
					HX_STACK_LINE(853)
					return (int)41;
				}
				;break;
				case (int)49: {
					HX_STACK_LINE(854)
					return (int)33;
				}
				;break;
				case (int)50: {
					HX_STACK_LINE(855)
					return (int)64;
				}
				;break;
				case (int)51: {
					HX_STACK_LINE(856)
					return (int)35;
				}
				;break;
				case (int)52: {
					HX_STACK_LINE(857)
					return (int)36;
				}
				;break;
				case (int)53: {
					HX_STACK_LINE(858)
					return (int)37;
				}
				;break;
				case (int)54: {
					HX_STACK_LINE(859)
					return (int)94;
				}
				;break;
				case (int)55: {
					HX_STACK_LINE(860)
					return (int)38;
				}
				;break;
				case (int)56: {
					HX_STACK_LINE(861)
					return (int)42;
				}
				;break;
				case (int)57: {
					HX_STACK_LINE(862)
					return (int)40;
				}
				;break;
				case (int)186: {
					HX_STACK_LINE(863)
					return (int)58;
				}
				;break;
				case (int)187: {
					HX_STACK_LINE(864)
					return (int)43;
				}
				;break;
				case (int)188: {
					HX_STACK_LINE(865)
					return (int)60;
				}
				;break;
				case (int)189: {
					HX_STACK_LINE(866)
					return (int)95;
				}
				;break;
				case (int)190: {
					HX_STACK_LINE(867)
					return (int)62;
				}
				;break;
				case (int)191: {
					HX_STACK_LINE(868)
					return (int)63;
				}
				;break;
				case (int)192: {
					HX_STACK_LINE(869)
					return (int)126;
				}
				;break;
				case (int)219: {
					HX_STACK_LINE(870)
					return (int)123;
				}
				;break;
				case (int)220: {
					HX_STACK_LINE(871)
					return (int)124;
				}
				;break;
				case (int)221: {
					HX_STACK_LINE(872)
					return (int)125;
				}
				;break;
				case (int)222: {
					HX_STACK_LINE(873)
					return (int)34;
				}
				;break;
			}
			HX_STACK_LINE(877)
			if (((bool((key >= (int)65)) && bool((key <= (int)90))))){
				HX_STACK_LINE(879)
				return ((key - (int)65) + (int)65);
			}
		}
		HX_STACK_LINE(885)
		if (((bool((key >= (int)96)) && bool((key <= (int)105))))){
			HX_STACK_LINE(887)
			return ((key - (int)96) + (int)48);
		}
		HX_STACK_LINE(891)
		switch( (int)(key)){
			case (int)106: {
				HX_STACK_LINE(893)
				return (int)42;
			}
			;break;
			case (int)107: {
				HX_STACK_LINE(894)
				return (int)43;
			}
			;break;
			case (int)108: {
				HX_STACK_LINE(895)
				return (int)44;
			}
			;break;
			case (int)110: {
				HX_STACK_LINE(896)
				return (int)45;
			}
			;break;
			case (int)111: {
				HX_STACK_LINE(897)
				return (int)46;
			}
			;break;
			case (int)46: {
				HX_STACK_LINE(898)
				return (int)127;
			}
			;break;
			case (int)13: {
				HX_STACK_LINE(899)
				return (int)13;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(900)
				return (int)8;
			}
			;break;
		}
		HX_STACK_LINE(904)
		return (int)0;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Keyboard_obj,__getCharCode,return )


Keyboard_obj::Keyboard_obj()
{
}

Dynamic Keyboard_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"numLock") ) { return numLock; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"capsLock") ) { return capsLock; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isAccessible") ) { return isAccessible_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__getCharCode") ) { return __getCharCode_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"convertKeyCode") ) { return convertKeyCode_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Keyboard_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"numLock") ) { numLock=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"capsLock") ) { capsLock=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Keyboard_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NUMBER_0"),
	HX_CSTRING("NUMBER_1"),
	HX_CSTRING("NUMBER_2"),
	HX_CSTRING("NUMBER_3"),
	HX_CSTRING("NUMBER_4"),
	HX_CSTRING("NUMBER_5"),
	HX_CSTRING("NUMBER_6"),
	HX_CSTRING("NUMBER_7"),
	HX_CSTRING("NUMBER_8"),
	HX_CSTRING("NUMBER_9"),
	HX_CSTRING("A"),
	HX_CSTRING("B"),
	HX_CSTRING("C"),
	HX_CSTRING("D"),
	HX_CSTRING("E"),
	HX_CSTRING("F"),
	HX_CSTRING("G"),
	HX_CSTRING("H"),
	HX_CSTRING("I"),
	HX_CSTRING("J"),
	HX_CSTRING("K"),
	HX_CSTRING("L"),
	HX_CSTRING("M"),
	HX_CSTRING("N"),
	HX_CSTRING("O"),
	HX_CSTRING("P"),
	HX_CSTRING("Q"),
	HX_CSTRING("R"),
	HX_CSTRING("S"),
	HX_CSTRING("T"),
	HX_CSTRING("U"),
	HX_CSTRING("V"),
	HX_CSTRING("W"),
	HX_CSTRING("X"),
	HX_CSTRING("Y"),
	HX_CSTRING("Z"),
	HX_CSTRING("NUMPAD_0"),
	HX_CSTRING("NUMPAD_1"),
	HX_CSTRING("NUMPAD_2"),
	HX_CSTRING("NUMPAD_3"),
	HX_CSTRING("NUMPAD_4"),
	HX_CSTRING("NUMPAD_5"),
	HX_CSTRING("NUMPAD_6"),
	HX_CSTRING("NUMPAD_7"),
	HX_CSTRING("NUMPAD_8"),
	HX_CSTRING("NUMPAD_9"),
	HX_CSTRING("NUMPAD_MULTIPLY"),
	HX_CSTRING("NUMPAD_ADD"),
	HX_CSTRING("NUMPAD_ENTER"),
	HX_CSTRING("NUMPAD_SUBTRACT"),
	HX_CSTRING("NUMPAD_DECIMAL"),
	HX_CSTRING("NUMPAD_DIVIDE"),
	HX_CSTRING("F1"),
	HX_CSTRING("F2"),
	HX_CSTRING("F3"),
	HX_CSTRING("F4"),
	HX_CSTRING("F5"),
	HX_CSTRING("F6"),
	HX_CSTRING("F7"),
	HX_CSTRING("F8"),
	HX_CSTRING("F9"),
	HX_CSTRING("F10"),
	HX_CSTRING("F11"),
	HX_CSTRING("F12"),
	HX_CSTRING("F13"),
	HX_CSTRING("F14"),
	HX_CSTRING("F15"),
	HX_CSTRING("BACKSPACE"),
	HX_CSTRING("TAB"),
	HX_CSTRING("ALTERNATE"),
	HX_CSTRING("ENTER"),
	HX_CSTRING("COMMAND"),
	HX_CSTRING("SHIFT"),
	HX_CSTRING("CONTROL"),
	HX_CSTRING("BREAK"),
	HX_CSTRING("CAPS_LOCK"),
	HX_CSTRING("NUMPAD"),
	HX_CSTRING("ESCAPE"),
	HX_CSTRING("SPACE"),
	HX_CSTRING("PAGE_UP"),
	HX_CSTRING("PAGE_DOWN"),
	HX_CSTRING("END"),
	HX_CSTRING("HOME"),
	HX_CSTRING("LEFT"),
	HX_CSTRING("RIGHT"),
	HX_CSTRING("UP"),
	HX_CSTRING("DOWN"),
	HX_CSTRING("INSERT"),
	HX_CSTRING("DELETE"),
	HX_CSTRING("NUMLOCK"),
	HX_CSTRING("SEMICOLON"),
	HX_CSTRING("EQUAL"),
	HX_CSTRING("COMMA"),
	HX_CSTRING("MINUS"),
	HX_CSTRING("PERIOD"),
	HX_CSTRING("SLASH"),
	HX_CSTRING("BACKQUOTE"),
	HX_CSTRING("LEFTBRACKET"),
	HX_CSTRING("BACKSLASH"),
	HX_CSTRING("RIGHTBRACKET"),
	HX_CSTRING("QUOTE"),
	HX_CSTRING("capsLock"),
	HX_CSTRING("numLock"),
	HX_CSTRING("convertKeyCode"),
	HX_CSTRING("isAccessible"),
	HX_CSTRING("__getCharCode"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Keyboard_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMBER_0,"NUMBER_0");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMBER_1,"NUMBER_1");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMBER_2,"NUMBER_2");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMBER_3,"NUMBER_3");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMBER_4,"NUMBER_4");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMBER_5,"NUMBER_5");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMBER_6,"NUMBER_6");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMBER_7,"NUMBER_7");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMBER_8,"NUMBER_8");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMBER_9,"NUMBER_9");
	HX_MARK_MEMBER_NAME(Keyboard_obj::A,"A");
	HX_MARK_MEMBER_NAME(Keyboard_obj::B,"B");
	HX_MARK_MEMBER_NAME(Keyboard_obj::C,"C");
	HX_MARK_MEMBER_NAME(Keyboard_obj::D,"D");
	HX_MARK_MEMBER_NAME(Keyboard_obj::E,"E");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F,"F");
	HX_MARK_MEMBER_NAME(Keyboard_obj::G,"G");
	HX_MARK_MEMBER_NAME(Keyboard_obj::H,"H");
	HX_MARK_MEMBER_NAME(Keyboard_obj::I,"I");
	HX_MARK_MEMBER_NAME(Keyboard_obj::J,"J");
	HX_MARK_MEMBER_NAME(Keyboard_obj::K,"K");
	HX_MARK_MEMBER_NAME(Keyboard_obj::L,"L");
	HX_MARK_MEMBER_NAME(Keyboard_obj::M,"M");
	HX_MARK_MEMBER_NAME(Keyboard_obj::N,"N");
	HX_MARK_MEMBER_NAME(Keyboard_obj::O,"O");
	HX_MARK_MEMBER_NAME(Keyboard_obj::P,"P");
	HX_MARK_MEMBER_NAME(Keyboard_obj::Q,"Q");
	HX_MARK_MEMBER_NAME(Keyboard_obj::R,"R");
	HX_MARK_MEMBER_NAME(Keyboard_obj::S,"S");
	HX_MARK_MEMBER_NAME(Keyboard_obj::T,"T");
	HX_MARK_MEMBER_NAME(Keyboard_obj::U,"U");
	HX_MARK_MEMBER_NAME(Keyboard_obj::V,"V");
	HX_MARK_MEMBER_NAME(Keyboard_obj::W,"W");
	HX_MARK_MEMBER_NAME(Keyboard_obj::X,"X");
	HX_MARK_MEMBER_NAME(Keyboard_obj::Y,"Y");
	HX_MARK_MEMBER_NAME(Keyboard_obj::Z,"Z");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_0,"NUMPAD_0");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_1,"NUMPAD_1");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_2,"NUMPAD_2");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_3,"NUMPAD_3");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_4,"NUMPAD_4");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_5,"NUMPAD_5");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_6,"NUMPAD_6");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_7,"NUMPAD_7");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_8,"NUMPAD_8");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_9,"NUMPAD_9");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_MULTIPLY,"NUMPAD_MULTIPLY");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_ADD,"NUMPAD_ADD");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_ENTER,"NUMPAD_ENTER");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_SUBTRACT,"NUMPAD_SUBTRACT");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_DECIMAL,"NUMPAD_DECIMAL");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_DIVIDE,"NUMPAD_DIVIDE");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F1,"F1");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F2,"F2");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F3,"F3");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F4,"F4");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F5,"F5");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F6,"F6");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F7,"F7");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F8,"F8");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F9,"F9");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F10,"F10");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F11,"F11");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F12,"F12");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F13,"F13");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F14,"F14");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F15,"F15");
	HX_MARK_MEMBER_NAME(Keyboard_obj::BACKSPACE,"BACKSPACE");
	HX_MARK_MEMBER_NAME(Keyboard_obj::TAB,"TAB");
	HX_MARK_MEMBER_NAME(Keyboard_obj::ALTERNATE,"ALTERNATE");
	HX_MARK_MEMBER_NAME(Keyboard_obj::ENTER,"ENTER");
	HX_MARK_MEMBER_NAME(Keyboard_obj::COMMAND,"COMMAND");
	HX_MARK_MEMBER_NAME(Keyboard_obj::SHIFT,"SHIFT");
	HX_MARK_MEMBER_NAME(Keyboard_obj::CONTROL,"CONTROL");
	HX_MARK_MEMBER_NAME(Keyboard_obj::BREAK,"BREAK");
	HX_MARK_MEMBER_NAME(Keyboard_obj::CAPS_LOCK,"CAPS_LOCK");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD,"NUMPAD");
	HX_MARK_MEMBER_NAME(Keyboard_obj::ESCAPE,"ESCAPE");
	HX_MARK_MEMBER_NAME(Keyboard_obj::SPACE,"SPACE");
	HX_MARK_MEMBER_NAME(Keyboard_obj::PAGE_UP,"PAGE_UP");
	HX_MARK_MEMBER_NAME(Keyboard_obj::PAGE_DOWN,"PAGE_DOWN");
	HX_MARK_MEMBER_NAME(Keyboard_obj::END,"END");
	HX_MARK_MEMBER_NAME(Keyboard_obj::HOME,"HOME");
	HX_MARK_MEMBER_NAME(Keyboard_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(Keyboard_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(Keyboard_obj::UP,"UP");
	HX_MARK_MEMBER_NAME(Keyboard_obj::DOWN,"DOWN");
	HX_MARK_MEMBER_NAME(Keyboard_obj::INSERT,"INSERT");
	HX_MARK_MEMBER_NAME(Keyboard_obj::DELETE,"DELETE");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMLOCK,"NUMLOCK");
	HX_MARK_MEMBER_NAME(Keyboard_obj::SEMICOLON,"SEMICOLON");
	HX_MARK_MEMBER_NAME(Keyboard_obj::EQUAL,"EQUAL");
	HX_MARK_MEMBER_NAME(Keyboard_obj::COMMA,"COMMA");
	HX_MARK_MEMBER_NAME(Keyboard_obj::MINUS,"MINUS");
	HX_MARK_MEMBER_NAME(Keyboard_obj::PERIOD,"PERIOD");
	HX_MARK_MEMBER_NAME(Keyboard_obj::SLASH,"SLASH");
	HX_MARK_MEMBER_NAME(Keyboard_obj::BACKQUOTE,"BACKQUOTE");
	HX_MARK_MEMBER_NAME(Keyboard_obj::LEFTBRACKET,"LEFTBRACKET");
	HX_MARK_MEMBER_NAME(Keyboard_obj::BACKSLASH,"BACKSLASH");
	HX_MARK_MEMBER_NAME(Keyboard_obj::RIGHTBRACKET,"RIGHTBRACKET");
	HX_MARK_MEMBER_NAME(Keyboard_obj::QUOTE,"QUOTE");
	HX_MARK_MEMBER_NAME(Keyboard_obj::capsLock,"capsLock");
	HX_MARK_MEMBER_NAME(Keyboard_obj::numLock,"numLock");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Keyboard_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMBER_0,"NUMBER_0");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMBER_1,"NUMBER_1");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMBER_2,"NUMBER_2");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMBER_3,"NUMBER_3");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMBER_4,"NUMBER_4");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMBER_5,"NUMBER_5");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMBER_6,"NUMBER_6");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMBER_7,"NUMBER_7");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMBER_8,"NUMBER_8");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMBER_9,"NUMBER_9");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::A,"A");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::B,"B");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::C,"C");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::D,"D");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::E,"E");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F,"F");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::G,"G");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::H,"H");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::I,"I");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::J,"J");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::K,"K");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::L,"L");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::M,"M");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::N,"N");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::O,"O");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::P,"P");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::Q,"Q");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::R,"R");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::S,"S");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::T,"T");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::U,"U");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::V,"V");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::W,"W");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::X,"X");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::Y,"Y");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::Z,"Z");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_0,"NUMPAD_0");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_1,"NUMPAD_1");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_2,"NUMPAD_2");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_3,"NUMPAD_3");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_4,"NUMPAD_4");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_5,"NUMPAD_5");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_6,"NUMPAD_6");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_7,"NUMPAD_7");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_8,"NUMPAD_8");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_9,"NUMPAD_9");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_MULTIPLY,"NUMPAD_MULTIPLY");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_ADD,"NUMPAD_ADD");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_ENTER,"NUMPAD_ENTER");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_SUBTRACT,"NUMPAD_SUBTRACT");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_DECIMAL,"NUMPAD_DECIMAL");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_DIVIDE,"NUMPAD_DIVIDE");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F1,"F1");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F2,"F2");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F3,"F3");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F4,"F4");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F5,"F5");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F6,"F6");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F7,"F7");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F8,"F8");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F9,"F9");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F10,"F10");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F11,"F11");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F12,"F12");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F13,"F13");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F14,"F14");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F15,"F15");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::BACKSPACE,"BACKSPACE");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::TAB,"TAB");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::ALTERNATE,"ALTERNATE");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::ENTER,"ENTER");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::COMMAND,"COMMAND");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::SHIFT,"SHIFT");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::CONTROL,"CONTROL");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::BREAK,"BREAK");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::CAPS_LOCK,"CAPS_LOCK");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD,"NUMPAD");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::ESCAPE,"ESCAPE");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::SPACE,"SPACE");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::PAGE_UP,"PAGE_UP");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::PAGE_DOWN,"PAGE_DOWN");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::END,"END");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::HOME,"HOME");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::UP,"UP");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::DOWN,"DOWN");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::INSERT,"INSERT");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::DELETE,"DELETE");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMLOCK,"NUMLOCK");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::SEMICOLON,"SEMICOLON");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::EQUAL,"EQUAL");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::COMMA,"COMMA");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::MINUS,"MINUS");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::PERIOD,"PERIOD");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::SLASH,"SLASH");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::BACKQUOTE,"BACKQUOTE");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::LEFTBRACKET,"LEFTBRACKET");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::BACKSLASH,"BACKSLASH");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::RIGHTBRACKET,"RIGHTBRACKET");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::QUOTE,"QUOTE");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::capsLock,"capsLock");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::numLock,"numLock");
};

#endif

Class Keyboard_obj::__mClass;

void Keyboard_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.ui.Keyboard"), hx::TCanCast< Keyboard_obj> ,sStaticFields,sMemberFields,
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

void Keyboard_obj::__boot()
{
	NUMBER_0= (int)48;
	NUMBER_1= (int)49;
	NUMBER_2= (int)50;
	NUMBER_3= (int)51;
	NUMBER_4= (int)52;
	NUMBER_5= (int)53;
	NUMBER_6= (int)54;
	NUMBER_7= (int)55;
	NUMBER_8= (int)56;
	NUMBER_9= (int)57;
	A= (int)65;
	B= (int)66;
	C= (int)67;
	D= (int)68;
	E= (int)69;
	F= (int)70;
	G= (int)71;
	H= (int)72;
	I= (int)73;
	J= (int)74;
	K= (int)75;
	L= (int)76;
	M= (int)77;
	N= (int)78;
	O= (int)79;
	P= (int)80;
	Q= (int)81;
	R= (int)82;
	S= (int)83;
	T= (int)84;
	U= (int)85;
	V= (int)86;
	W= (int)87;
	X= (int)88;
	Y= (int)89;
	Z= (int)90;
	NUMPAD_0= (int)96;
	NUMPAD_1= (int)97;
	NUMPAD_2= (int)98;
	NUMPAD_3= (int)99;
	NUMPAD_4= (int)100;
	NUMPAD_5= (int)101;
	NUMPAD_6= (int)102;
	NUMPAD_7= (int)103;
	NUMPAD_8= (int)104;
	NUMPAD_9= (int)105;
	NUMPAD_MULTIPLY= (int)106;
	NUMPAD_ADD= (int)107;
	NUMPAD_ENTER= (int)108;
	NUMPAD_SUBTRACT= (int)109;
	NUMPAD_DECIMAL= (int)110;
	NUMPAD_DIVIDE= (int)111;
	F1= (int)112;
	F2= (int)113;
	F3= (int)114;
	F4= (int)115;
	F5= (int)116;
	F6= (int)117;
	F7= (int)118;
	F8= (int)119;
	F9= (int)120;
	F10= (int)121;
	F11= (int)122;
	F12= (int)123;
	F13= (int)124;
	F14= (int)125;
	F15= (int)126;
	BACKSPACE= (int)8;
	TAB= (int)9;
	ALTERNATE= (int)18;
	ENTER= (int)13;
	COMMAND= (int)15;
	SHIFT= (int)16;
	CONTROL= (int)17;
	BREAK= (int)19;
	CAPS_LOCK= (int)20;
	NUMPAD= (int)21;
	ESCAPE= (int)27;
	SPACE= (int)32;
	PAGE_UP= (int)33;
	PAGE_DOWN= (int)34;
	END= (int)35;
	HOME= (int)36;
	LEFT= (int)37;
	RIGHT= (int)39;
	UP= (int)38;
	DOWN= (int)40;
	INSERT= (int)45;
	DELETE= (int)46;
	NUMLOCK= (int)144;
	SEMICOLON= (int)186;
	EQUAL= (int)187;
	COMMA= (int)188;
	MINUS= (int)189;
	PERIOD= (int)190;
	SLASH= (int)191;
	BACKQUOTE= (int)192;
	LEFTBRACKET= (int)219;
	BACKSLASH= (int)220;
	RIGHTBRACKET= (int)221;
	QUOTE= (int)222;
}

} // end namespace openfl
} // end namespace ui
