#ifndef INCLUDED_openfl_system_Capabilities
#define INCLUDED_openfl_system_Capabilities

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,system,Capabilities)
HX_DECLARE_CLASS2(openfl,system,TouchscreenType)
namespace openfl{
namespace system{


class HXCPP_CLASS_ATTRIBUTES  Capabilities_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Capabilities_obj OBJ_;
		Capabilities_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Capabilities_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Capabilities_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Capabilities"); }

		static bool avHardwareDisable;
		static ::String cpuArchitecture;
		static bool hasAccessibility;
		static bool hasAudio;
		static bool hasAudioEncoder;
		static bool hasEmbeddedVideo;
		static bool hasIME;
		static bool hasMP3;
		static bool hasPrinting;
		static bool hasScreenBroadcast;
		static bool hasScreenPlayback;
		static bool hasStreamingAudio;
		static bool hasStreamingVideo;
		static bool hasTLS;
		static bool hasVideoEncoder;
		static bool isDebugger;
		static bool isEmbeddedInAcrobat;
		static ::String language;
		static bool localFileReadDisable;
		static ::String manufacturer;
		static int maxLevelIDC;
		static ::String os;
		static Float pixelAspectRatio;
		static ::String playerType;
		static ::String screenColor;
		static Float screenDPI;
		static Float screenResolutionX;
		static Float screenResolutionY;
		static ::String serverString;
		static bool supports32BitProcesses;
		static bool supports64BitProcesses;
		static ::openfl::system::TouchscreenType touchscreenType;
		static ::String version;
		static bool hasMultiChannelAudio( ::String type);
		static Dynamic hasMultiChannelAudio_dyn();

		static ::String get_os( );
		static Dynamic get_os_dyn();

		static Float get_pixelAspectRatio( );
		static Dynamic get_pixelAspectRatio_dyn();

		static Float get_screenDPI( );
		static Dynamic get_screenDPI_dyn();

		static Float get_screenResolutionX( );
		static Dynamic get_screenResolutionX_dyn();

		static Float get_screenResolutionY( );
		static Dynamic get_screenResolutionY_dyn();

		static ::String get_language( );
		static Dynamic get_language_dyn();

		static ::String get_version( );
		static Dynamic get_version_dyn();

};

} // end namespace openfl
} // end namespace system

#endif /* INCLUDED_openfl_system_Capabilities */ 
