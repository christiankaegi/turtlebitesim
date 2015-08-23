#if !macro


@:access(lime.Assets)


class ApplicationMain {
	
	
	public static var config:lime.app.Config;
	public static var preloader:openfl.display.Preloader;
	
	
	public static function create ():Void {
		
		var app = new lime.app.Application ();
		app.create (config);
		openfl.Lib.application = app;
		
		#if !flash
		var stage = new openfl.display.Stage (app.window.width, app.window.height, config.background);
		stage.addChild (openfl.Lib.current);
		app.addModule (stage);
		#end
		
		var display = new NMEPreloader ();
		
		preloader = new openfl.display.Preloader (display);
		preloader.onComplete = init;
		preloader.create (config);
		
		#if (js && html5)
		var urls = [];
		var types = [];
		
		
		urls.push ("assets/fonts/Consolas Bold.eot");
		types.push (lime.Assets.AssetType.BINARY);
		
		
		urls.push ("assets/fonts/Consolas Bold.svg");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("Consolas Bold");
		types.push (lime.Assets.AssetType.FONT);
		
		
		urls.push ("assets/fonts/Consolas Bold.woff");
		types.push (lime.Assets.AssetType.BINARY);
		
		
		urls.push ("assets/fonts/MyriadPro-Bold.eot");
		types.push (lime.Assets.AssetType.BINARY);
		
		
		urls.push ("Myriad Pro Bold");
		types.push (lime.Assets.AssetType.FONT);
		
		
		urls.push ("assets/fonts/MyriadPro-Bold.woff");
		types.push (lime.Assets.AssetType.BINARY);
		
		
		urls.push ("assets/fonts/MyriadPro-Regular.eot");
		types.push (lime.Assets.AssetType.BINARY);
		
		
		urls.push ("Myriad Pro");
		types.push (lime.Assets.AssetType.FONT);
		
		
		urls.push ("assets/fonts/MyriadPro-Regular.woff");
		types.push (lime.Assets.AssetType.BINARY);
		
		
		urls.push ("assets/images/Accu-out-0.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/Accu-out-1.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/Accu-out-2.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/Accu-out-3.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/accuPopup_1Bit_bottomLayer2048.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/accuPopup_1Bit_gate1_out.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/accuPopup_1Bit_gate2_out.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/accuPopup_1Bit_gate3_out.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/accuPopup_1Bit_gate4_out.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/accuPopup_1Bit_input.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/accuPopup_1Bit_set.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/accuPopup_bottomLayer2048.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/accuPopup_enabler_enable.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/accuPopup_enabler_out_0.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/accuPopup_enabler_out_1.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/accuPopup_enabler_out_2.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/accuPopup_enabler_out_3.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/accuPopup_memory_in_0.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/accuPopup_memory_in_1.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/accuPopup_memory_in_2.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/accuPopup_memory_in_3.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/accuPopup_memory_out_0.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/accuPopup_memory_out_1.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/accuPopup_memory_out_2.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/accuPopup_memory_out_3.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/accuPopup_memory_set.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/ALU-out-0.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/ALU-out-1.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/ALU-out-2.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/ALU-out-3.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/ALU-out-equal.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/ALU-out.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/architecture.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/bottom_layer.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/busline0.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/busline1.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/busline2.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/busline3.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/busline4.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/busline5.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/busline6.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/busline7.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/Clock.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/clockGlow.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/comp_static_lines.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/coverAlu2048.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/coverDecoder2048.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/coverMultiplexer2048.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/Decoder-out-1.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/Decoder-out-2.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/Decoder-out-3.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/EditRomPopup2048.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/Enabler1-out-0.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/Enabler1-out-1.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/Enabler1-out-2.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/Enabler1-out-3.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/Enabler2-out-0.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/Enabler2-out-1.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/Enabler2-out-2.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/Enabler2-out-3.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/enterInstruction_BG.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/enterInstruction_line0.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/enterInstruction_line1.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/enterInstruction_line2.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/enterInstruction_line3.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/enterInstruction_line4.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/enterInstruction_line5.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/enterInstruction_line6.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/enterInstruction_line7.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/FlowArrows2048.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/G1-out-0.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/G1-out-1.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/G1-out-2.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/G1-out-3.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/G2-out.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/G3-out.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/G4-out.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/G5-out.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/G6-out.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/G7-out.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/G8-out.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/G9-out.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/INP-out.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/instructionTable.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/instructionTable2048.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/JE-out.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/JMP-out.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/JNE-out.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/Key-out-0.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/Key-out-1.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/Key-out-2.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/Key-out-3.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/LDA-out.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/LDI-out.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/MarkUnits.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/MarkUnits2048.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/MOV-out.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/MUX-out-0.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/MUX-out-1.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/MUX-out-2.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/MUX-out-3.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/OUT-out.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/pc-out-0.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/pc-out-1.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/pc-out-2.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/pc-out-3.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/PowerOffCover.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/PowerOffCover2048.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/R1-out-0.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/R1-out-1.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/R1-out-2.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/R1-out-3.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/R2-out-0.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/R2-out-1.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/R2-out-2.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/R2-out-3.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/RAM-out-0.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/RAM-out-1.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/RAM-out-2.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/RAM-out-3.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/SDA-out.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/tfFrame.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/top_layer.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/top_layer2048.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/top_layer_colored.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/tbsimlogo.svg");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/tbsimlogo2.svg");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/tbsimlogo3.svg");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("fonts/Consolas Bold.eot");
		types.push (lime.Assets.AssetType.BINARY);
		
		
		urls.push ("fonts/Consolas Bold.svg");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("Consolas Bold");
		types.push (lime.Assets.AssetType.FONT);
		
		
		urls.push ("fonts/Consolas Bold.woff");
		types.push (lime.Assets.AssetType.BINARY);
		
		
		urls.push ("fonts/MyriadPro-Bold.eot");
		types.push (lime.Assets.AssetType.BINARY);
		
		
		urls.push ("Myriad Pro Bold");
		types.push (lime.Assets.AssetType.FONT);
		
		
		urls.push ("fonts/MyriadPro-Bold.woff");
		types.push (lime.Assets.AssetType.BINARY);
		
		
		urls.push ("fonts/MyriadPro-Regular.eot");
		types.push (lime.Assets.AssetType.BINARY);
		
		
		urls.push ("Myriad Pro");
		types.push (lime.Assets.AssetType.FONT);
		
		
		urls.push ("fonts/MyriadPro-Regular.woff");
		types.push (lime.Assets.AssetType.BINARY);
		
		
		
		if (config.assetsPrefix != null) {
			
			for (i in 0...urls.length) {
				
				if (types[i] != lime.Assets.AssetType.FONT) {
					
					urls[i] = config.assetsPrefix + urls[i];
					
				}
				
			}
			
		}
		
		preloader.load (urls, types);
		#end
		
		var result = app.exec ();
		
		#if (sys && !nodejs && !emscripten)
		Sys.exit (result);
		#end
		
	}
	
	
	public static function init ():Void {
		
		var loaded = 0;
		var total = 0;
		var library_onLoad = function (__) {
			
			loaded++;
			
			if (loaded == total) {
				
				start ();
				
			}
			
		}
		
		preloader = null;
		
		
		
		if (loaded == total) {
			
			start ();
			
		}
		
	}
	
	
	public static function main () {
		
		config = {
			
			antialiasing: Std.int (0),
			background: Std.int (7303023),
			borderless: false,
			company: "Christian Kaegi",
			depthBuffer: false,
			file: "TurtlebiteSim3",
			fps: Std.int (30),
			fullscreen: false,
			hardware: true,
			height: Std.int (768),
			orientation: "",
			packageName: "net.kaegi.TurtlebiteSim3",
			resizable: true,
			stencilBuffer: true,
			title: "TurtlebiteSim3",
			version: "1.0.0",
			vsync: false,
			width: Std.int (1024),
			
		}
		
		#if (js && html5)
		#if (munit || utest)
		openfl.Lib.embed (null, 1024, 768, "6F6F6F");
		#end
		#else
		create ();
		#end
		
	}
	
	
	public static function start ():Void {
		
		var hasMain = false;
		var entryPoint = Type.resolveClass ("App");
		
		for (methodName in Type.getClassFields (entryPoint)) {
			
			if (methodName == "main") {
				
				hasMain = true;
				break;
				
			}
			
		}
		
		lime.Assets.initialize ();
		
		if (hasMain) {
			
			Reflect.callMethod (entryPoint, Reflect.field (entryPoint, "main"), []);
			
		} else {
			
			var instance:DocumentClass = Type.createInstance (DocumentClass, []);
			
			/*if (Std.is (instance, openfl.display.DisplayObject)) {
				
				openfl.Lib.current.addChild (cast instance);
				
			}*/
			
		}
		
		openfl.Lib.current.stage.dispatchEvent (new openfl.events.Event (openfl.events.Event.RESIZE, false, false));
		
	}
	
	
	#if neko
	@:noCompletion public static function __init__ () {
		
		var loader = new neko.vm.Loader (untyped $loader);
		loader.addPath (haxe.io.Path.directory (Sys.executablePath ()));
		loader.addPath ("./");
		loader.addPath ("@executable_path/");
		
	}
	#end
	
	
}


@:build(DocumentClass.build())
@:keep class DocumentClass extends App {}


#else


import haxe.macro.Context;
import haxe.macro.Expr;


class DocumentClass {
	
	
	macro public static function build ():Array<Field> {
		
		var classType = Context.getLocalClass ().get ();
		var searchTypes = classType;
		
		while (searchTypes.superClass != null) {
			
			if (searchTypes.pack.length == 2 && searchTypes.pack[1] == "display" && searchTypes.name == "DisplayObject") {
				
				var fields = Context.getBuildFields ();
				
				var method = macro {
					
					openfl.Lib.current.addChild (this);
					super ();
					dispatchEvent (new openfl.events.Event (openfl.events.Event.ADDED_TO_STAGE, false, false));
					
				}
				
				fields.push ({ name: "new", access: [ APublic ], kind: FFun({ args: [], expr: method, params: [], ret: macro :Void }), pos: Context.currentPos () });
				
				return fields;
				
			}
			
			searchTypes = searchTypes.superClass.t.get ();
			
		}
		
		return null;
		
	}
	
	
}


#end
