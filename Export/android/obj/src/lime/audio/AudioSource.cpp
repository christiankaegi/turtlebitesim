#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_Event
#include <lime/app/Event.h>
#endif
#ifndef INCLUDED_lime_audio_ALAudioContext
#include <lime/audio/ALAudioContext.h>
#endif
#ifndef INCLUDED_lime_audio_ALCAudioContext
#include <lime/audio/ALCAudioContext.h>
#endif
#ifndef INCLUDED_lime_audio_AudioBuffer
#include <lime/audio/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_audio_AudioContext
#include <lime/audio/AudioContext.h>
#endif
#ifndef INCLUDED_lime_audio_AudioManager
#include <lime/audio/AudioManager.h>
#endif
#ifndef INCLUDED_lime_audio_AudioSource
#include <lime/audio/AudioSource.h>
#endif
#ifndef INCLUDED_lime_audio_openal_AL
#include <lime/audio/openal/AL.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
namespace lime{
namespace audio{

Void AudioSource_obj::__construct(::lime::audio::AudioBuffer buffer,hx::Null< int >  __o_offset,Dynamic length,hx::Null< int >  __o_loops)
{
HX_STACK_FRAME("lime.audio.AudioSource","new",0x2bd91bf2,"lime.audio.AudioSource.new","lime/audio/AudioSource.hx",13,0x17352e00)
HX_STACK_THIS(this)
HX_STACK_ARG(buffer,"buffer")
HX_STACK_ARG(__o_offset,"offset")
HX_STACK_ARG(length,"length")
HX_STACK_ARG(__o_loops,"loops")
int offset = __o_offset.Default(0);
int loops = __o_loops.Default(0);
{
	HX_STACK_LINE(16)
	this->onComplete = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(41)
	this->buffer = buffer;
	HX_STACK_LINE(42)
	this->offset = offset;
	HX_STACK_LINE(44)
	if (((bool((length != null())) && bool((length != (int)0))))){
		HX_STACK_LINE(46)
		this->set_length(length);
	}
	HX_STACK_LINE(50)
	this->loops = loops;
	HX_STACK_LINE(51)
	this->id = (int)0;
	HX_STACK_LINE(53)
	if (((buffer != null()))){
		HX_STACK_LINE(55)
		this->init();
	}
}
;
	return null();
}

//AudioSource_obj::~AudioSource_obj() { }

Dynamic AudioSource_obj::__CreateEmpty() { return  new AudioSource_obj; }
hx::ObjectPtr< AudioSource_obj > AudioSource_obj::__new(::lime::audio::AudioBuffer buffer,hx::Null< int >  __o_offset,Dynamic length,hx::Null< int >  __o_loops)
{  hx::ObjectPtr< AudioSource_obj > result = new AudioSource_obj();
	result->__construct(buffer,__o_offset,length,__o_loops);
	return result;}

Dynamic AudioSource_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AudioSource_obj > result = new AudioSource_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void AudioSource_obj::dispose( ){
{
		HX_STACK_FRAME("lime.audio.AudioSource","dispose",0xab53fd31,"lime.audio.AudioSource.dispose","lime/audio/AudioSource.hx",64,0x17352e00)
		HX_STACK_THIS(this)
		HX_STACK_LINE(64)
		{
			HX_STACK_LINE(64)
			::lime::audio::AudioContext _g = ::lime::audio::AudioManager_obj::context;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(64)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(64)
					::lime::audio::ALAudioContext al = (::lime::audio::AudioContext(_g))->__Param(1);		HX_STACK_VAR(al,"al");
					HX_STACK_LINE(64)
					::lime::audio::ALCAudioContext alc = (::lime::audio::AudioContext(_g))->__Param(0);		HX_STACK_VAR(alc,"alc");
					struct _Function_3_1{
						inline static Float Block( hx::ObjectPtr< ::lime::audio::AudioSource_obj > __this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/audio/AudioSource.hx",68,0x17352e00)
							{
								HX_STACK_LINE(68)
								int _int = __this->id;		HX_STACK_VAR(_int,"int");
								HX_STACK_LINE(68)
								return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
							}
							return null();
						}
					};
					HX_STACK_LINE(68)
					if (((_Function_3_1::Block(this) != (int)0))){
						HX_STACK_LINE(70)
						al->deleteSource(this->id);
					}
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,dispose,(void))

Void AudioSource_obj::init( ){
{
		HX_STACK_FRAME("lime.audio.AudioSource","init",0x2ed80f3e,"lime.audio.AudioSource.init","lime/audio/AudioSource.hx",83,0x17352e00)
		HX_STACK_THIS(this)
		HX_STACK_LINE(83)
		{
			HX_STACK_LINE(83)
			::lime::audio::AudioContext _g = ::lime::audio::AudioManager_obj::context;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(83)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(83)
					::lime::audio::ALAudioContext al = (::lime::audio::AudioContext(_g))->__Param(1);		HX_STACK_VAR(al,"al");
					HX_STACK_LINE(83)
					::lime::audio::ALCAudioContext alc = (::lime::audio::AudioContext(_g))->__Param(0);		HX_STACK_VAR(alc,"alc");
					HX_STACK_LINE(85)
					{
						struct _Function_4_1{
							inline static Float Block( hx::ObjectPtr< ::lime::audio::AudioSource_obj > __this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/audio/AudioSource.hx",87,0x17352e00)
								{
									HX_STACK_LINE(87)
									int _int = __this->buffer->id;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(87)
									return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
								}
								return null();
							}
						};
						HX_STACK_LINE(87)
						if (((_Function_4_1::Block(this) == (int)0))){
							HX_STACK_LINE(89)
							int _g1 = al->genBuffer();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(89)
							this->buffer->id = _g1;
							HX_STACK_LINE(91)
							int format = (int)0;		HX_STACK_VAR(format,"format");
							HX_STACK_LINE(93)
							if (((this->buffer->channels == (int)1))){
								HX_STACK_LINE(95)
								if (((this->buffer->bitsPerSample == (int)8))){
									HX_STACK_LINE(97)
									format = al->FORMAT_MONO8;
								}
								else{
									HX_STACK_LINE(99)
									if (((this->buffer->bitsPerSample == (int)16))){
										HX_STACK_LINE(101)
										format = al->FORMAT_MONO16;
									}
								}
							}
							else{
								HX_STACK_LINE(105)
								if (((this->buffer->channels == (int)2))){
									HX_STACK_LINE(107)
									if (((this->buffer->bitsPerSample == (int)8))){
										HX_STACK_LINE(109)
										format = al->FORMAT_STEREO8;
									}
									else{
										HX_STACK_LINE(111)
										if (((this->buffer->bitsPerSample == (int)16))){
											HX_STACK_LINE(113)
											format = al->FORMAT_STEREO16;
										}
									}
								}
							}
							HX_STACK_LINE(119)
							al->bufferData(this->buffer->id,format,this->buffer->data,this->buffer->data->length,this->buffer->sampleRate);
						}
						HX_STACK_LINE(123)
						int _g1 = al->genSource();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(123)
						this->id = _g1;
						HX_STACK_LINE(124)
						al->sourcei(this->id,al->BUFFER,this->buffer->id);
					}
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,init,(void))

Void AudioSource_obj::play( ){
{
		HX_STACK_FRAME("lime.audio.AudioSource","play",0x33770222,"lime.audio.AudioSource.play","lime/audio/AudioSource.hx",133,0x17352e00)
		HX_STACK_THIS(this)
		HX_STACK_LINE(143)
		if ((this->playing)){
			HX_STACK_LINE(145)
			return null();
		}
		HX_STACK_LINE(149)
		this->playing = true;
		HX_STACK_LINE(151)
		int time = this->get_currentTime();		HX_STACK_VAR(time,"time");
		HX_STACK_LINE(153)
		::lime::audio::openal::AL_obj::sourcePlay(this->id);
		HX_STACK_LINE(155)
		this->set_currentTime(time);
		HX_STACK_LINE(157)
		if (((this->timer != null()))){
			HX_STACK_LINE(159)
			this->timer->stop();
		}
		HX_STACK_LINE(163)
		int _g = this->get_length();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(163)
		int _g1 = this->get_currentTime();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(163)
		int _g2 = (_g - _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(163)
		::haxe::Timer _g3 = ::haxe::Timer_obj::__new(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(163)
		this->timer = _g3;
		HX_STACK_LINE(164)
		this->timer->run = this->timer_onRun_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,play,(void))

Void AudioSource_obj::pause( ){
{
		HX_STACK_FRAME("lime.audio.AudioSource","pause",0xcd74ab08,"lime.audio.AudioSource.pause","lime/audio/AudioSource.hx",171,0x17352e00)
		HX_STACK_THIS(this)
		HX_STACK_LINE(185)
		this->playing = false;
		HX_STACK_LINE(186)
		::lime::audio::openal::AL_obj::sourcePause(this->id);
		HX_STACK_LINE(188)
		if (((this->timer != null()))){
			HX_STACK_LINE(190)
			this->timer->stop();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,pause,(void))

Void AudioSource_obj::stop( ){
{
		HX_STACK_FRAME("lime.audio.AudioSource","stop",0x3578c430,"lime.audio.AudioSource.stop","lime/audio/AudioSource.hx",199,0x17352e00)
		HX_STACK_THIS(this)
		HX_STACK_LINE(209)
		this->playing = false;
		HX_STACK_LINE(210)
		::lime::audio::openal::AL_obj::sourceStop(this->id);
		HX_STACK_LINE(212)
		if (((this->timer != null()))){
			HX_STACK_LINE(214)
			this->timer->stop();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,stop,(void))

Void AudioSource_obj::timer_onRun( ){
{
		HX_STACK_FRAME("lime.audio.AudioSource","timer_onRun",0x17df51c4,"lime.audio.AudioSource.timer_onRun","lime/audio/AudioSource.hx",230,0x17352e00)
		HX_STACK_THIS(this)
		HX_STACK_LINE(234)
		this->playing = false;
		HX_STACK_LINE(236)
		if (((this->loops > (int)0))){
			HX_STACK_LINE(238)
			(this->loops)--;
			HX_STACK_LINE(239)
			this->set_currentTime((int)0);
			HX_STACK_LINE(240)
			this->play();
			HX_STACK_LINE(241)
			return null();
		}
		else{
			HX_STACK_LINE(245)
			::lime::audio::openal::AL_obj::sourceStop(this->id);
			HX_STACK_LINE(246)
			this->timer->stop();
		}
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(52)
			Dynamic listeners = this->onComplete->listeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(53)
			Array< bool > repeat = this->onComplete->repeat;		HX_STACK_VAR(repeat,"repeat");
			HX_STACK_LINE(54)
			int length = listeners->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(55)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(57)
			while((true)){
				HX_STACK_LINE(57)
				if ((!(((i < length))))){
					HX_STACK_LINE(57)
					break;
				}
				HX_STACK_LINE(59)
				listeners->__GetItem(i)().Cast< Void >();
				HX_STACK_LINE(61)
				if ((!(repeat->__get(i)))){
					HX_STACK_LINE(63)
					this->onComplete->remove(listeners->__GetItem(i));
					HX_STACK_LINE(64)
					(length)--;
				}
				else{
					HX_STACK_LINE(68)
					(i)++;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,timer_onRun,(void))

int AudioSource_obj::get_currentTime( ){
	HX_STACK_FRAME("lime.audio.AudioSource","get_currentTime",0x5201bb0f,"lime.audio.AudioSource.get_currentTime","lime/audio/AudioSource.hx",264,0x17352e00)
	HX_STACK_THIS(this)
	HX_STACK_LINE(276)
	Float _g = ::lime::audio::openal::AL_obj::getSourcef(this->id,(int)4132);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(276)
	Float _g1 = (_g * (int)1000);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(276)
	int _g2 = ::Std_obj::_int(_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(276)
	int time = (_g2 - this->offset);		HX_STACK_VAR(time,"time");
	HX_STACK_LINE(277)
	if (((time < (int)0))){
		HX_STACK_LINE(277)
		return (int)0;
	}
	HX_STACK_LINE(278)
	return time;
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,get_currentTime,return )

int AudioSource_obj::set_currentTime( int value){
	HX_STACK_FRAME("lime.audio.AudioSource","set_currentTime",0x4dcd381b,"lime.audio.AudioSource.set_currentTime","lime/audio/AudioSource.hx",285,0x17352e00)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(299)
	if (((this->buffer != null()))){
		HX_STACK_LINE(301)
		::lime::audio::openal::AL_obj::sourceRewind(this->id);
		HX_STACK_LINE(302)
		::lime::audio::openal::AL_obj::sourcef(this->id,(int)4132,(Float(((value + this->offset))) / Float((int)1000)));
		HX_STACK_LINE(303)
		if ((this->playing)){
			HX_STACK_LINE(303)
			::lime::audio::openal::AL_obj::sourcePlay(this->id);
		}
	}
	HX_STACK_LINE(307)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,set_currentTime,return )

Float AudioSource_obj::get_gain( ){
	HX_STACK_FRAME("lime.audio.AudioSource","get_gain",0xda9f2f36,"lime.audio.AudioSource.get_gain","lime/audio/AudioSource.hx",326,0x17352e00)
	HX_STACK_THIS(this)
	HX_STACK_LINE(326)
	return ::lime::audio::openal::AL_obj::getSourcef(this->id,(int)4106);
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,get_gain,return )

Float AudioSource_obj::set_gain( Float value){
	HX_STACK_FRAME("lime.audio.AudioSource","set_gain",0x88fc88aa,"lime.audio.AudioSource.set_gain","lime/audio/AudioSource.hx",333,0x17352e00)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(348)
	::lime::audio::openal::AL_obj::sourcef(this->id,(int)4106,value);
	HX_STACK_LINE(349)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,set_gain,return )

int AudioSource_obj::get_length( ){
	HX_STACK_FRAME("lime.audio.AudioSource","get_length",0x74de2f5d,"lime.audio.AudioSource.get_length","lime/audio/AudioSource.hx",356,0x17352e00)
	HX_STACK_THIS(this)
	HX_STACK_LINE(358)
	if (((this->__length != null()))){
		HX_STACK_LINE(360)
		return this->__length;
	}
	HX_STACK_LINE(374)
	Float samples = (Float((this->buffer->data->length * (int)8)) / Float(((this->buffer->channels * this->buffer->bitsPerSample))));		HX_STACK_VAR(samples,"samples");
	HX_STACK_LINE(375)
	int _g = ::Std_obj::_int(((Float(samples) / Float(this->buffer->sampleRate)) * (int)1000));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(375)
	return (_g - this->offset);
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,get_length,return )

int AudioSource_obj::set_length( int value){
	HX_STACK_FRAME("lime.audio.AudioSource","set_length",0x785bcdd1,"lime.audio.AudioSource.set_length","lime/audio/AudioSource.hx",384,0x17352e00)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(384)
	return this->__length = value;
}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,set_length,return )


AudioSource_obj::AudioSource_obj()
{
}

void AudioSource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AudioSource);
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(loops,"loops");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(playing,"playing");
	HX_MARK_MEMBER_NAME(pauseTime,"pauseTime");
	HX_MARK_MEMBER_NAME(__length,"__length");
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_END_CLASS();
}

void AudioSource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(loops,"loops");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(playing,"playing");
	HX_VISIT_MEMBER_NAME(pauseTime,"pauseTime");
	HX_VISIT_MEMBER_NAME(__length,"__length");
	HX_VISIT_MEMBER_NAME(timer,"timer");
}

Dynamic AudioSource_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"gain") ) { return get_gain(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"loops") ) { return loops; }
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		if (HX_FIELD_EQ(inName,"length") ) { return get_length(); }
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"playing") ) { return playing; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__length") ) { return __length; }
		if (HX_FIELD_EQ(inName,"get_gain") ) { return get_gain_dyn(); }
		if (HX_FIELD_EQ(inName,"set_gain") ) { return set_gain_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pauseTime") ) { return pauseTime; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete; }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return set_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentTime") ) { return get_currentTime(); }
		if (HX_FIELD_EQ(inName,"timer_onRun") ) { return timer_onRun_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_currentTime") ) { return get_currentTime_dyn(); }
		if (HX_FIELD_EQ(inName,"set_currentTime") ) { return set_currentTime_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AudioSource_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"gain") ) { return set_gain(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"loops") ) { loops=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::lime::audio::AudioBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { return set_length(inValue); }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"playing") ) { playing=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__length") ) { __length=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pauseTime") ) { pauseTime=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast< ::lime::app::Event >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentTime") ) { return set_currentTime(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AudioSource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("onComplete"));
	outFields->push(HX_CSTRING("buffer"));
	outFields->push(HX_CSTRING("currentTime"));
	outFields->push(HX_CSTRING("gain"));
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("loops"));
	outFields->push(HX_CSTRING("offset"));
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("playing"));
	outFields->push(HX_CSTRING("pauseTime"));
	outFields->push(HX_CSTRING("__length"));
	outFields->push(HX_CSTRING("timer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(AudioSource_obj,onComplete),HX_CSTRING("onComplete")},
	{hx::fsObject /*::lime::audio::AudioBuffer*/ ,(int)offsetof(AudioSource_obj,buffer),HX_CSTRING("buffer")},
	{hx::fsInt,(int)offsetof(AudioSource_obj,loops),HX_CSTRING("loops")},
	{hx::fsInt,(int)offsetof(AudioSource_obj,offset),HX_CSTRING("offset")},
	{hx::fsInt,(int)offsetof(AudioSource_obj,id),HX_CSTRING("id")},
	{hx::fsBool,(int)offsetof(AudioSource_obj,playing),HX_CSTRING("playing")},
	{hx::fsInt,(int)offsetof(AudioSource_obj,pauseTime),HX_CSTRING("pauseTime")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AudioSource_obj,__length),HX_CSTRING("__length")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(AudioSource_obj,timer),HX_CSTRING("timer")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("onComplete"),
	HX_CSTRING("buffer"),
	HX_CSTRING("loops"),
	HX_CSTRING("offset"),
	HX_CSTRING("id"),
	HX_CSTRING("playing"),
	HX_CSTRING("pauseTime"),
	HX_CSTRING("__length"),
	HX_CSTRING("timer"),
	HX_CSTRING("dispose"),
	HX_CSTRING("init"),
	HX_CSTRING("play"),
	HX_CSTRING("pause"),
	HX_CSTRING("stop"),
	HX_CSTRING("timer_onRun"),
	HX_CSTRING("get_currentTime"),
	HX_CSTRING("set_currentTime"),
	HX_CSTRING("get_gain"),
	HX_CSTRING("set_gain"),
	HX_CSTRING("get_length"),
	HX_CSTRING("set_length"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioSource_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioSource_obj::__mClass,"__mClass");
};

#endif

Class AudioSource_obj::__mClass;

void AudioSource_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.audio.AudioSource"), hx::TCanCast< AudioSource_obj> ,sStaticFields,sMemberFields,
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

void AudioSource_obj::__boot()
{
}

} // end namespace lime
} // end namespace audio
