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
#include <sys/FileSystem.h>
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
#include <openfl/utils/Timer.h>
#include <openfl/ui/Keyboard.h>
#include <openfl/ui/_KeyLocation/KeyLocation_Impl_.h>
#include <openfl/text/TextLineMetrics.h>
#include <openfl/text/TextFormatAlign.h>
#include <openfl/text/TextFormat.h>
#include <openfl/text/TextFieldType.h>
#include <openfl/text/TextFieldAutoSize.h>
#include <openfl/text/TextFormatRange.h>
#include <openfl/text/TextField.h>
#include <openfl/text/GridFitType.h>
#include <openfl/text/FontType.h>
#include <openfl/text/FontStyle.h>
#include <openfl/text/AntiAliasType.h>
#include <openfl/system/SecurityDomain.h>
#include <openfl/system/LoaderContext.h>
#include <openfl/net/URLRequestMethod.h>
#include <openfl/net/URLRequestHeader.h>
#include <openfl/net/URLRequest.h>
#include <openfl/media/SoundTransform.h>
#include <openfl/media/SoundLoaderContext.h>
#include <openfl/media/SoundChannel.h>
#include <openfl/media/Sound.h>
#include <openfl/media/ID3Info.h>
#include <openfl/geom/Vector3D.h>
#include <openfl/geom/Transform.h>
#include <openfl/geom/Orientation3D.h>
#include <openfl/geom/Matrix3D.h>
#include <openfl/filters/BitmapFilter.h>
#include <openfl/events/TouchEvent.h>
#include <openfl/events/TimerEvent.h>
#include <openfl/events/MouseEvent.h>
#include <openfl/events/KeyboardEvent.h>
#include <openfl/events/IOErrorEvent.h>
#include <openfl/events/FocusEvent.h>
#include <openfl/events/EventPhase.h>
#include <openfl/events/_EventDispatcher/Listener.h>
#include <openfl/events/ErrorEvent.h>
#include <openfl/events/TextEvent.h>
#include <openfl/errors/TypeError.h>
#include <openfl/errors/RangeError.h>
#include <openfl/errors/IOError.h>
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
#include <openfl/display/TriangleCulling.h>
#include <openfl/display/Tilesheet.h>
#include <openfl/display/StageScaleMode.h>
#include <openfl/display/StageQuality.h>
#include <openfl/display/StageDisplayState.h>
#include <openfl/display/StageAlign.h>
#include <openfl/display/Stage3D.h>
#include <openfl/display/Stage.h>
#include <openfl/display/SpreadMethod.h>
#include <openfl/display/Shape.h>
#include <openfl/display/Preloader.h>
#include <openfl/display/PixelSnapping.h>
#include <openfl/display/PNGEncoderOptions.h>
#include <openfl/display/OpenGLView.h>
#include <openfl/display/Loader.h>
#include <openfl/display/LineScaleMode.h>
#include <openfl/display/JointStyle.h>
#include <openfl/display/JPEGEncoderOptions.h>
#include <openfl/display/InterpolationMethod.h>
#include <openfl/display/GraphicsDataType.h>
#include <openfl/display/IGraphicsData.h>
#include <openfl/display/GraphicsPathWinding.h>
#include <openfl/display/GraphicsPathCommand.h>
#include <openfl/display/DrawCommand.h>
#include <openfl/display/Graphics.h>
#include <openfl/display/GradientType.h>
#include <openfl/display/FrameLabel.h>
#include <openfl/display/DirectRenderer.h>
#include <openfl/display/CapsStyle.h>
#include <openfl/display/BlendMode.h>
#include <openfl/display/TextureUvs.h>
#include <openfl/display/BitmapData.h>
#include <openfl/display/Bitmap.h>
#include <openfl/_internal/renderer/opengl/utils/_VertexAttribute/ElementType_Impl_.h>
#include <openfl/_internal/renderer/opengl/utils/VertexArray.h>
#include <openfl/_internal/renderer/opengl/utils/StencilManager.h>
#include <openfl/_internal/renderer/opengl/utils/_SpriteBatch/State.h>
#include <openfl/_internal/renderer/opengl/utils/SpriteBatch.h>
#include <openfl/_internal/renderer/opengl/utils/ShaderManager.h>
#include <openfl/_internal/renderer/opengl/utils/_GraphicsRenderer/RenderMode_Impl_.h>
#include <openfl/_internal/renderer/opengl/utils/GraphicType.h>
#include <openfl/_internal/renderer/opengl/utils/PolyK.h>
#include <openfl/_internal/renderer/opengl/utils/GLGraphicsData.h>
#include <openfl/_internal/renderer/opengl/utils/BucketDataType.h>
#include <openfl/_internal/renderer/opengl/utils/BucketMode.h>
#include <openfl/_internal/renderer/opengl/utils/GLBucketData.h>
#include <openfl/_internal/renderer/opengl/utils/GLBucket.h>
#include <openfl/_internal/renderer/opengl/utils/GLStack.h>
#include <openfl/_internal/renderer/opengl/utils/GraphicsRenderer.h>
#include <openfl/geom/Point.h>
#include <openfl/geom/Rectangle.h>
#include <openfl/_internal/renderer/opengl/utils/VertexAttribute.h>
#include <openfl/_internal/renderer/opengl/utils/GLMaskManager.h>
#include <openfl/_internal/renderer/opengl/utils/FilterTexture.h>
#include <openfl/_internal/renderer/opengl/utils/FilterManager.h>
#include <openfl/_internal/renderer/opengl/utils/FillType.h>
#include <openfl/_internal/renderer/opengl/utils/_DrawPath/WindingRule_Impl_.h>
#include <openfl/_internal/renderer/opengl/utils/LineStyle.h>
#include <openfl/_internal/renderer/opengl/utils/PathBuiler.h>
#include <openfl/_internal/renderer/opengl/utils/DrawPath.h>
#include <openfl/_internal/renderer/opengl/utils/BlendModeManager.h>
#include <openfl/_internal/renderer/opengl/shaders2/_PrimitiveShader/Uniform_Impl_.h>
#include <openfl/_internal/renderer/opengl/shaders2/_PrimitiveShader/Attrib_Impl_.h>
#include <openfl/_internal/renderer/opengl/shaders2/PrimitiveShader.h>
#include <openfl/_internal/renderer/opengl/shaders2/_PatternFillShader/Uniform_Impl_.h>
#include <openfl/_internal/renderer/opengl/shaders2/_PatternFillShader/Attrib_Impl_.h>
#include <openfl/_internal/renderer/opengl/shaders2/PatternFillShader.h>
#include <openfl/_internal/renderer/opengl/shaders2/_FillShader/Uniform_Impl_.h>
#include <openfl/_internal/renderer/opengl/shaders2/_FillShader/Attrib_Impl_.h>
#include <openfl/_internal/renderer/opengl/shaders2/FillShader.h>
#include <openfl/_internal/renderer/opengl/shaders2/_DrawTrianglesShader/Uniform_Impl_.h>
#include <openfl/_internal/renderer/opengl/shaders2/_DrawTrianglesShader/Attrib_Impl_.h>
#include <openfl/_internal/renderer/opengl/shaders2/DrawTrianglesShader.h>
#include <openfl/_internal/renderer/opengl/shaders2/_DefaultShader/Uniform_Impl_.h>
#include <openfl/_internal/renderer/opengl/shaders2/_DefaultShader/Attrib_Impl_.h>
#include <openfl/_internal/renderer/opengl/shaders2/DefaultShader.h>
#include <openfl/_internal/renderer/opengl/shaders2/Shader.h>
#include <openfl/_internal/renderer/opengl/GLTextField.h>
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#include <openfl/_internal/renderer/opengl/GLBitmap.h>
#include <openfl/_internal/renderer/dom/DOMTextField.h>
#include <openfl/_internal/renderer/dom/DOMShape.h>
#include <openfl/_internal/renderer/dom/DOMRenderer.h>
#include <openfl/_internal/renderer/dom/DOMBitmap.h>
#include <openfl/_internal/renderer/canvas/CanvasTextField.h>
#include <openfl/_internal/renderer/canvas/CanvasShape.h>
#include <openfl/_internal/renderer/canvas/CanvasRenderer.h>
#include <openfl/_internal/renderer/canvas/CanvasMaskManager.h>
#include <openfl/_internal/renderer/canvas/CanvasGraphics.h>
#include <openfl/_internal/renderer/canvas/CanvasBitmap.h>
#include <openfl/_internal/renderer/cairo/CairoShape.h>
#include <openfl/_internal/renderer/cairo/CairoRenderer.h>
#include <openfl/_internal/renderer/cairo/CairoMaskManager.h>
#include <openfl/_internal/renderer/cairo/CairoGraphics.h>
#include <openfl/_internal/renderer/cairo/CairoBitmap.h>
#include <openfl/_internal/renderer/TextFieldGraphics.h>
#include <openfl/_internal/renderer/RenderSession.h>
#include <openfl/_internal/renderer/AbstractRenderer.h>
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#include <openfl/_Vector/Vector_Impl_.h>
#include <openfl/Memory.h>
#include <openfl/Lib.h>
#include <openfl/geom/ColorTransform.h>
#include <openfl/geom/Matrix.h>
#include <openfl/events/UncaughtErrorEvents.h>
#include <openfl/system/ApplicationDomain.h>
#include <openfl/display/LoaderInfo.h>
#include <openfl/display/MovieClip.h>
#include <openfl/_Assets/AssetType_Impl_.h>
#include <openfl/AssetLibrary.h>
#include <openfl/Assets.h>
#include <openfl/AssetCache.h>
#include <openfl/IAssetCache.h>
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
#include <lime/utils/UInt8Array.h>
#include <lime/utils/UInt32Array.h>
#include <lime/utils/UInt16Array.h>
#include <lime/utils/Int32Array.h>
#include <lime/utils/Int16Array.h>
#include <lime/utils/GLUtils.h>
#include <lime/utils/Float32Array.h>
#include <lime/utils/CompressionAlgorithm.h>
#include <lime/utils/ByteArray.h>
#include <lime/utils/IDataInput.h>
#include <lime/utils/ArrayBufferView.h>
#include <lime/utils/IMemoryRange.h>
#include <lime/ui/Window.h>
#include <lime/ui/MouseCursor.h>
#include <lime/ui/Mouse.h>
#include <lime/ui/_KeyModifier/KeyModifier_Impl_.h>
#include <lime/ui/_KeyCode/KeyCode_Impl_.h>
#include <lime/ui/_GamepadButton/GamepadButton_Impl_.h>
#include <lime/ui/_GamepadAxis/GamepadAxis_Impl_.h>
#include <lime/ui/Gamepad.h>
#include <lime/text/_TextScript/TextScript_Impl_.h>
#include <lime/text/TextLayout.h>
#include <lime/text/_TextDirection/TextDirection_Impl_.h>
#include <lime/text/GlyphPosition.h>
#include <lime/text/GlyphMetrics.h>
#include <lime/text/_Glyph/Glyph_Impl_.h>
#include <lime/system/_System/SystemDirectory_Impl_.h>
#include <lime/math/Vector4.h>
#include <lime/math/Vector2.h>
#include <lime/math/Rectangle.h>
#include <lime/math/_Matrix4/Matrix4_Impl_.h>
#include <lime/math/Matrix3.h>
#include <lime/math/_ColorMatrix/ColorMatrix_Impl_.h>
#include <lime/graphics/utils/ImageDataUtil.h>
#include <lime/graphics/utils/ImageCanvasUtil.h>
#include <lime/graphics/opengl/GLTexture.h>
#include <lime/graphics/opengl/GLShader.h>
#include <lime/graphics/opengl/GLRenderbuffer.h>
#include <lime/graphics/opengl/GLProgram.h>
#include <lime/graphics/opengl/GLFramebuffer.h>
#include <lime/graphics/opengl/GLBuffer.h>
#include <lime/graphics/opengl/GLObject.h>
#include <lime/graphics/opengl/GL.h>
#include <lime/graphics/format/PNG.h>
#include <lime/graphics/format/JPEG.h>
#include <lime/graphics/format/BMPType.h>
#include <lime/graphics/format/BMP.h>
#include <lime/graphics/cairo/_CairoSurface/CairoSurface_Impl_.h>
#include <lime/graphics/cairo/_CairoStatus/CairoStatus_Impl_.h>
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#include <lime/graphics/cairo/_CairoOperator/CairoOperator_Impl_.h>
#include <lime/graphics/cairo/_CairoLineJoin/CairoLineJoin_Impl_.h>
#include <lime/graphics/cairo/_CairoLineCap/CairoLineCap_Impl_.h>
#include <lime/graphics/cairo/_CairoFormat/CairoFormat_Impl_.h>
#include <lime/graphics/cairo/_CairoFilter/CairoFilter_Impl_.h>
#include <lime/graphics/cairo/_CairoFillRule/CairoFillRule_Impl_.h>
#include <lime/graphics/cairo/_CairoExtend/CairoExtend_Impl_.h>
#include <lime/graphics/cairo/_CairoContent/CairoContent_Impl_.h>
#include <lime/graphics/cairo/_CairoAntialias/CairoAntialias_Impl_.h>
#include <lime/graphics/cairo/Cairo.h>
#include <lime/graphics/Renderer.h>
#include <lime/graphics/RenderContext.h>
#include <lime/graphics/_PixelFormat/PixelFormat_Impl_.h>
#include <lime/graphics/ImageType.h>
#include <lime/graphics/ImageChannel.h>
#include <lime/graphics/ImageBuffer.h>
#include <lime/graphics/Image.h>
#include <lime/graphics/GLRenderContext.h>
#include <lime/graphics/FlashRenderContext.h>
#include <lime/graphics/DOMRenderContext.h>
#include <lime/graphics/ConsoleRenderContext.h>
#include <lime/graphics/CanvasRenderContext.h>
#include <lime/audio/openal/_ALDevice/ALDevice_Impl_.h>
#include <lime/audio/openal/_ALContext/ALContext_Impl_.h>
#include <lime/audio/openal/ALC.h>
#include <lime/audio/openal/AL.h>
#include <lime/audio/WebAudioContext.h>
#include <lime/audio/HTML5AudioContext.h>
#include <lime/audio/FlashAudioContext.h>
#include <lime/audio/AudioSource.h>
#include <lime/audio/AudioManager.h>
#include <lime/audio/AudioContext.h>
#include <lime/audio/AudioBuffer.h>
#include <lime/audio/ALCAudioContext.h>
#include <lime/audio/ALAudioContext.h>
#include <lime/app/Preloader.h>
#include <lime/app/Event.h>
#include <lime/app/Application.h>
#include <lime/app/Module.h>
#include <lime/app/IModule.h>
#include <lime/_backend/native/_NativeWindow/WindowFlags_Impl_.h>
#include <lime/_backend/native/NativeWindow.h>
#include <lime/_backend/native/NativeRenderer.h>
#include <lime/_backend/native/_NativeMouse/MouseCursorType_Impl_.h>
#include <lime/_backend/native/NativeMouse.h>
#include <lime/_backend/native/_NativeApplication/WindowEventType_Impl_.h>
#include <lime/_backend/native/_NativeApplication/WindowEventInfo.h>
#include <lime/_backend/native/_NativeApplication/UpdateEventType_Impl_.h>
#include <lime/_backend/native/_NativeApplication/UpdateEventInfo.h>
#include <lime/_backend/native/_NativeApplication/TouchEventType_Impl_.h>
#include <lime/_backend/native/_NativeApplication/TouchEventInfo.h>
#include <lime/_backend/native/_NativeApplication/TextEventType_Impl_.h>
#include <lime/_backend/native/_NativeApplication/TextEventInfo.h>
#include <lime/_backend/native/_NativeApplication/RenderEventType_Impl_.h>
#include <lime/_backend/native/_NativeApplication/RenderEventInfo.h>
#include <lime/_backend/native/_NativeApplication/MouseEventType_Impl_.h>
#include <lime/_backend/native/_NativeApplication/MouseEventInfo.h>
#include <lime/_backend/native/_NativeApplication/KeyEventType_Impl_.h>
#include <lime/_backend/native/_NativeApplication/KeyEventInfo.h>
#include <lime/_backend/native/_NativeApplication/GamepadEventType_Impl_.h>
#include <lime/_backend/native/_NativeApplication/GamepadEventInfo.h>
#include <lime/_backend/native/NativeApplication.h>
#include <lime/_Assets/AssetType_Impl_.h>
#include <lime/Assets.h>
#include <lime/AssetCache.h>
#include <haxe/zip/Uncompress.h>
#include <haxe/zip/FlushMode.h>
#include <haxe/zip/Compress.h>
#include <haxe/io/Path.h>
#include <haxe/io/Error.h>
#include <haxe/io/Eof.h>
#include <haxe/io/BytesBuffer.h>
#include <haxe/format/JsonParser.h>
#include <haxe/ds/ObjectMap.h>
#include <haxe/ds/IntMap.h>
#include <haxe/ds/EnumValueMap.h>
#include <haxe/ds/TreeNode.h>
#include <haxe/ds/BalancedTree.h>
#include <haxe/crypto/BaseCode.h>
#include <haxe/Utf8.h>
#include <haxe/Unserializer.h>
#include <haxe/Timer.h>
#include <haxe/Log.h>
#include <haxe/CallStack.h>
#include <haxe/StackItem.h>
#include <events/AppEvent.h>
#include <openfl/events/Event.h>
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
#include <NMEPreloader.h>
#include <List.h>
#include <EReg.h>
#include <__ASSET__OPENFL__fonts_myriadpro_regular_otf.h>
#include <__ASSET__OPENFL__fonts_myriadpro_bold_otf.h>
#include <__ASSET__OPENFL__fonts_consolas_bold_ttf.h>
#include <__ASSET__OPENFL__assets_fonts_myriadpro_regular_otf.h>
#include <__ASSET__OPENFL__assets_fonts_myriadpro_bold_otf.h>
#include <__ASSET__OPENFL__assets_fonts_consolas_bold_ttf.h>
#include <openfl/text/Font.h>
#include <__ASSET__fonts_myriadpro_regular_otf.h>
#include <__ASSET__fonts_myriadpro_bold_otf.h>
#include <__ASSET__fonts_consolas_bold_ttf.h>
#include <__ASSET__assets_fonts_myriadpro_regular_otf.h>
#include <__ASSET__assets_fonts_myriadpro_bold_otf.h>
#include <__ASSET__assets_fonts_consolas_bold_ttf.h>
#include <lime/text/Font.h>
#include <lime/system/System.h>
#include <Std.h>
#include <sys/io/_Process/Stdout.h>
#include <haxe/io/Input.h>
#include <haxe/io/Bytes.h>
#include <sys/io/_Process/Stdin.h>
#include <haxe/io/Output.h>
#include <sys/io/Process.h>
#include <Sys.h>
#include <cpp/Lib.h>
#include <Reflect.h>
#include <DefaultAssetLibrary.h>
#include <lime/AssetLibrary.h>
#include <Date.h>
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
#include <openfl/display/Sprite.h>
#include <openfl/display/DisplayObjectContainer.h>
#include <openfl/display/InteractiveObject.h>
#include <openfl/display/DisplayObject.h>
#include <openfl/display/IBitmapDrawable.h>
#include <openfl/events/EventDispatcher.h>
#include <openfl/events/IEventDispatcher.h>

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
::sys::FileSystem_obj::__register();
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
::openfl::utils::Timer_obj::__register();
::openfl::ui::Keyboard_obj::__register();
::openfl::ui::_KeyLocation::KeyLocation_Impl__obj::__register();
::openfl::text::TextLineMetrics_obj::__register();
::openfl::text::TextFormatAlign_obj::__register();
::openfl::text::TextFormat_obj::__register();
::openfl::text::TextFieldType_obj::__register();
::openfl::text::TextFieldAutoSize_obj::__register();
::openfl::text::TextFormatRange_obj::__register();
::openfl::text::TextField_obj::__register();
::openfl::text::GridFitType_obj::__register();
::openfl::text::FontType_obj::__register();
::openfl::text::FontStyle_obj::__register();
::openfl::text::AntiAliasType_obj::__register();
::openfl::system::SecurityDomain_obj::__register();
::openfl::system::LoaderContext_obj::__register();
::openfl::net::URLRequestMethod_obj::__register();
::openfl::net::URLRequestHeader_obj::__register();
::openfl::net::URLRequest_obj::__register();
::openfl::media::SoundTransform_obj::__register();
::openfl::media::SoundLoaderContext_obj::__register();
::openfl::media::SoundChannel_obj::__register();
::openfl::media::Sound_obj::__register();
::openfl::media::ID3Info_obj::__register();
::openfl::geom::Vector3D_obj::__register();
::openfl::geom::Transform_obj::__register();
::openfl::geom::Orientation3D_obj::__register();
::openfl::geom::Matrix3D_obj::__register();
::openfl::filters::BitmapFilter_obj::__register();
::openfl::events::TouchEvent_obj::__register();
::openfl::events::TimerEvent_obj::__register();
::openfl::events::MouseEvent_obj::__register();
::openfl::events::KeyboardEvent_obj::__register();
::openfl::events::IOErrorEvent_obj::__register();
::openfl::events::FocusEvent_obj::__register();
::openfl::events::EventPhase_obj::__register();
::openfl::events::_EventDispatcher::Listener_obj::__register();
::openfl::events::ErrorEvent_obj::__register();
::openfl::events::TextEvent_obj::__register();
::openfl::errors::TypeError_obj::__register();
::openfl::errors::RangeError_obj::__register();
::openfl::errors::IOError_obj::__register();
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
::openfl::display::TriangleCulling_obj::__register();
::openfl::display::Tilesheet_obj::__register();
::openfl::display::StageScaleMode_obj::__register();
::openfl::display::StageQuality_obj::__register();
::openfl::display::StageDisplayState_obj::__register();
::openfl::display::StageAlign_obj::__register();
::openfl::display::Stage3D_obj::__register();
::openfl::display::Stage_obj::__register();
::openfl::display::SpreadMethod_obj::__register();
::openfl::display::Shape_obj::__register();
::openfl::display::Preloader_obj::__register();
::openfl::display::PixelSnapping_obj::__register();
::openfl::display::PNGEncoderOptions_obj::__register();
::openfl::display::OpenGLView_obj::__register();
::openfl::display::Loader_obj::__register();
::openfl::display::LineScaleMode_obj::__register();
::openfl::display::JointStyle_obj::__register();
::openfl::display::JPEGEncoderOptions_obj::__register();
::openfl::display::InterpolationMethod_obj::__register();
::openfl::display::GraphicsDataType_obj::__register();
::openfl::display::IGraphicsData_obj::__register();
::openfl::display::GraphicsPathWinding_obj::__register();
::openfl::display::GraphicsPathCommand_obj::__register();
::openfl::display::DrawCommand_obj::__register();
::openfl::display::Graphics_obj::__register();
::openfl::display::GradientType_obj::__register();
::openfl::display::FrameLabel_obj::__register();
::openfl::display::DirectRenderer_obj::__register();
::openfl::display::CapsStyle_obj::__register();
::openfl::display::BlendMode_obj::__register();
::openfl::display::TextureUvs_obj::__register();
::openfl::display::BitmapData_obj::__register();
::openfl::display::Bitmap_obj::__register();
::openfl::_internal::renderer::opengl::utils::_VertexAttribute::ElementType_Impl__obj::__register();
::openfl::_internal::renderer::opengl::utils::VertexArray_obj::__register();
::openfl::_internal::renderer::opengl::utils::StencilManager_obj::__register();
::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State_obj::__register();
::openfl::_internal::renderer::opengl::utils::SpriteBatch_obj::__register();
::openfl::_internal::renderer::opengl::utils::ShaderManager_obj::__register();
::openfl::_internal::renderer::opengl::utils::_GraphicsRenderer::RenderMode_Impl__obj::__register();
::openfl::_internal::renderer::opengl::utils::GraphicType_obj::__register();
::openfl::_internal::renderer::opengl::utils::PolyK_obj::__register();
::openfl::_internal::renderer::opengl::utils::GLGraphicsData_obj::__register();
::openfl::_internal::renderer::opengl::utils::BucketDataType_obj::__register();
::openfl::_internal::renderer::opengl::utils::BucketMode_obj::__register();
::openfl::_internal::renderer::opengl::utils::GLBucketData_obj::__register();
::openfl::_internal::renderer::opengl::utils::GLBucket_obj::__register();
::openfl::_internal::renderer::opengl::utils::GLStack_obj::__register();
::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::__register();
::openfl::geom::Point_obj::__register();
::openfl::geom::Rectangle_obj::__register();
::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__register();
::openfl::_internal::renderer::opengl::utils::GLMaskManager_obj::__register();
::openfl::_internal::renderer::opengl::utils::FilterTexture_obj::__register();
::openfl::_internal::renderer::opengl::utils::FilterManager_obj::__register();
::openfl::_internal::renderer::opengl::utils::FillType_obj::__register();
::openfl::_internal::renderer::opengl::utils::_DrawPath::WindingRule_Impl__obj::__register();
::openfl::_internal::renderer::opengl::utils::LineStyle_obj::__register();
::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__register();
::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__register();
::openfl::_internal::renderer::opengl::utils::BlendModeManager_obj::__register();
::openfl::_internal::renderer::opengl::shaders2::_PrimitiveShader::Uniform_Impl__obj::__register();
::openfl::_internal::renderer::opengl::shaders2::_PrimitiveShader::Attrib_Impl__obj::__register();
::openfl::_internal::renderer::opengl::shaders2::PrimitiveShader_obj::__register();
::openfl::_internal::renderer::opengl::shaders2::_PatternFillShader::Uniform_Impl__obj::__register();
::openfl::_internal::renderer::opengl::shaders2::_PatternFillShader::Attrib_Impl__obj::__register();
::openfl::_internal::renderer::opengl::shaders2::PatternFillShader_obj::__register();
::openfl::_internal::renderer::opengl::shaders2::_FillShader::Uniform_Impl__obj::__register();
::openfl::_internal::renderer::opengl::shaders2::_FillShader::Attrib_Impl__obj::__register();
::openfl::_internal::renderer::opengl::shaders2::FillShader_obj::__register();
::openfl::_internal::renderer::opengl::shaders2::_DrawTrianglesShader::Uniform_Impl__obj::__register();
::openfl::_internal::renderer::opengl::shaders2::_DrawTrianglesShader::Attrib_Impl__obj::__register();
::openfl::_internal::renderer::opengl::shaders2::DrawTrianglesShader_obj::__register();
::openfl::_internal::renderer::opengl::shaders2::_DefaultShader::Uniform_Impl__obj::__register();
::openfl::_internal::renderer::opengl::shaders2::_DefaultShader::Attrib_Impl__obj::__register();
::openfl::_internal::renderer::opengl::shaders2::DefaultShader_obj::__register();
::openfl::_internal::renderer::opengl::shaders2::Shader_obj::__register();
::openfl::_internal::renderer::opengl::GLTextField_obj::__register();
::openfl::_internal::renderer::opengl::GLRenderer_obj::__register();
::openfl::_internal::renderer::opengl::GLBitmap_obj::__register();
::openfl::_internal::renderer::dom::DOMTextField_obj::__register();
::openfl::_internal::renderer::dom::DOMShape_obj::__register();
::openfl::_internal::renderer::dom::DOMRenderer_obj::__register();
::openfl::_internal::renderer::dom::DOMBitmap_obj::__register();
::openfl::_internal::renderer::canvas::CanvasTextField_obj::__register();
::openfl::_internal::renderer::canvas::CanvasShape_obj::__register();
::openfl::_internal::renderer::canvas::CanvasRenderer_obj::__register();
::openfl::_internal::renderer::canvas::CanvasMaskManager_obj::__register();
::openfl::_internal::renderer::canvas::CanvasGraphics_obj::__register();
::openfl::_internal::renderer::canvas::CanvasBitmap_obj::__register();
::openfl::_internal::renderer::cairo::CairoShape_obj::__register();
::openfl::_internal::renderer::cairo::CairoRenderer_obj::__register();
::openfl::_internal::renderer::cairo::CairoMaskManager_obj::__register();
::openfl::_internal::renderer::cairo::CairoGraphics_obj::__register();
::openfl::_internal::renderer::cairo::CairoBitmap_obj::__register();
::openfl::_internal::renderer::TextFieldGraphics_obj::__register();
::openfl::_internal::renderer::RenderSession_obj::__register();
::openfl::_internal::renderer::AbstractRenderer_obj::__register();
::openfl::_internal::renderer::AbstractMaskManager_obj::__register();
::openfl::_Vector::Vector_Impl__obj::__register();
::openfl::Memory_obj::__register();
::openfl::Lib_obj::__register();
::openfl::geom::ColorTransform_obj::__register();
::openfl::geom::Matrix_obj::__register();
::openfl::events::UncaughtErrorEvents_obj::__register();
::openfl::system::ApplicationDomain_obj::__register();
::openfl::display::LoaderInfo_obj::__register();
::openfl::display::MovieClip_obj::__register();
::openfl::_Assets::AssetType_Impl__obj::__register();
::openfl::AssetLibrary_obj::__register();
::openfl::Assets_obj::__register();
::openfl::AssetCache_obj::__register();
::openfl::IAssetCache_obj::__register();
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
::lime::utils::UInt8Array_obj::__register();
::lime::utils::UInt32Array_obj::__register();
::lime::utils::UInt16Array_obj::__register();
::lime::utils::Int32Array_obj::__register();
::lime::utils::Int16Array_obj::__register();
::lime::utils::GLUtils_obj::__register();
::lime::utils::Float32Array_obj::__register();
::lime::utils::CompressionAlgorithm_obj::__register();
::lime::utils::ByteArray_obj::__register();
::lime::utils::IDataInput_obj::__register();
::lime::utils::ArrayBufferView_obj::__register();
::lime::utils::IMemoryRange_obj::__register();
::lime::ui::Window_obj::__register();
::lime::ui::MouseCursor_obj::__register();
::lime::ui::Mouse_obj::__register();
::lime::ui::_KeyModifier::KeyModifier_Impl__obj::__register();
::lime::ui::_KeyCode::KeyCode_Impl__obj::__register();
::lime::ui::_GamepadButton::GamepadButton_Impl__obj::__register();
::lime::ui::_GamepadAxis::GamepadAxis_Impl__obj::__register();
::lime::ui::Gamepad_obj::__register();
::lime::text::_TextScript::TextScript_Impl__obj::__register();
::lime::text::TextLayout_obj::__register();
::lime::text::_TextDirection::TextDirection_Impl__obj::__register();
::lime::text::GlyphPosition_obj::__register();
::lime::text::GlyphMetrics_obj::__register();
::lime::text::_Glyph::Glyph_Impl__obj::__register();
::lime::system::_System::SystemDirectory_Impl__obj::__register();
::lime::math::Vector4_obj::__register();
::lime::math::Vector2_obj::__register();
::lime::math::Rectangle_obj::__register();
::lime::math::_Matrix4::Matrix4_Impl__obj::__register();
::lime::math::Matrix3_obj::__register();
::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::__register();
::lime::graphics::utils::ImageDataUtil_obj::__register();
::lime::graphics::utils::ImageCanvasUtil_obj::__register();
::lime::graphics::opengl::GLTexture_obj::__register();
::lime::graphics::opengl::GLShader_obj::__register();
::lime::graphics::opengl::GLRenderbuffer_obj::__register();
::lime::graphics::opengl::GLProgram_obj::__register();
::lime::graphics::opengl::GLFramebuffer_obj::__register();
::lime::graphics::opengl::GLBuffer_obj::__register();
::lime::graphics::opengl::GLObject_obj::__register();
::lime::graphics::opengl::GL_obj::__register();
::lime::graphics::format::PNG_obj::__register();
::lime::graphics::format::JPEG_obj::__register();
::lime::graphics::format::BMPType_obj::__register();
::lime::graphics::format::BMP_obj::__register();
::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::__register();
::lime::graphics::cairo::_CairoStatus::CairoStatus_Impl__obj::__register();
::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::__register();
::lime::graphics::cairo::_CairoOperator::CairoOperator_Impl__obj::__register();
::lime::graphics::cairo::_CairoLineJoin::CairoLineJoin_Impl__obj::__register();
::lime::graphics::cairo::_CairoLineCap::CairoLineCap_Impl__obj::__register();
::lime::graphics::cairo::_CairoFormat::CairoFormat_Impl__obj::__register();
::lime::graphics::cairo::_CairoFilter::CairoFilter_Impl__obj::__register();
::lime::graphics::cairo::_CairoFillRule::CairoFillRule_Impl__obj::__register();
::lime::graphics::cairo::_CairoExtend::CairoExtend_Impl__obj::__register();
::lime::graphics::cairo::_CairoContent::CairoContent_Impl__obj::__register();
::lime::graphics::cairo::_CairoAntialias::CairoAntialias_Impl__obj::__register();
::lime::graphics::cairo::Cairo_obj::__register();
::lime::graphics::Renderer_obj::__register();
::lime::graphics::RenderContext_obj::__register();
::lime::graphics::_PixelFormat::PixelFormat_Impl__obj::__register();
::lime::graphics::ImageType_obj::__register();
::lime::graphics::ImageChannel_obj::__register();
::lime::graphics::ImageBuffer_obj::__register();
::lime::graphics::Image_obj::__register();
::lime::graphics::GLRenderContext_obj::__register();
::lime::graphics::FlashRenderContext_obj::__register();
::lime::graphics::DOMRenderContext_obj::__register();
::lime::graphics::ConsoleRenderContext_obj::__register();
::lime::graphics::CanvasRenderContext_obj::__register();
::lime::audio::openal::_ALDevice::ALDevice_Impl__obj::__register();
::lime::audio::openal::_ALContext::ALContext_Impl__obj::__register();
::lime::audio::openal::ALC_obj::__register();
::lime::audio::openal::AL_obj::__register();
::lime::audio::WebAudioContext_obj::__register();
::lime::audio::HTML5AudioContext_obj::__register();
::lime::audio::FlashAudioContext_obj::__register();
::lime::audio::AudioSource_obj::__register();
::lime::audio::AudioManager_obj::__register();
::lime::audio::AudioContext_obj::__register();
::lime::audio::AudioBuffer_obj::__register();
::lime::audio::ALCAudioContext_obj::__register();
::lime::audio::ALAudioContext_obj::__register();
::lime::app::Preloader_obj::__register();
::lime::app::Event_obj::__register();
::lime::app::Application_obj::__register();
::lime::app::Module_obj::__register();
::lime::app::IModule_obj::__register();
::lime::_backend::native::_NativeWindow::WindowFlags_Impl__obj::__register();
::lime::_backend::native::NativeWindow_obj::__register();
::lime::_backend::native::NativeRenderer_obj::__register();
::lime::_backend::native::_NativeMouse::MouseCursorType_Impl__obj::__register();
::lime::_backend::native::NativeMouse_obj::__register();
::lime::_backend::native::_NativeApplication::WindowEventType_Impl__obj::__register();
::lime::_backend::native::_NativeApplication::WindowEventInfo_obj::__register();
::lime::_backend::native::_NativeApplication::UpdateEventType_Impl__obj::__register();
::lime::_backend::native::_NativeApplication::UpdateEventInfo_obj::__register();
::lime::_backend::native::_NativeApplication::TouchEventType_Impl__obj::__register();
::lime::_backend::native::_NativeApplication::TouchEventInfo_obj::__register();
::lime::_backend::native::_NativeApplication::TextEventType_Impl__obj::__register();
::lime::_backend::native::_NativeApplication::TextEventInfo_obj::__register();
::lime::_backend::native::_NativeApplication::RenderEventType_Impl__obj::__register();
::lime::_backend::native::_NativeApplication::RenderEventInfo_obj::__register();
::lime::_backend::native::_NativeApplication::MouseEventType_Impl__obj::__register();
::lime::_backend::native::_NativeApplication::MouseEventInfo_obj::__register();
::lime::_backend::native::_NativeApplication::KeyEventType_Impl__obj::__register();
::lime::_backend::native::_NativeApplication::KeyEventInfo_obj::__register();
::lime::_backend::native::_NativeApplication::GamepadEventType_Impl__obj::__register();
::lime::_backend::native::_NativeApplication::GamepadEventInfo_obj::__register();
::lime::_backend::native::NativeApplication_obj::__register();
::lime::_Assets::AssetType_Impl__obj::__register();
::lime::Assets_obj::__register();
::lime::AssetCache_obj::__register();
::haxe::zip::Uncompress_obj::__register();
::haxe::zip::FlushMode_obj::__register();
::haxe::zip::Compress_obj::__register();
::haxe::io::Path_obj::__register();
::haxe::io::Error_obj::__register();
::haxe::io::Eof_obj::__register();
::haxe::io::BytesBuffer_obj::__register();
::haxe::format::JsonParser_obj::__register();
::haxe::ds::ObjectMap_obj::__register();
::haxe::ds::IntMap_obj::__register();
::haxe::ds::EnumValueMap_obj::__register();
::haxe::ds::TreeNode_obj::__register();
::haxe::ds::BalancedTree_obj::__register();
::haxe::crypto::BaseCode_obj::__register();
::haxe::Utf8_obj::__register();
::haxe::Unserializer_obj::__register();
::haxe::Timer_obj::__register();
::haxe::Log_obj::__register();
::haxe::CallStack_obj::__register();
::haxe::StackItem_obj::__register();
::events::AppEvent_obj::__register();
::openfl::events::Event_obj::__register();
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
::NMEPreloader_obj::__register();
::List_obj::__register();
::EReg_obj::__register();
::__ASSET__OPENFL__fonts_myriadpro_regular_otf_obj::__register();
::__ASSET__OPENFL__fonts_myriadpro_bold_otf_obj::__register();
::__ASSET__OPENFL__fonts_consolas_bold_ttf_obj::__register();
::__ASSET__OPENFL__assets_fonts_myriadpro_regular_otf_obj::__register();
::__ASSET__OPENFL__assets_fonts_myriadpro_bold_otf_obj::__register();
::__ASSET__OPENFL__assets_fonts_consolas_bold_ttf_obj::__register();
::openfl::text::Font_obj::__register();
::__ASSET__fonts_myriadpro_regular_otf_obj::__register();
::__ASSET__fonts_myriadpro_bold_otf_obj::__register();
::__ASSET__fonts_consolas_bold_ttf_obj::__register();
::__ASSET__assets_fonts_myriadpro_regular_otf_obj::__register();
::__ASSET__assets_fonts_myriadpro_bold_otf_obj::__register();
::__ASSET__assets_fonts_consolas_bold_ttf_obj::__register();
::lime::text::Font_obj::__register();
::lime::system::System_obj::__register();
::Std_obj::__register();
::sys::io::_Process::Stdout_obj::__register();
::haxe::io::Input_obj::__register();
::haxe::io::Bytes_obj::__register();
::sys::io::_Process::Stdin_obj::__register();
::haxe::io::Output_obj::__register();
::sys::io::Process_obj::__register();
::Sys_obj::__register();
::cpp::Lib_obj::__register();
::Reflect_obj::__register();
::DefaultAssetLibrary_obj::__register();
::lime::AssetLibrary_obj::__register();
::Date_obj::__register();
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
::openfl::display::Sprite_obj::__register();
::openfl::display::DisplayObjectContainer_obj::__register();
::openfl::display::InteractiveObject_obj::__register();
::openfl::display::DisplayObject_obj::__register();
::openfl::display::IBitmapDrawable_obj::__register();
::openfl::events::EventDispatcher_obj::__register();
::openfl::events::IEventDispatcher_obj::__register();
::lime::graphics::utils::ImageDataUtil_obj::__init__();
::lime::utils::ByteArray_obj::__init__();
::cpp::Lib_obj::__boot();
::EReg_obj::__boot();
::haxe::Log_obj::__boot();
::openfl::events::IEventDispatcher_obj::__boot();
::openfl::events::EventDispatcher_obj::__boot();
::openfl::display::IBitmapDrawable_obj::__boot();
::openfl::display::DisplayObject_obj::__boot();
::openfl::display::InteractiveObject_obj::__boot();
::openfl::display::DisplayObjectContainer_obj::__boot();
::openfl::display::Sprite_obj::__boot();
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
::Date_obj::__boot();
::lime::AssetLibrary_obj::__boot();
::DefaultAssetLibrary_obj::__boot();
::Reflect_obj::__boot();
::Sys_obj::__boot();
::sys::io::Process_obj::__boot();
::haxe::io::Output_obj::__boot();
::sys::io::_Process::Stdin_obj::__boot();
::haxe::io::Bytes_obj::__boot();
::haxe::io::Input_obj::__boot();
::sys::io::_Process::Stdout_obj::__boot();
::Std_obj::__boot();
::lime::system::System_obj::__boot();
::lime::text::Font_obj::__boot();
::__ASSET__assets_fonts_consolas_bold_ttf_obj::__boot();
::__ASSET__assets_fonts_myriadpro_bold_otf_obj::__boot();
::__ASSET__assets_fonts_myriadpro_regular_otf_obj::__boot();
::__ASSET__fonts_consolas_bold_ttf_obj::__boot();
::__ASSET__fonts_myriadpro_bold_otf_obj::__boot();
::__ASSET__fonts_myriadpro_regular_otf_obj::__boot();
::openfl::text::Font_obj::__boot();
::__ASSET__OPENFL__assets_fonts_consolas_bold_ttf_obj::__boot();
::__ASSET__OPENFL__assets_fonts_myriadpro_bold_otf_obj::__boot();
::__ASSET__OPENFL__assets_fonts_myriadpro_regular_otf_obj::__boot();
::__ASSET__OPENFL__fonts_consolas_bold_ttf_obj::__boot();
::__ASSET__OPENFL__fonts_myriadpro_bold_otf_obj::__boot();
::__ASSET__OPENFL__fonts_myriadpro_regular_otf_obj::__boot();
::List_obj::__boot();
::NMEPreloader_obj::__boot();
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
::openfl::events::Event_obj::__boot();
::events::AppEvent_obj::__boot();
::haxe::StackItem_obj::__boot();
::haxe::CallStack_obj::__boot();
::haxe::Timer_obj::__boot();
::haxe::Unserializer_obj::__boot();
::haxe::Utf8_obj::__boot();
::haxe::crypto::BaseCode_obj::__boot();
::haxe::ds::BalancedTree_obj::__boot();
::haxe::ds::TreeNode_obj::__boot();
::haxe::ds::EnumValueMap_obj::__boot();
::haxe::ds::IntMap_obj::__boot();
::haxe::ds::ObjectMap_obj::__boot();
::haxe::format::JsonParser_obj::__boot();
::haxe::io::BytesBuffer_obj::__boot();
::haxe::io::Eof_obj::__boot();
::haxe::io::Error_obj::__boot();
::haxe::io::Path_obj::__boot();
::haxe::zip::Compress_obj::__boot();
::haxe::zip::FlushMode_obj::__boot();
::haxe::zip::Uncompress_obj::__boot();
::lime::AssetCache_obj::__boot();
::lime::Assets_obj::__boot();
::lime::_Assets::AssetType_Impl__obj::__boot();
::lime::_backend::native::NativeApplication_obj::__boot();
::lime::_backend::native::_NativeApplication::GamepadEventInfo_obj::__boot();
::lime::_backend::native::_NativeApplication::GamepadEventType_Impl__obj::__boot();
::lime::_backend::native::_NativeApplication::KeyEventInfo_obj::__boot();
::lime::_backend::native::_NativeApplication::KeyEventType_Impl__obj::__boot();
::lime::_backend::native::_NativeApplication::MouseEventInfo_obj::__boot();
::lime::_backend::native::_NativeApplication::MouseEventType_Impl__obj::__boot();
::lime::_backend::native::_NativeApplication::RenderEventInfo_obj::__boot();
::lime::_backend::native::_NativeApplication::RenderEventType_Impl__obj::__boot();
::lime::_backend::native::_NativeApplication::TextEventInfo_obj::__boot();
::lime::_backend::native::_NativeApplication::TextEventType_Impl__obj::__boot();
::lime::_backend::native::_NativeApplication::TouchEventInfo_obj::__boot();
::lime::_backend::native::_NativeApplication::TouchEventType_Impl__obj::__boot();
::lime::_backend::native::_NativeApplication::UpdateEventInfo_obj::__boot();
::lime::_backend::native::_NativeApplication::UpdateEventType_Impl__obj::__boot();
::lime::_backend::native::_NativeApplication::WindowEventInfo_obj::__boot();
::lime::_backend::native::_NativeApplication::WindowEventType_Impl__obj::__boot();
::lime::_backend::native::NativeMouse_obj::__boot();
::lime::_backend::native::_NativeMouse::MouseCursorType_Impl__obj::__boot();
::lime::_backend::native::NativeRenderer_obj::__boot();
::lime::_backend::native::NativeWindow_obj::__boot();
::lime::_backend::native::_NativeWindow::WindowFlags_Impl__obj::__boot();
::lime::app::IModule_obj::__boot();
::lime::app::Module_obj::__boot();
::lime::app::Application_obj::__boot();
::lime::app::Event_obj::__boot();
::lime::app::Preloader_obj::__boot();
::lime::audio::ALAudioContext_obj::__boot();
::lime::audio::ALCAudioContext_obj::__boot();
::lime::audio::AudioBuffer_obj::__boot();
::lime::audio::AudioContext_obj::__boot();
::lime::audio::AudioManager_obj::__boot();
::lime::audio::AudioSource_obj::__boot();
::lime::audio::FlashAudioContext_obj::__boot();
::lime::audio::HTML5AudioContext_obj::__boot();
::lime::audio::WebAudioContext_obj::__boot();
::lime::audio::openal::AL_obj::__boot();
::lime::audio::openal::ALC_obj::__boot();
::lime::audio::openal::_ALContext::ALContext_Impl__obj::__boot();
::lime::audio::openal::_ALDevice::ALDevice_Impl__obj::__boot();
::lime::graphics::CanvasRenderContext_obj::__boot();
::lime::graphics::ConsoleRenderContext_obj::__boot();
::lime::graphics::DOMRenderContext_obj::__boot();
::lime::graphics::FlashRenderContext_obj::__boot();
::lime::graphics::GLRenderContext_obj::__boot();
::lime::graphics::Image_obj::__boot();
::lime::graphics::ImageBuffer_obj::__boot();
::lime::graphics::ImageChannel_obj::__boot();
::lime::graphics::ImageType_obj::__boot();
::lime::graphics::_PixelFormat::PixelFormat_Impl__obj::__boot();
::lime::graphics::RenderContext_obj::__boot();
::lime::graphics::Renderer_obj::__boot();
::lime::graphics::cairo::Cairo_obj::__boot();
::lime::graphics::cairo::_CairoAntialias::CairoAntialias_Impl__obj::__boot();
::lime::graphics::cairo::_CairoContent::CairoContent_Impl__obj::__boot();
::lime::graphics::cairo::_CairoExtend::CairoExtend_Impl__obj::__boot();
::lime::graphics::cairo::_CairoFillRule::CairoFillRule_Impl__obj::__boot();
::lime::graphics::cairo::_CairoFilter::CairoFilter_Impl__obj::__boot();
::lime::graphics::cairo::_CairoFormat::CairoFormat_Impl__obj::__boot();
::lime::graphics::cairo::_CairoLineCap::CairoLineCap_Impl__obj::__boot();
::lime::graphics::cairo::_CairoLineJoin::CairoLineJoin_Impl__obj::__boot();
::lime::graphics::cairo::_CairoOperator::CairoOperator_Impl__obj::__boot();
::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::__boot();
::lime::graphics::cairo::_CairoStatus::CairoStatus_Impl__obj::__boot();
::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::__boot();
::lime::graphics::format::BMP_obj::__boot();
::lime::graphics::format::BMPType_obj::__boot();
::lime::graphics::format::JPEG_obj::__boot();
::lime::graphics::format::PNG_obj::__boot();
::lime::graphics::opengl::GL_obj::__boot();
::lime::graphics::opengl::GLObject_obj::__boot();
::lime::graphics::opengl::GLBuffer_obj::__boot();
::lime::graphics::opengl::GLFramebuffer_obj::__boot();
::lime::graphics::opengl::GLProgram_obj::__boot();
::lime::graphics::opengl::GLRenderbuffer_obj::__boot();
::lime::graphics::opengl::GLShader_obj::__boot();
::lime::graphics::opengl::GLTexture_obj::__boot();
::lime::graphics::utils::ImageCanvasUtil_obj::__boot();
::lime::graphics::utils::ImageDataUtil_obj::__boot();
::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::__boot();
::lime::math::Matrix3_obj::__boot();
::lime::math::_Matrix4::Matrix4_Impl__obj::__boot();
::lime::math::Rectangle_obj::__boot();
::lime::math::Vector2_obj::__boot();
::lime::math::Vector4_obj::__boot();
::lime::system::_System::SystemDirectory_Impl__obj::__boot();
::lime::text::_Glyph::Glyph_Impl__obj::__boot();
::lime::text::GlyphMetrics_obj::__boot();
::lime::text::GlyphPosition_obj::__boot();
::lime::text::_TextDirection::TextDirection_Impl__obj::__boot();
::lime::text::TextLayout_obj::__boot();
::lime::text::_TextScript::TextScript_Impl__obj::__boot();
::lime::ui::Gamepad_obj::__boot();
::lime::ui::_GamepadAxis::GamepadAxis_Impl__obj::__boot();
::lime::ui::_GamepadButton::GamepadButton_Impl__obj::__boot();
::lime::ui::_KeyCode::KeyCode_Impl__obj::__boot();
::lime::ui::_KeyModifier::KeyModifier_Impl__obj::__boot();
::lime::ui::Mouse_obj::__boot();
::lime::ui::MouseCursor_obj::__boot();
::lime::ui::Window_obj::__boot();
::lime::utils::IMemoryRange_obj::__boot();
::lime::utils::ArrayBufferView_obj::__boot();
::lime::utils::IDataInput_obj::__boot();
::lime::utils::ByteArray_obj::__boot();
::lime::utils::CompressionAlgorithm_obj::__boot();
::lime::utils::Float32Array_obj::__boot();
::lime::utils::GLUtils_obj::__boot();
::lime::utils::Int16Array_obj::__boot();
::lime::utils::Int32Array_obj::__boot();
::lime::utils::UInt16Array_obj::__boot();
::lime::utils::UInt32Array_obj::__boot();
::lime::utils::UInt8Array_obj::__boot();
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
::openfl::IAssetCache_obj::__boot();
::openfl::AssetCache_obj::__boot();
::openfl::Assets_obj::__boot();
::openfl::AssetLibrary_obj::__boot();
::openfl::_Assets::AssetType_Impl__obj::__boot();
::openfl::display::MovieClip_obj::__boot();
::openfl::display::LoaderInfo_obj::__boot();
::openfl::system::ApplicationDomain_obj::__boot();
::openfl::events::UncaughtErrorEvents_obj::__boot();
::openfl::geom::Matrix_obj::__boot();
::openfl::geom::ColorTransform_obj::__boot();
::openfl::Lib_obj::__boot();
::openfl::Memory_obj::__boot();
::openfl::_Vector::Vector_Impl__obj::__boot();
::openfl::_internal::renderer::AbstractMaskManager_obj::__boot();
::openfl::_internal::renderer::AbstractRenderer_obj::__boot();
::openfl::_internal::renderer::RenderSession_obj::__boot();
::openfl::_internal::renderer::TextFieldGraphics_obj::__boot();
::openfl::_internal::renderer::cairo::CairoBitmap_obj::__boot();
::openfl::_internal::renderer::cairo::CairoGraphics_obj::__boot();
::openfl::_internal::renderer::cairo::CairoMaskManager_obj::__boot();
::openfl::_internal::renderer::cairo::CairoRenderer_obj::__boot();
::openfl::_internal::renderer::cairo::CairoShape_obj::__boot();
::openfl::_internal::renderer::canvas::CanvasBitmap_obj::__boot();
::openfl::_internal::renderer::canvas::CanvasGraphics_obj::__boot();
::openfl::_internal::renderer::canvas::CanvasMaskManager_obj::__boot();
::openfl::_internal::renderer::canvas::CanvasRenderer_obj::__boot();
::openfl::_internal::renderer::canvas::CanvasShape_obj::__boot();
::openfl::_internal::renderer::canvas::CanvasTextField_obj::__boot();
::openfl::_internal::renderer::dom::DOMBitmap_obj::__boot();
::openfl::_internal::renderer::dom::DOMRenderer_obj::__boot();
::openfl::_internal::renderer::dom::DOMShape_obj::__boot();
::openfl::_internal::renderer::dom::DOMTextField_obj::__boot();
::openfl::_internal::renderer::opengl::GLBitmap_obj::__boot();
::openfl::_internal::renderer::opengl::GLRenderer_obj::__boot();
::openfl::_internal::renderer::opengl::GLTextField_obj::__boot();
::openfl::_internal::renderer::opengl::shaders2::Shader_obj::__boot();
::openfl::_internal::renderer::opengl::shaders2::DefaultShader_obj::__boot();
::openfl::_internal::renderer::opengl::shaders2::_DefaultShader::Attrib_Impl__obj::__boot();
::openfl::_internal::renderer::opengl::shaders2::_DefaultShader::Uniform_Impl__obj::__boot();
::openfl::_internal::renderer::opengl::shaders2::DrawTrianglesShader_obj::__boot();
::openfl::_internal::renderer::opengl::shaders2::_DrawTrianglesShader::Attrib_Impl__obj::__boot();
::openfl::_internal::renderer::opengl::shaders2::_DrawTrianglesShader::Uniform_Impl__obj::__boot();
::openfl::_internal::renderer::opengl::shaders2::FillShader_obj::__boot();
::openfl::_internal::renderer::opengl::shaders2::_FillShader::Attrib_Impl__obj::__boot();
::openfl::_internal::renderer::opengl::shaders2::_FillShader::Uniform_Impl__obj::__boot();
::openfl::_internal::renderer::opengl::shaders2::PatternFillShader_obj::__boot();
::openfl::_internal::renderer::opengl::shaders2::_PatternFillShader::Attrib_Impl__obj::__boot();
::openfl::_internal::renderer::opengl::shaders2::_PatternFillShader::Uniform_Impl__obj::__boot();
::openfl::_internal::renderer::opengl::shaders2::PrimitiveShader_obj::__boot();
::openfl::_internal::renderer::opengl::shaders2::_PrimitiveShader::Attrib_Impl__obj::__boot();
::openfl::_internal::renderer::opengl::shaders2::_PrimitiveShader::Uniform_Impl__obj::__boot();
::openfl::_internal::renderer::opengl::utils::BlendModeManager_obj::__boot();
::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__boot();
::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__boot();
::openfl::_internal::renderer::opengl::utils::LineStyle_obj::__boot();
::openfl::_internal::renderer::opengl::utils::_DrawPath::WindingRule_Impl__obj::__boot();
::openfl::_internal::renderer::opengl::utils::FillType_obj::__boot();
::openfl::_internal::renderer::opengl::utils::FilterManager_obj::__boot();
::openfl::_internal::renderer::opengl::utils::FilterTexture_obj::__boot();
::openfl::_internal::renderer::opengl::utils::GLMaskManager_obj::__boot();
::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__boot();
::openfl::geom::Rectangle_obj::__boot();
::openfl::geom::Point_obj::__boot();
::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::__boot();
::openfl::_internal::renderer::opengl::utils::GLStack_obj::__boot();
::openfl::_internal::renderer::opengl::utils::GLBucket_obj::__boot();
::openfl::_internal::renderer::opengl::utils::GLBucketData_obj::__boot();
::openfl::_internal::renderer::opengl::utils::BucketMode_obj::__boot();
::openfl::_internal::renderer::opengl::utils::BucketDataType_obj::__boot();
::openfl::_internal::renderer::opengl::utils::GLGraphicsData_obj::__boot();
::openfl::_internal::renderer::opengl::utils::PolyK_obj::__boot();
::openfl::_internal::renderer::opengl::utils::GraphicType_obj::__boot();
::openfl::_internal::renderer::opengl::utils::_GraphicsRenderer::RenderMode_Impl__obj::__boot();
::openfl::_internal::renderer::opengl::utils::ShaderManager_obj::__boot();
::openfl::_internal::renderer::opengl::utils::SpriteBatch_obj::__boot();
::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State_obj::__boot();
::openfl::_internal::renderer::opengl::utils::StencilManager_obj::__boot();
::openfl::_internal::renderer::opengl::utils::VertexArray_obj::__boot();
::openfl::_internal::renderer::opengl::utils::_VertexAttribute::ElementType_Impl__obj::__boot();
::openfl::display::Bitmap_obj::__boot();
::openfl::display::BitmapData_obj::__boot();
::openfl::display::TextureUvs_obj::__boot();
::openfl::display::BlendMode_obj::__boot();
::openfl::display::CapsStyle_obj::__boot();
::openfl::display::DirectRenderer_obj::__boot();
::openfl::display::FrameLabel_obj::__boot();
::openfl::display::GradientType_obj::__boot();
::openfl::display::Graphics_obj::__boot();
::openfl::display::DrawCommand_obj::__boot();
::openfl::display::GraphicsPathCommand_obj::__boot();
::openfl::display::GraphicsPathWinding_obj::__boot();
::openfl::display::IGraphicsData_obj::__boot();
::openfl::display::GraphicsDataType_obj::__boot();
::openfl::display::InterpolationMethod_obj::__boot();
::openfl::display::JPEGEncoderOptions_obj::__boot();
::openfl::display::JointStyle_obj::__boot();
::openfl::display::LineScaleMode_obj::__boot();
::openfl::display::Loader_obj::__boot();
::openfl::display::OpenGLView_obj::__boot();
::openfl::display::PNGEncoderOptions_obj::__boot();
::openfl::display::PixelSnapping_obj::__boot();
::openfl::display::Preloader_obj::__boot();
::openfl::display::Shape_obj::__boot();
::openfl::display::SpreadMethod_obj::__boot();
::openfl::display::Stage_obj::__boot();
::openfl::display::Stage3D_obj::__boot();
::openfl::display::StageAlign_obj::__boot();
::openfl::display::StageDisplayState_obj::__boot();
::openfl::display::StageQuality_obj::__boot();
::openfl::display::StageScaleMode_obj::__boot();
::openfl::display::Tilesheet_obj::__boot();
::openfl::display::TriangleCulling_obj::__boot();
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
::openfl::errors::IOError_obj::__boot();
::openfl::errors::RangeError_obj::__boot();
::openfl::errors::TypeError_obj::__boot();
::openfl::events::TextEvent_obj::__boot();
::openfl::events::ErrorEvent_obj::__boot();
::openfl::events::_EventDispatcher::Listener_obj::__boot();
::openfl::events::EventPhase_obj::__boot();
::openfl::events::FocusEvent_obj::__boot();
::openfl::events::IOErrorEvent_obj::__boot();
::openfl::events::KeyboardEvent_obj::__boot();
::openfl::events::MouseEvent_obj::__boot();
::openfl::events::TimerEvent_obj::__boot();
::openfl::events::TouchEvent_obj::__boot();
::openfl::filters::BitmapFilter_obj::__boot();
::openfl::geom::Matrix3D_obj::__boot();
::openfl::geom::Orientation3D_obj::__boot();
::openfl::geom::Transform_obj::__boot();
::openfl::geom::Vector3D_obj::__boot();
::openfl::media::ID3Info_obj::__boot();
::openfl::media::Sound_obj::__boot();
::openfl::media::SoundChannel_obj::__boot();
::openfl::media::SoundLoaderContext_obj::__boot();
::openfl::media::SoundTransform_obj::__boot();
::openfl::net::URLRequest_obj::__boot();
::openfl::net::URLRequestHeader_obj::__boot();
::openfl::net::URLRequestMethod_obj::__boot();
::openfl::system::LoaderContext_obj::__boot();
::openfl::system::SecurityDomain_obj::__boot();
::openfl::text::AntiAliasType_obj::__boot();
::openfl::text::FontStyle_obj::__boot();
::openfl::text::FontType_obj::__boot();
::openfl::text::GridFitType_obj::__boot();
::openfl::text::TextField_obj::__boot();
::openfl::text::TextFormatRange_obj::__boot();
::openfl::text::TextFieldAutoSize_obj::__boot();
::openfl::text::TextFieldType_obj::__boot();
::openfl::text::TextFormat_obj::__boot();
::openfl::text::TextFormatAlign_obj::__boot();
::openfl::text::TextLineMetrics_obj::__boot();
::openfl::ui::_KeyLocation::KeyLocation_Impl__obj::__boot();
::openfl::ui::Keyboard_obj::__boot();
::openfl::utils::Timer_obj::__boot();
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
::sys::FileSystem_obj::__boot();
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

