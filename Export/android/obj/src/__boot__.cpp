#include <hxcpp.h>

#include <view/mediator/lines/RegisterMediator.h>
#include <view/mediator/lines/RamMediator.h>
#include <view/mediator/lines/ProgramcounterMediator.h>
#include <view/mediator/lines/MultiplexerMediator.h>
#include <view/mediator/lines/MainBusMediator.h>
#include <view/mediator/lines/GatesMediator.h>
#include <view/mediator/lines/EnablerMediator.h>
#include <view/mediator/lines/DecoderMediator.h>
#include <view/mediator/lines/ComparatorMediator.h>
#include <view/mediator/lines/ClockMediator.h>
#include <view/mediator/lines/BottomLayerMediator.h>
#include <view/mediator/lines/AluMediator.h>
#include <view/mediator/lines/AccumulatorMediator.h>
#include <view/mediator/WelcomeMediator.h>
#include <view/mediator/TopLayerMediator.h>
#include <view/mediator/OverlayMediator.h>
#include <view/mediator/OutputMediator.h>
#include <view/mediator/MainMenuMediator.h>
#include <view/mediator/InstructionDisplayMediator.h>
#include <view/mediator/HotspotMediator.h>
#include <view/mediator/HighlightMediator.h>
#include <view/mediator/EnterInstructionMediator.h>
#include <view/mediator/EditRomMediator.h>
#include <view/mediator/DisplayMediator.h>
#include <view/mediator/DetailAccumulatorMediator.h>
#include <view/elements/SimpleRectangle.h>
#include <view/elements/RomRow.h>
#include <view/elements/RomRamDisplay.h>
#include <view/elements/OpcodeMenu.h>
#include <view/elements/OneBitMemory.h>
#include <view/elements/LabelButton.h>
#include <view/elements/DetailAccumulatorLines.h>
#include <view/component/lines/Register.h>
#include <view/component/lines/Ram.h>
#include <view/component/lines/Programcounter.h>
#include <view/component/lines/Multiplexer.h>
#include <view/component/lines/MainBus.h>
#include <view/component/lines/Gates.h>
#include <view/component/lines/Enabler.h>
#include <view/component/lines/Decoder.h>
#include <view/component/lines/Comparator.h>
#include <view/component/lines/Clock.h>
#include <view/component/lines/BottomLayer.h>
#include <view/component/lines/Alu.h>
#include <view/component/lines/Accumulator.h>
#include <view/component/Welcome.h>
#include <view/component/TopLayer.h>
#include <view/component/Overlay.h>
#include <view/component/Output.h>
#include <view/component/MainMenu.h>
#include <view/component/InstructionDisplay.h>
#include <view/component/Hotspot.h>
#include <view/component/Highlight.h>
#include <view/component/EnterInstruction.h>
#include <view/component/EditRom.h>
#include <view/component/Display.h>
#include <view/component/DetailAccumulator.h>
#include <utilities/TextFieldFactory.h>
#include <utilities/NumberFormat.h>
#include <org/puremvc/haxe/multicore/patterns/observer/Observer.h>
#include <org/puremvc/haxe/multicore/patterns/observer/Notification.h>
#include <org/puremvc/haxe/multicore/interfaces/IObserver.h>
#include <org/puremvc/haxe/multicore/interfaces/INotification.h>
#include <org/puremvc/haxe/multicore/core/View.h>
#include <org/puremvc/haxe/multicore/interfaces/IView.h>
#include <org/puremvc/haxe/multicore/core/Model.h>
#include <org/puremvc/haxe/multicore/interfaces/IModel.h>
#include <org/puremvc/haxe/multicore/core/Controller.h>
#include <org/puremvc/haxe/multicore/interfaces/IController.h>
#include <openfl/utils/Endian.h>
#include <openfl/text/TextFieldType.h>
#include <openfl/text/TextFieldAutoSize.h>
#include <openfl/text/GridFitType.h>
#include <openfl/text/AntiAliasType.h>
#include <openfl/system/SecurityDomain.h>
#include <openfl/system/LoaderContext.h>
#include <openfl/system/ApplicationDomain.h>
#include <openfl/net/URLVariables.h>
#include <openfl/net/URLRequestHeader.h>
#include <openfl/net/URLLoaderDataFormat.h>
#include <openfl/media/SoundTransform.h>
#include <openfl/media/SoundLoaderContext.h>
#include <openfl/media/ID3Info.h>
#include <openfl/geom/Vector3D.h>
#include <openfl/geom/Orientation3D.h>
#include <openfl/geom/Matrix3D.h>
#include <openfl/events/UncaughtErrorEvents.h>
#include <openfl/events/UncaughtErrorEvent.h>
#include <openfl/events/TimerEvent.h>
#include <openfl/events/SampleDataEvent.h>
#include <openfl/events/ProgressEvent.h>
#include <openfl/events/JoystickEvent.h>
#include <openfl/events/IOErrorEvent.h>
#include <openfl/events/FocusEvent.h>
#include <openfl/events/EventPhase.h>
#include <openfl/events/ErrorEvent.h>
#include <openfl/events/TextEvent.h>
#include <openfl/errors/RangeError.h>
#include <openfl/errors/EOFError.h>
#include <openfl/errors/ArgumentError.h>
#include <openfl/errors/Error.h>
#include <openfl/display3D/textures/Texture.h>
#include <openfl/display3D/textures/RectangleTexture.h>
#include <openfl/display3D/textures/CubeTexture.h>
#include <openfl/display3D/textures/TextureBase.h>
#include <openfl/display3D/VertexBuffer3D.h>
#include <openfl/display3D/Program3D.h>
#include <openfl/display3D/IndexBuffer3D.h>
#include <openfl/display3D/Context3DWrapMode.h>
#include <openfl/display3D/Context3DVertexBufferFormat.h>
#include <openfl/display3D/_Context3DTriangleFace/Context3DTriangleFace_Impl_.h>
#include <openfl/display3D/Context3DTextureFormat.h>
#include <openfl/display3D/Context3DTextureFilter.h>
#include <openfl/display3D/Context3DProgramType.h>
#include <openfl/display3D/Context3DMipFilter.h>
#include <openfl/display3D/Context3DClearMask.h>
#include <openfl/display3D/_Context3D/SamplerState.h>
#include <openfl/display3D/Context3D.h>
#include <openfl/display/StageScaleMode.h>
#include <openfl/display/StageDisplayState.h>
#include <openfl/display/StageAlign.h>
#include <openfl/display/Stage3D.h>
#include <openfl/display/PixelSnapping.h>
#include <openfl/display/PNGEncoderOptions.h>
#include <openfl/display/JPEGEncoderOptions.h>
#include <openfl/display/InterpolationMethod.h>
#include <openfl/display/GraphicsPathWinding.h>
#include <openfl/display/GradientType.h>
#include <openfl/display/FrameLabel.h>
#include <openfl/display/BitmapDataChannel.h>
#include <openfl/_legacy/utils/WeakRef.h>
#include <openfl/_legacy/utils/UInt8Array.h>
#include <openfl/_legacy/utils/Timer.h>
#include <openfl/_legacy/utils/JNIStaticField.h>
#include <openfl/_legacy/utils/JNIMemberField.h>
#include <openfl/_legacy/utils/Int16Array.h>
#include <openfl/_legacy/utils/Float32Array.h>
#include <openfl/_legacy/utils/CompressionAlgorithm.h>
#include <openfl/_legacy/utils/ByteArray.h>
#include <openfl/_legacy/utils/IDataInput.h>
#include <openfl/_legacy/utils/IDataOutput.h>
#include <openfl/_legacy/utils/ArrayBufferView.h>
#include <openfl/_legacy/utils/IMemoryRange.h>
#include <openfl/_legacy/ui/Keyboard.h>
#include <openfl/_legacy/text/TextLineMetrics.h>
#include <openfl/_legacy/text/TextFormatAlign.h>
#include <openfl/_legacy/text/TextFormat.h>
#include <openfl/_legacy/text/TextField.h>
#include <openfl/_legacy/text/FontType.h>
#include <openfl/_legacy/text/FontStyle.h>
#include <openfl/_legacy/system/ScreenMode.h>
#include <openfl/_legacy/system/PixelFormat.h>
#include <openfl/_legacy/net/URLRequestMethod.h>
#include <openfl/_legacy/net/URLRequest.h>
#include <openfl/_legacy/net/_URLLoader/URLLoadersManager.h>
#include <openfl/_legacy/net/_URLLoader/ManagersThreadMessage.h>
#include <openfl/_legacy/media/AudioThreadState.h>
#include <openfl/_legacy/media/SoundChannel.h>
#include <openfl/_legacy/media/InternalAudioType.h>
#include <openfl/_legacy/media/Sound.h>
#include <openfl/_legacy/gl/GLTexture.h>
#include <openfl/_legacy/gl/GLShader.h>
#include <openfl/_legacy/gl/GLRenderbuffer.h>
#include <openfl/_legacy/gl/GLProgram.h>
#include <openfl/_legacy/gl/GLFramebuffer.h>
#include <openfl/_legacy/gl/GLBuffer.h>
#include <openfl/_legacy/gl/GLObject.h>
#include <openfl/_legacy/gl/_GL/Float32Data_Impl_.h>
#include <openfl/_legacy/gl/GL.h>
#include <openfl/_legacy/geom/Transform.h>
#include <openfl/_legacy/geom/Rectangle.h>
#include <openfl/_legacy/geom/Matrix.h>
#include <openfl/_legacy/geom/ColorTransform.h>
#include <openfl/_legacy/filters/BitmapFilter.h>
#include <openfl/_legacy/events/SystemEvent.h>
#include <openfl/_legacy/events/KeyboardEvent.h>
#include <openfl/_legacy/events/HTTPStatusEvent.h>
#include <openfl/_legacy/events/_EventDispatcher/Listener.h>
#include <openfl/_legacy/display/TriangleCulling.h>
#include <openfl/_legacy/display/Tilesheet.h>
#include <openfl/_legacy/geom/Point.h>
#include <openfl/_legacy/display/StageQuality.h>
#include <openfl/_legacy/display/TouchInfo.h>
#include <openfl/_legacy/display/SpreadMethod.h>
#include <openfl/_legacy/display/Shape.h>
#include <openfl/_legacy/display/OpenGLView.h>
#include <openfl/_legacy/display/MovieClip.h>
#include <openfl/_legacy/display/ManagedStage.h>
#include <openfl/_legacy/display/LoaderInfo.h>
#include <openfl/_legacy/net/URLLoader.h>
#include <openfl/_legacy/display/Loader.h>
#include <openfl/_legacy/display/LineScaleMode.h>
#include <openfl/_legacy/display/JointStyle.h>
#include <openfl/_legacy/display/IGraphicsData.h>
#include <openfl/_legacy/display/Graphics.h>
#include <openfl/_legacy/display/DirectRenderer.h>
#include <openfl/_legacy/display/CapsStyle.h>
#include <openfl/_legacy/display/BlendMode.h>
#include <openfl/_legacy/display/OptimizedPerlin.h>
#include <openfl/_legacy/display/BitmapData.h>
#include <openfl/_legacy/display/Bitmap.h>
#include <openfl/_legacy/Memory.h>
#include <openfl/_legacy/AssetType.h>
#include <openfl/_legacy/AssetData.h>
#include <openfl/_legacy/Assets.h>
#include <openfl/_legacy/AssetCache.h>
#include <openfl/_legacy/IAssetCache.h>
#include <openfl/_Vector/Vector_Impl_.h>
#include <model/vo/SnapshotVO.h>
#include <model/vo/InstructionVO.h>
#include <model/vo/FrequencyVO.h>
#include <model/vo/DecHexVO.h>
#include <model/proxy/SnapshotProxy.h>
#include <model/proxy/ProgramProxy.h>
#include <model/proxy/ClockProxy.h>
#include <model/proxy/AppProxy.h>
#include <org/puremvc/haxe/multicore/patterns/proxy/Proxy.h>
#include <org/puremvc/haxe/multicore/interfaces/IProxy.h>
#include <model/data/SnapshotData.h>
#include <model/data/ProgramData.h>
#include <model/data/ClockData.h>
#include <model/data/AppData.h>
#include <haxe/zip/Uncompress.h>
#include <haxe/zip/FlushMode.h>
#include <haxe/zip/Compress.h>
#include <haxe/io/Error.h>
#include <haxe/io/Eof.h>
#include <haxe/io/BytesBuffer.h>
#include <haxe/format/JsonParser.h>
#include <haxe/ds/ObjectMap.h>
#include <haxe/ds/IntMap.h>
#include <haxe/crypto/BaseCode.h>
#include <haxe/Unserializer.h>
#include <haxe/Timer.h>
#include <haxe/Resource.h>
#include <haxe/CallStack.h>
#include <haxe/StackItem.h>
#include <events/AppEvent.h>
#include <cpp/vm/Thread.h>
#include <cpp/vm/Mutex.h>
#include <cpp/rtti/FieldNumericIntegerLookup.h>
#include <controller/startup/PrepareViewCommand.h>
#include <controller/startup/PrepareModelCommand.h>
#include <controller/instruction/OpcodeSDACommand.h>
#include <controller/instruction/OpcodeMOVCommand.h>
#include <controller/instruction/OpcodeLDICommand.h>
#include <controller/instruction/OpcodeLDACommand.h>
#include <controller/instruction/OpcodeJumpCommand.h>
#include <controller/instruction/OpcodeALUCommand.h>
#include <controller/StartupCompleteCommand.h>
#include <controller/ResetCommand.h>
#include <controller/ProgramChangedCommand.h>
#include <controller/PlayCommand.h>
#include <controller/PauseCommand.h>
#include <controller/ManualModeOnCommand.h>
#include <controller/EnterInstructionCommand.h>
#include <controller/EditRomCommand.h>
#include <controller/DetailAccumulatorCommand.h>
#include <controller/ClockSignalCommand.h>
#include <controller/ChangeClockSpeedCommand.h>
#include <org/puremvc/haxe/multicore/patterns/command/SimpleCommand.h>
#include <org/puremvc/haxe/multicore/interfaces/ICommand.h>
#include <Type.h>
#include <StringTools.h>
#include <StringBuf.h>
#include <List.h>
#include <Lambda.h>
#include <__ASSET__fonts_myriadpro_regular_otf.h>
#include <__ASSET__fonts_myriadpro_bold_otf.h>
#include <__ASSET__fonts_consolas_bold_ttf.h>
#include <__ASSET__assets_fonts_myriadpro_regular_otf.h>
#include <__ASSET__assets_fonts_myriadpro_bold_otf.h>
#include <__ASSET__assets_fonts_consolas_bold_ttf.h>
#include <openfl/_legacy/text/Font.h>
#include <DefaultAssetLibrary.h>
#include <openfl/_legacy/AssetLibrary.h>
#include <Date.h>
#include <ScaledStage.h>
#include <openfl/_legacy/display/Stage.h>
#include <openfl/_legacy/utils/JNIMethod.h>
#include <haxe/Log.h>
#include <Reflect.h>
#include <openfl/_legacy/utils/JNI.h>
#include <openfl/_legacy/events/TouchEvent.h>
#include <openfl/_legacy/events/MouseEvent.h>
#include <openfl/_legacy/events/Event.h>
#include <DocumentClass.h>
#include <ApplicationMain.h>
#include <AppMediator.h>
#include <org/puremvc/haxe/multicore/patterns/mediator/Mediator.h>
#include <org/puremvc/haxe/multicore/interfaces/IMediator.h>
#include <org/puremvc/haxe/multicore/patterns/observer/Notifier.h>
#include <AppFacade.h>
#include <org/puremvc/haxe/multicore/patterns/facade/Facade.h>
#include <haxe/ds/StringMap.h>
#include <IMap.h>
#include <org/puremvc/haxe/multicore/interfaces/IFacade.h>
#include <org/puremvc/haxe/multicore/interfaces/INotifier.h>
#include <AppConstants.h>
#include <App.h>
#include <openfl/_legacy/display/Sprite.h>
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#include <openfl/_legacy/display/InteractiveObject.h>
#include <openfl/_legacy/display/DisplayObject.h>
#include <openfl/_legacy/Lib.h>
#include <Std.h>
#include <sys/io/_Process/Stdout.h>
#include <haxe/io/Input.h>
#include <haxe/io/Bytes.h>
#include <sys/io/_Process/Stdin.h>
#include <haxe/io/Output.h>
#include <sys/io/Process.h>
#include <Sys.h>
#include <cpp/Lib.h>
#include <openfl/_legacy/display/IBitmapDrawable.h>
#include <openfl/_legacy/events/EventDispatcher.h>
#include <openfl/_legacy/events/IEventDispatcher.h>

void __files__boot();

void __boot_all()
{
__files__boot();
hx::RegisterResources( hx::GetResources() );
::view::mediator::lines::RegisterMediator_obj::__register();
::view::mediator::lines::RamMediator_obj::__register();
::view::mediator::lines::ProgramcounterMediator_obj::__register();
::view::mediator::lines::MultiplexerMediator_obj::__register();
::view::mediator::lines::MainBusMediator_obj::__register();
::view::mediator::lines::GatesMediator_obj::__register();
::view::mediator::lines::EnablerMediator_obj::__register();
::view::mediator::lines::DecoderMediator_obj::__register();
::view::mediator::lines::ComparatorMediator_obj::__register();
::view::mediator::lines::ClockMediator_obj::__register();
::view::mediator::lines::BottomLayerMediator_obj::__register();
::view::mediator::lines::AluMediator_obj::__register();
::view::mediator::lines::AccumulatorMediator_obj::__register();
::view::mediator::WelcomeMediator_obj::__register();
::view::mediator::TopLayerMediator_obj::__register();
::view::mediator::OverlayMediator_obj::__register();
::view::mediator::OutputMediator_obj::__register();
::view::mediator::MainMenuMediator_obj::__register();
::view::mediator::InstructionDisplayMediator_obj::__register();
::view::mediator::HotspotMediator_obj::__register();
::view::mediator::HighlightMediator_obj::__register();
::view::mediator::EnterInstructionMediator_obj::__register();
::view::mediator::EditRomMediator_obj::__register();
::view::mediator::DisplayMediator_obj::__register();
::view::mediator::DetailAccumulatorMediator_obj::__register();
::view::elements::SimpleRectangle_obj::__register();
::view::elements::RomRow_obj::__register();
::view::elements::RomRamDisplay_obj::__register();
::view::elements::OpcodeMenu_obj::__register();
::view::elements::OneBitMemory_obj::__register();
::view::elements::LabelButton_obj::__register();
::view::elements::DetailAccumulatorLines_obj::__register();
::view::component::lines::Register_obj::__register();
::view::component::lines::Ram_obj::__register();
::view::component::lines::Programcounter_obj::__register();
::view::component::lines::Multiplexer_obj::__register();
::view::component::lines::MainBus_obj::__register();
::view::component::lines::Gates_obj::__register();
::view::component::lines::Enabler_obj::__register();
::view::component::lines::Decoder_obj::__register();
::view::component::lines::Comparator_obj::__register();
::view::component::lines::Clock_obj::__register();
::view::component::lines::BottomLayer_obj::__register();
::view::component::lines::Alu_obj::__register();
::view::component::lines::Accumulator_obj::__register();
::view::component::Welcome_obj::__register();
::view::component::TopLayer_obj::__register();
::view::component::Overlay_obj::__register();
::view::component::Output_obj::__register();
::view::component::MainMenu_obj::__register();
::view::component::InstructionDisplay_obj::__register();
::view::component::Hotspot_obj::__register();
::view::component::Highlight_obj::__register();
::view::component::EnterInstruction_obj::__register();
::view::component::EditRom_obj::__register();
::view::component::Display_obj::__register();
::view::component::DetailAccumulator_obj::__register();
::utilities::TextFieldFactory_obj::__register();
::utilities::NumberFormat_obj::__register();
::org::puremvc::haxe::multicore::patterns::observer::Observer_obj::__register();
::org::puremvc::haxe::multicore::patterns::observer::Notification_obj::__register();
::org::puremvc::haxe::multicore::interfaces::IObserver_obj::__register();
::org::puremvc::haxe::multicore::interfaces::INotification_obj::__register();
::org::puremvc::haxe::multicore::core::View_obj::__register();
::org::puremvc::haxe::multicore::interfaces::IView_obj::__register();
::org::puremvc::haxe::multicore::core::Model_obj::__register();
::org::puremvc::haxe::multicore::interfaces::IModel_obj::__register();
::org::puremvc::haxe::multicore::core::Controller_obj::__register();
::org::puremvc::haxe::multicore::interfaces::IController_obj::__register();
::openfl::utils::Endian_obj::__register();
::openfl::text::TextFieldType_obj::__register();
::openfl::text::TextFieldAutoSize_obj::__register();
::openfl::text::GridFitType_obj::__register();
::openfl::text::AntiAliasType_obj::__register();
::openfl::system::SecurityDomain_obj::__register();
::openfl::system::LoaderContext_obj::__register();
::openfl::system::ApplicationDomain_obj::__register();
::openfl::net::URLVariables_obj::__register();
::openfl::net::URLRequestHeader_obj::__register();
::openfl::net::URLLoaderDataFormat_obj::__register();
::openfl::media::SoundTransform_obj::__register();
::openfl::media::SoundLoaderContext_obj::__register();
::openfl::media::ID3Info_obj::__register();
::openfl::geom::Vector3D_obj::__register();
::openfl::geom::Orientation3D_obj::__register();
::openfl::geom::Matrix3D_obj::__register();
::openfl::events::UncaughtErrorEvents_obj::__register();
::openfl::events::UncaughtErrorEvent_obj::__register();
::openfl::events::TimerEvent_obj::__register();
::openfl::events::SampleDataEvent_obj::__register();
::openfl::events::ProgressEvent_obj::__register();
::openfl::events::JoystickEvent_obj::__register();
::openfl::events::IOErrorEvent_obj::__register();
::openfl::events::FocusEvent_obj::__register();
::openfl::events::EventPhase_obj::__register();
::openfl::events::ErrorEvent_obj::__register();
::openfl::events::TextEvent_obj::__register();
::openfl::errors::RangeError_obj::__register();
::openfl::errors::EOFError_obj::__register();
::openfl::errors::ArgumentError_obj::__register();
::openfl::errors::Error_obj::__register();
::openfl::display3D::textures::Texture_obj::__register();
::openfl::display3D::textures::RectangleTexture_obj::__register();
::openfl::display3D::textures::CubeTexture_obj::__register();
::openfl::display3D::textures::TextureBase_obj::__register();
::openfl::display3D::VertexBuffer3D_obj::__register();
::openfl::display3D::Program3D_obj::__register();
::openfl::display3D::IndexBuffer3D_obj::__register();
::openfl::display3D::Context3DWrapMode_obj::__register();
::openfl::display3D::Context3DVertexBufferFormat_obj::__register();
::openfl::display3D::_Context3DTriangleFace::Context3DTriangleFace_Impl__obj::__register();
::openfl::display3D::Context3DTextureFormat_obj::__register();
::openfl::display3D::Context3DTextureFilter_obj::__register();
::openfl::display3D::Context3DProgramType_obj::__register();
::openfl::display3D::Context3DMipFilter_obj::__register();
::openfl::display3D::Context3DClearMask_obj::__register();
::openfl::display3D::_Context3D::SamplerState_obj::__register();
::openfl::display3D::Context3D_obj::__register();
::openfl::display::StageScaleMode_obj::__register();
::openfl::display::StageDisplayState_obj::__register();
::openfl::display::StageAlign_obj::__register();
::openfl::display::Stage3D_obj::__register();
::openfl::display::PixelSnapping_obj::__register();
::openfl::display::PNGEncoderOptions_obj::__register();
::openfl::display::JPEGEncoderOptions_obj::__register();
::openfl::display::InterpolationMethod_obj::__register();
::openfl::display::GraphicsPathWinding_obj::__register();
::openfl::display::GradientType_obj::__register();
::openfl::display::FrameLabel_obj::__register();
::openfl::display::BitmapDataChannel_obj::__register();
::openfl::_legacy::utils::WeakRef_obj::__register();
::openfl::_legacy::utils::UInt8Array_obj::__register();
::openfl::_legacy::utils::Timer_obj::__register();
::openfl::_legacy::utils::JNIStaticField_obj::__register();
::openfl::_legacy::utils::JNIMemberField_obj::__register();
::openfl::_legacy::utils::Int16Array_obj::__register();
::openfl::_legacy::utils::Float32Array_obj::__register();
::openfl::_legacy::utils::CompressionAlgorithm_obj::__register();
::openfl::_legacy::utils::ByteArray_obj::__register();
::openfl::_legacy::utils::IDataInput_obj::__register();
::openfl::_legacy::utils::IDataOutput_obj::__register();
::openfl::_legacy::utils::ArrayBufferView_obj::__register();
::openfl::_legacy::utils::IMemoryRange_obj::__register();
::openfl::_legacy::ui::Keyboard_obj::__register();
::openfl::_legacy::text::TextLineMetrics_obj::__register();
::openfl::_legacy::text::TextFormatAlign_obj::__register();
::openfl::_legacy::text::TextFormat_obj::__register();
::openfl::_legacy::text::TextField_obj::__register();
::openfl::_legacy::text::FontType_obj::__register();
::openfl::_legacy::text::FontStyle_obj::__register();
::openfl::_legacy::system::ScreenMode_obj::__register();
::openfl::_legacy::system::PixelFormat_obj::__register();
::openfl::_legacy::net::URLRequestMethod_obj::__register();
::openfl::_legacy::net::URLRequest_obj::__register();
::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::__register();
::openfl::_legacy::net::_URLLoader::ManagersThreadMessage_obj::__register();
::openfl::_legacy::media::AudioThreadState_obj::__register();
::openfl::_legacy::media::SoundChannel_obj::__register();
::openfl::_legacy::media::InternalAudioType_obj::__register();
::openfl::_legacy::media::Sound_obj::__register();
::openfl::_legacy::gl::GLTexture_obj::__register();
::openfl::_legacy::gl::GLShader_obj::__register();
::openfl::_legacy::gl::GLRenderbuffer_obj::__register();
::openfl::_legacy::gl::GLProgram_obj::__register();
::openfl::_legacy::gl::GLFramebuffer_obj::__register();
::openfl::_legacy::gl::GLBuffer_obj::__register();
::openfl::_legacy::gl::GLObject_obj::__register();
::openfl::_legacy::gl::_GL::Float32Data_Impl__obj::__register();
::openfl::_legacy::gl::GL_obj::__register();
::openfl::_legacy::geom::Transform_obj::__register();
::openfl::_legacy::geom::Rectangle_obj::__register();
::openfl::_legacy::geom::Matrix_obj::__register();
::openfl::_legacy::geom::ColorTransform_obj::__register();
::openfl::_legacy::filters::BitmapFilter_obj::__register();
::openfl::_legacy::events::SystemEvent_obj::__register();
::openfl::_legacy::events::KeyboardEvent_obj::__register();
::openfl::_legacy::events::HTTPStatusEvent_obj::__register();
::openfl::_legacy::events::_EventDispatcher::Listener_obj::__register();
::openfl::_legacy::display::TriangleCulling_obj::__register();
::openfl::_legacy::display::Tilesheet_obj::__register();
::openfl::_legacy::geom::Point_obj::__register();
::openfl::_legacy::display::StageQuality_obj::__register();
::openfl::_legacy::display::TouchInfo_obj::__register();
::openfl::_legacy::display::SpreadMethod_obj::__register();
::openfl::_legacy::display::Shape_obj::__register();
::openfl::_legacy::display::OpenGLView_obj::__register();
::openfl::_legacy::display::MovieClip_obj::__register();
::openfl::_legacy::display::ManagedStage_obj::__register();
::openfl::_legacy::display::LoaderInfo_obj::__register();
::openfl::_legacy::net::URLLoader_obj::__register();
::openfl::_legacy::display::Loader_obj::__register();
::openfl::_legacy::display::LineScaleMode_obj::__register();
::openfl::_legacy::display::JointStyle_obj::__register();
::openfl::_legacy::display::IGraphicsData_obj::__register();
::openfl::_legacy::display::Graphics_obj::__register();
::openfl::_legacy::display::DirectRenderer_obj::__register();
::openfl::_legacy::display::CapsStyle_obj::__register();
::openfl::_legacy::display::BlendMode_obj::__register();
::openfl::_legacy::display::OptimizedPerlin_obj::__register();
::openfl::_legacy::display::BitmapData_obj::__register();
::openfl::_legacy::display::Bitmap_obj::__register();
::openfl::_legacy::Memory_obj::__register();
::openfl::_legacy::AssetType_obj::__register();
::openfl::_legacy::AssetData_obj::__register();
::openfl::_legacy::Assets_obj::__register();
::openfl::_legacy::AssetCache_obj::__register();
::openfl::_legacy::IAssetCache_obj::__register();
::openfl::_Vector::Vector_Impl__obj::__register();
::model::vo::SnapshotVO_obj::__register();
::model::vo::InstructionVO_obj::__register();
::model::vo::FrequencyVO_obj::__register();
::model::vo::DecHexVO_obj::__register();
::model::proxy::SnapshotProxy_obj::__register();
::model::proxy::ProgramProxy_obj::__register();
::model::proxy::ClockProxy_obj::__register();
::model::proxy::AppProxy_obj::__register();
::org::puremvc::haxe::multicore::patterns::proxy::Proxy_obj::__register();
::org::puremvc::haxe::multicore::interfaces::IProxy_obj::__register();
::model::data::SnapshotData_obj::__register();
::model::data::ProgramData_obj::__register();
::model::data::ClockData_obj::__register();
::model::data::AppData_obj::__register();
::haxe::zip::Uncompress_obj::__register();
::haxe::zip::FlushMode_obj::__register();
::haxe::zip::Compress_obj::__register();
::haxe::io::Error_obj::__register();
::haxe::io::Eof_obj::__register();
::haxe::io::BytesBuffer_obj::__register();
::haxe::format::JsonParser_obj::__register();
::haxe::ds::ObjectMap_obj::__register();
::haxe::ds::IntMap_obj::__register();
::haxe::crypto::BaseCode_obj::__register();
::haxe::Unserializer_obj::__register();
::haxe::Timer_obj::__register();
::haxe::Resource_obj::__register();
::haxe::CallStack_obj::__register();
::haxe::StackItem_obj::__register();
::events::AppEvent_obj::__register();
::cpp::vm::Thread_obj::__register();
::cpp::vm::Mutex_obj::__register();
::cpp::rtti::FieldNumericIntegerLookup_obj::__register();
::controller::startup::PrepareViewCommand_obj::__register();
::controller::startup::PrepareModelCommand_obj::__register();
::controller::instruction::OpcodeSDACommand_obj::__register();
::controller::instruction::OpcodeMOVCommand_obj::__register();
::controller::instruction::OpcodeLDICommand_obj::__register();
::controller::instruction::OpcodeLDACommand_obj::__register();
::controller::instruction::OpcodeJumpCommand_obj::__register();
::controller::instruction::OpcodeALUCommand_obj::__register();
::controller::StartupCompleteCommand_obj::__register();
::controller::ResetCommand_obj::__register();
::controller::ProgramChangedCommand_obj::__register();
::controller::PlayCommand_obj::__register();
::controller::PauseCommand_obj::__register();
::controller::ManualModeOnCommand_obj::__register();
::controller::EnterInstructionCommand_obj::__register();
::controller::EditRomCommand_obj::__register();
::controller::DetailAccumulatorCommand_obj::__register();
::controller::ClockSignalCommand_obj::__register();
::controller::ChangeClockSpeedCommand_obj::__register();
::org::puremvc::haxe::multicore::patterns::command::SimpleCommand_obj::__register();
::org::puremvc::haxe::multicore::interfaces::ICommand_obj::__register();
::Type_obj::__register();
::StringTools_obj::__register();
::StringBuf_obj::__register();
::List_obj::__register();
::Lambda_obj::__register();
::__ASSET__fonts_myriadpro_regular_otf_obj::__register();
::__ASSET__fonts_myriadpro_bold_otf_obj::__register();
::__ASSET__fonts_consolas_bold_ttf_obj::__register();
::__ASSET__assets_fonts_myriadpro_regular_otf_obj::__register();
::__ASSET__assets_fonts_myriadpro_bold_otf_obj::__register();
::__ASSET__assets_fonts_consolas_bold_ttf_obj::__register();
::openfl::_legacy::text::Font_obj::__register();
::DefaultAssetLibrary_obj::__register();
::openfl::_legacy::AssetLibrary_obj::__register();
::Date_obj::__register();
::ScaledStage_obj::__register();
::openfl::_legacy::display::Stage_obj::__register();
::openfl::_legacy::utils::JNIMethod_obj::__register();
::haxe::Log_obj::__register();
::Reflect_obj::__register();
::openfl::_legacy::utils::JNI_obj::__register();
::openfl::_legacy::events::TouchEvent_obj::__register();
::openfl::_legacy::events::MouseEvent_obj::__register();
::openfl::_legacy::events::Event_obj::__register();
::DocumentClass_obj::__register();
::ApplicationMain_obj::__register();
::AppMediator_obj::__register();
::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__register();
::org::puremvc::haxe::multicore::interfaces::IMediator_obj::__register();
::org::puremvc::haxe::multicore::patterns::observer::Notifier_obj::__register();
::AppFacade_obj::__register();
::org::puremvc::haxe::multicore::patterns::facade::Facade_obj::__register();
::haxe::ds::StringMap_obj::__register();
::IMap_obj::__register();
::org::puremvc::haxe::multicore::interfaces::IFacade_obj::__register();
::org::puremvc::haxe::multicore::interfaces::INotifier_obj::__register();
::AppConstants_obj::__register();
::App_obj::__register();
::openfl::_legacy::display::Sprite_obj::__register();
::openfl::_legacy::display::DisplayObjectContainer_obj::__register();
::openfl::_legacy::display::InteractiveObject_obj::__register();
::openfl::_legacy::display::DisplayObject_obj::__register();
::openfl::_legacy::Lib_obj::__register();
::Std_obj::__register();
::sys::io::_Process::Stdout_obj::__register();
::haxe::io::Input_obj::__register();
::haxe::io::Bytes_obj::__register();
::sys::io::_Process::Stdin_obj::__register();
::haxe::io::Output_obj::__register();
::sys::io::Process_obj::__register();
::Sys_obj::__register();
::cpp::Lib_obj::__register();
::openfl::_legacy::display::IBitmapDrawable_obj::__register();
::openfl::_legacy::events::EventDispatcher_obj::__register();
::openfl::_legacy::events::IEventDispatcher_obj::__register();
::openfl::_legacy::utils::ByteArray_obj::__init__();
::cpp::Lib_obj::__boot();
::haxe::Log_obj::__boot();
::cpp::rtti::FieldNumericIntegerLookup_obj::__boot();
::cpp::vm::Mutex_obj::__boot();
::cpp::vm::Thread_obj::__boot();
::openfl::_legacy::events::IEventDispatcher_obj::__boot();
::openfl::_legacy::events::EventDispatcher_obj::__boot();
::openfl::_legacy::display::IBitmapDrawable_obj::__boot();
::Sys_obj::__boot();
::sys::io::Process_obj::__boot();
::haxe::io::Output_obj::__boot();
::sys::io::_Process::Stdin_obj::__boot();
::haxe::io::Bytes_obj::__boot();
::haxe::io::Input_obj::__boot();
::sys::io::_Process::Stdout_obj::__boot();
::Std_obj::__boot();
::openfl::_legacy::Lib_obj::__boot();
::openfl::_legacy::display::DisplayObject_obj::__boot();
::openfl::_legacy::display::InteractiveObject_obj::__boot();
::openfl::_legacy::display::DisplayObjectContainer_obj::__boot();
::openfl::_legacy::display::Sprite_obj::__boot();
::App_obj::__boot();
::AppConstants_obj::__boot();
::org::puremvc::haxe::multicore::interfaces::INotifier_obj::__boot();
::org::puremvc::haxe::multicore::interfaces::IFacade_obj::__boot();
::IMap_obj::__boot();
::haxe::ds::StringMap_obj::__boot();
::org::puremvc::haxe::multicore::patterns::facade::Facade_obj::__boot();
::AppFacade_obj::__boot();
::org::puremvc::haxe::multicore::patterns::observer::Notifier_obj::__boot();
::org::puremvc::haxe::multicore::interfaces::IMediator_obj::__boot();
::org::puremvc::haxe::multicore::patterns::mediator::Mediator_obj::__boot();
::AppMediator_obj::__boot();
::ApplicationMain_obj::__boot();
::DocumentClass_obj::__boot();
::openfl::_legacy::events::Event_obj::__boot();
::openfl::_legacy::events::MouseEvent_obj::__boot();
::openfl::_legacy::events::TouchEvent_obj::__boot();
::openfl::_legacy::utils::JNI_obj::__boot();
::Reflect_obj::__boot();
::openfl::_legacy::utils::JNIMethod_obj::__boot();
::openfl::_legacy::display::Stage_obj::__boot();
::ScaledStage_obj::__boot();
::Date_obj::__boot();
::openfl::_legacy::AssetLibrary_obj::__boot();
::DefaultAssetLibrary_obj::__boot();
::openfl::_legacy::text::Font_obj::__boot();
::__ASSET__assets_fonts_consolas_bold_ttf_obj::__boot();
::__ASSET__assets_fonts_myriadpro_bold_otf_obj::__boot();
::__ASSET__assets_fonts_myriadpro_regular_otf_obj::__boot();
::__ASSET__fonts_consolas_bold_ttf_obj::__boot();
::__ASSET__fonts_myriadpro_bold_otf_obj::__boot();
::__ASSET__fonts_myriadpro_regular_otf_obj::__boot();
::Lambda_obj::__boot();
::List_obj::__boot();
::StringBuf_obj::__boot();
::StringTools_obj::__boot();
::Type_obj::__boot();
::org::puremvc::haxe::multicore::interfaces::ICommand_obj::__boot();
::org::puremvc::haxe::multicore::patterns::command::SimpleCommand_obj::__boot();
::controller::ChangeClockSpeedCommand_obj::__boot();
::controller::ClockSignalCommand_obj::__boot();
::controller::DetailAccumulatorCommand_obj::__boot();
::controller::EditRomCommand_obj::__boot();
::controller::EnterInstructionCommand_obj::__boot();
::controller::ManualModeOnCommand_obj::__boot();
::controller::PauseCommand_obj::__boot();
::controller::PlayCommand_obj::__boot();
::controller::ProgramChangedCommand_obj::__boot();
::controller::ResetCommand_obj::__boot();
::controller::StartupCompleteCommand_obj::__boot();
::controller::instruction::OpcodeALUCommand_obj::__boot();
::controller::instruction::OpcodeJumpCommand_obj::__boot();
::controller::instruction::OpcodeLDACommand_obj::__boot();
::controller::instruction::OpcodeLDICommand_obj::__boot();
::controller::instruction::OpcodeMOVCommand_obj::__boot();
::controller::instruction::OpcodeSDACommand_obj::__boot();
::controller::startup::PrepareModelCommand_obj::__boot();
::controller::startup::PrepareViewCommand_obj::__boot();
::events::AppEvent_obj::__boot();
::haxe::StackItem_obj::__boot();
::haxe::CallStack_obj::__boot();
::haxe::Resource_obj::__boot();
::haxe::Timer_obj::__boot();
::haxe::Unserializer_obj::__boot();
::haxe::crypto::BaseCode_obj::__boot();
::haxe::ds::IntMap_obj::__boot();
::haxe::ds::ObjectMap_obj::__boot();
::haxe::format::JsonParser_obj::__boot();
::haxe::io::BytesBuffer_obj::__boot();
::haxe::io::Eof_obj::__boot();
::haxe::io::Error_obj::__boot();
::haxe::zip::Compress_obj::__boot();
::haxe::zip::FlushMode_obj::__boot();
::haxe::zip::Uncompress_obj::__boot();
::model::data::AppData_obj::__boot();
::model::data::ClockData_obj::__boot();
::model::data::ProgramData_obj::__boot();
::model::data::SnapshotData_obj::__boot();
::org::puremvc::haxe::multicore::interfaces::IProxy_obj::__boot();
::org::puremvc::haxe::multicore::patterns::proxy::Proxy_obj::__boot();
::model::proxy::AppProxy_obj::__boot();
::model::proxy::ClockProxy_obj::__boot();
::model::proxy::ProgramProxy_obj::__boot();
::model::proxy::SnapshotProxy_obj::__boot();
::model::vo::DecHexVO_obj::__boot();
::model::vo::FrequencyVO_obj::__boot();
::model::vo::InstructionVO_obj::__boot();
::model::vo::SnapshotVO_obj::__boot();
::openfl::_Vector::Vector_Impl__obj::__boot();
::openfl::_legacy::IAssetCache_obj::__boot();
::openfl::_legacy::AssetCache_obj::__boot();
::openfl::_legacy::Assets_obj::__boot();
::openfl::_legacy::AssetData_obj::__boot();
::openfl::_legacy::AssetType_obj::__boot();
::openfl::_legacy::Memory_obj::__boot();
::openfl::_legacy::display::Bitmap_obj::__boot();
::openfl::_legacy::display::BitmapData_obj::__boot();
::openfl::_legacy::display::OptimizedPerlin_obj::__boot();
::openfl::_legacy::display::BlendMode_obj::__boot();
::openfl::_legacy::display::CapsStyle_obj::__boot();
::openfl::_legacy::display::DirectRenderer_obj::__boot();
::openfl::_legacy::display::Graphics_obj::__boot();
::openfl::_legacy::display::IGraphicsData_obj::__boot();
::openfl::_legacy::display::JointStyle_obj::__boot();
::openfl::_legacy::display::LineScaleMode_obj::__boot();
::openfl::_legacy::display::Loader_obj::__boot();
::openfl::_legacy::net::URLLoader_obj::__boot();
::openfl::_legacy::display::LoaderInfo_obj::__boot();
::openfl::_legacy::display::ManagedStage_obj::__boot();
::openfl::_legacy::display::MovieClip_obj::__boot();
::openfl::_legacy::display::OpenGLView_obj::__boot();
::openfl::_legacy::display::Shape_obj::__boot();
::openfl::_legacy::display::SpreadMethod_obj::__boot();
::openfl::_legacy::display::TouchInfo_obj::__boot();
::openfl::_legacy::display::StageQuality_obj::__boot();
::openfl::_legacy::geom::Point_obj::__boot();
::openfl::_legacy::display::Tilesheet_obj::__boot();
::openfl::_legacy::display::TriangleCulling_obj::__boot();
::openfl::_legacy::events::_EventDispatcher::Listener_obj::__boot();
::openfl::_legacy::events::HTTPStatusEvent_obj::__boot();
::openfl::_legacy::events::KeyboardEvent_obj::__boot();
::openfl::_legacy::events::SystemEvent_obj::__boot();
::openfl::_legacy::filters::BitmapFilter_obj::__boot();
::openfl::_legacy::geom::ColorTransform_obj::__boot();
::openfl::_legacy::geom::Matrix_obj::__boot();
::openfl::_legacy::geom::Rectangle_obj::__boot();
::openfl::_legacy::geom::Transform_obj::__boot();
::openfl::_legacy::gl::GL_obj::__boot();
::openfl::_legacy::gl::_GL::Float32Data_Impl__obj::__boot();
::openfl::_legacy::gl::GLObject_obj::__boot();
::openfl::_legacy::gl::GLBuffer_obj::__boot();
::openfl::_legacy::gl::GLFramebuffer_obj::__boot();
::openfl::_legacy::gl::GLProgram_obj::__boot();
::openfl::_legacy::gl::GLRenderbuffer_obj::__boot();
::openfl::_legacy::gl::GLShader_obj::__boot();
::openfl::_legacy::gl::GLTexture_obj::__boot();
::openfl::_legacy::media::Sound_obj::__boot();
::openfl::_legacy::media::InternalAudioType_obj::__boot();
::openfl::_legacy::media::SoundChannel_obj::__boot();
::openfl::_legacy::media::AudioThreadState_obj::__boot();
::openfl::_legacy::net::_URLLoader::ManagersThreadMessage_obj::__boot();
::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::__boot();
::openfl::_legacy::net::URLRequest_obj::__boot();
::openfl::_legacy::net::URLRequestMethod_obj::__boot();
::openfl::_legacy::system::PixelFormat_obj::__boot();
::openfl::_legacy::system::ScreenMode_obj::__boot();
::openfl::_legacy::text::FontStyle_obj::__boot();
::openfl::_legacy::text::FontType_obj::__boot();
::openfl::_legacy::text::TextField_obj::__boot();
::openfl::_legacy::text::TextFormat_obj::__boot();
::openfl::_legacy::text::TextFormatAlign_obj::__boot();
::openfl::_legacy::text::TextLineMetrics_obj::__boot();
::openfl::_legacy::ui::Keyboard_obj::__boot();
::openfl::_legacy::utils::IMemoryRange_obj::__boot();
::openfl::_legacy::utils::ArrayBufferView_obj::__boot();
::openfl::_legacy::utils::IDataOutput_obj::__boot();
::openfl::_legacy::utils::IDataInput_obj::__boot();
::openfl::_legacy::utils::ByteArray_obj::__boot();
::openfl::_legacy::utils::CompressionAlgorithm_obj::__boot();
::openfl::_legacy::utils::Float32Array_obj::__boot();
::openfl::_legacy::utils::Int16Array_obj::__boot();
::openfl::_legacy::utils::JNIMemberField_obj::__boot();
::openfl::_legacy::utils::JNIStaticField_obj::__boot();
::openfl::_legacy::utils::Timer_obj::__boot();
::openfl::_legacy::utils::UInt8Array_obj::__boot();
::openfl::_legacy::utils::WeakRef_obj::__boot();
::openfl::display::BitmapDataChannel_obj::__boot();
::openfl::display::FrameLabel_obj::__boot();
::openfl::display::GradientType_obj::__boot();
::openfl::display::GraphicsPathWinding_obj::__boot();
::openfl::display::InterpolationMethod_obj::__boot();
::openfl::display::JPEGEncoderOptions_obj::__boot();
::openfl::display::PNGEncoderOptions_obj::__boot();
::openfl::display::PixelSnapping_obj::__boot();
::openfl::display::Stage3D_obj::__boot();
::openfl::display::StageAlign_obj::__boot();
::openfl::display::StageDisplayState_obj::__boot();
::openfl::display::StageScaleMode_obj::__boot();
::openfl::display3D::Context3D_obj::__boot();
::openfl::display3D::_Context3D::SamplerState_obj::__boot();
::openfl::display3D::Context3DClearMask_obj::__boot();
::openfl::display3D::Context3DMipFilter_obj::__boot();
::openfl::display3D::Context3DProgramType_obj::__boot();
::openfl::display3D::Context3DTextureFilter_obj::__boot();
::openfl::display3D::Context3DTextureFormat_obj::__boot();
::openfl::display3D::_Context3DTriangleFace::Context3DTriangleFace_Impl__obj::__boot();
::openfl::display3D::Context3DVertexBufferFormat_obj::__boot();
::openfl::display3D::Context3DWrapMode_obj::__boot();
::openfl::display3D::IndexBuffer3D_obj::__boot();
::openfl::display3D::Program3D_obj::__boot();
::openfl::display3D::VertexBuffer3D_obj::__boot();
::openfl::display3D::textures::TextureBase_obj::__boot();
::openfl::display3D::textures::CubeTexture_obj::__boot();
::openfl::display3D::textures::RectangleTexture_obj::__boot();
::openfl::display3D::textures::Texture_obj::__boot();
::openfl::errors::Error_obj::__boot();
::openfl::errors::ArgumentError_obj::__boot();
::openfl::errors::EOFError_obj::__boot();
::openfl::errors::RangeError_obj::__boot();
::openfl::events::TextEvent_obj::__boot();
::openfl::events::ErrorEvent_obj::__boot();
::openfl::events::EventPhase_obj::__boot();
::openfl::events::FocusEvent_obj::__boot();
::openfl::events::IOErrorEvent_obj::__boot();
::openfl::events::JoystickEvent_obj::__boot();
::openfl::events::ProgressEvent_obj::__boot();
::openfl::events::SampleDataEvent_obj::__boot();
::openfl::events::TimerEvent_obj::__boot();
::openfl::events::UncaughtErrorEvent_obj::__boot();
::openfl::events::UncaughtErrorEvents_obj::__boot();
::openfl::geom::Matrix3D_obj::__boot();
::openfl::geom::Orientation3D_obj::__boot();
::openfl::geom::Vector3D_obj::__boot();
::openfl::media::ID3Info_obj::__boot();
::openfl::media::SoundLoaderContext_obj::__boot();
::openfl::media::SoundTransform_obj::__boot();
::openfl::net::URLLoaderDataFormat_obj::__boot();
::openfl::net::URLRequestHeader_obj::__boot();
::openfl::net::URLVariables_obj::__boot();
::openfl::system::ApplicationDomain_obj::__boot();
::openfl::system::LoaderContext_obj::__boot();
::openfl::system::SecurityDomain_obj::__boot();
::openfl::text::AntiAliasType_obj::__boot();
::openfl::text::GridFitType_obj::__boot();
::openfl::text::TextFieldAutoSize_obj::__boot();
::openfl::text::TextFieldType_obj::__boot();
::openfl::utils::Endian_obj::__boot();
::org::puremvc::haxe::multicore::interfaces::IController_obj::__boot();
::org::puremvc::haxe::multicore::core::Controller_obj::__boot();
::org::puremvc::haxe::multicore::interfaces::IModel_obj::__boot();
::org::puremvc::haxe::multicore::core::Model_obj::__boot();
::org::puremvc::haxe::multicore::interfaces::IView_obj::__boot();
::org::puremvc::haxe::multicore::core::View_obj::__boot();
::org::puremvc::haxe::multicore::interfaces::INotification_obj::__boot();
::org::puremvc::haxe::multicore::interfaces::IObserver_obj::__boot();
::org::puremvc::haxe::multicore::patterns::observer::Notification_obj::__boot();
::org::puremvc::haxe::multicore::patterns::observer::Observer_obj::__boot();
::utilities::NumberFormat_obj::__boot();
::utilities::TextFieldFactory_obj::__boot();
::view::component::DetailAccumulator_obj::__boot();
::view::component::Display_obj::__boot();
::view::component::EditRom_obj::__boot();
::view::component::EnterInstruction_obj::__boot();
::view::component::Highlight_obj::__boot();
::view::component::Hotspot_obj::__boot();
::view::component::InstructionDisplay_obj::__boot();
::view::component::MainMenu_obj::__boot();
::view::component::Output_obj::__boot();
::view::component::Overlay_obj::__boot();
::view::component::TopLayer_obj::__boot();
::view::component::Welcome_obj::__boot();
::view::component::lines::Accumulator_obj::__boot();
::view::component::lines::Alu_obj::__boot();
::view::component::lines::BottomLayer_obj::__boot();
::view::component::lines::Clock_obj::__boot();
::view::component::lines::Comparator_obj::__boot();
::view::component::lines::Decoder_obj::__boot();
::view::component::lines::Enabler_obj::__boot();
::view::component::lines::Gates_obj::__boot();
::view::component::lines::MainBus_obj::__boot();
::view::component::lines::Multiplexer_obj::__boot();
::view::component::lines::Programcounter_obj::__boot();
::view::component::lines::Ram_obj::__boot();
::view::component::lines::Register_obj::__boot();
::view::elements::DetailAccumulatorLines_obj::__boot();
::view::elements::LabelButton_obj::__boot();
::view::elements::OneBitMemory_obj::__boot();
::view::elements::OpcodeMenu_obj::__boot();
::view::elements::RomRamDisplay_obj::__boot();
::view::elements::RomRow_obj::__boot();
::view::elements::SimpleRectangle_obj::__boot();
::view::mediator::DetailAccumulatorMediator_obj::__boot();
::view::mediator::DisplayMediator_obj::__boot();
::view::mediator::EditRomMediator_obj::__boot();
::view::mediator::EnterInstructionMediator_obj::__boot();
::view::mediator::HighlightMediator_obj::__boot();
::view::mediator::HotspotMediator_obj::__boot();
::view::mediator::InstructionDisplayMediator_obj::__boot();
::view::mediator::MainMenuMediator_obj::__boot();
::view::mediator::OutputMediator_obj::__boot();
::view::mediator::OverlayMediator_obj::__boot();
::view::mediator::TopLayerMediator_obj::__boot();
::view::mediator::WelcomeMediator_obj::__boot();
::view::mediator::lines::AccumulatorMediator_obj::__boot();
::view::mediator::lines::AluMediator_obj::__boot();
::view::mediator::lines::BottomLayerMediator_obj::__boot();
::view::mediator::lines::ClockMediator_obj::__boot();
::view::mediator::lines::ComparatorMediator_obj::__boot();
::view::mediator::lines::DecoderMediator_obj::__boot();
::view::mediator::lines::EnablerMediator_obj::__boot();
::view::mediator::lines::GatesMediator_obj::__boot();
::view::mediator::lines::MainBusMediator_obj::__boot();
::view::mediator::lines::MultiplexerMediator_obj::__boot();
::view::mediator::lines::ProgramcounterMediator_obj::__boot();
::view::mediator::lines::RamMediator_obj::__boot();
::view::mediator::lines::RegisterMediator_obj::__boot();
}

