#if !lime_hybrid


import openfl.Assets;


#if (!macro && !display && !waxe)


@:access(openfl._legacy.Assets)


class ApplicationMain {
	
	
	private static var barA:flash.display.Sprite;
	private static var barB:flash.display.Sprite;
	private static var container:flash.display.Sprite;
	private static var forceHeight:Int;
	private static var forceWidth:Int;
	
	
	public static function main () {
		
		flash.Lib.setPackage ("Christian Kaegi", "TurtlebiteSim2", "net.kaegi.TurtlebiteSim2", "1.0.0");
		
		
		#if ios
		flash.display.Stage.shouldRotateInterface = function (orientation:Int):Bool {
			return true;
		}
		#end
		
		
		
		
		
		flash.Lib.create (function () {
				
				flash.Lib.current.stage.align = flash.display.StageAlign.TOP_LEFT;
				flash.Lib.current.stage.scaleMode = flash.display.StageScaleMode.NO_SCALE;
				flash.Lib.current.loaderInfo = flash.display.LoaderInfo.create (null);
				
				
				
				#if windows
				try {
					
					var currentPath = haxe.io.Path.directory (Sys.executablePath ());
					Sys.setCwd (currentPath);
					
				} catch (e:Dynamic) {}
				#elseif linux
				try {
					
					if (!sys.FileSystem.exists (Sys.getCwd () + "/lime-legacy.ndll")) {
						
						Sys.setCwd (haxe.io.Path.directory (Sys.executablePath ()));
						
					}
					
				} catch (e:Dynamic) {}
				#end
				
				
				
				openfl.Assets.initialize ();
				
				var hasMain = false;
				
				for (methodName in Type.getClassFields (App)) {
					
					if (methodName == "main") {
						
						hasMain = true;
						break;
						
					}
					
				}
				
				if (hasMain) {
					
					Reflect.callMethod (App, Reflect.field (App, "main"), []);
					
				} else {
					
					var instance:DocumentClass = Type.createInstance (DocumentClass, []);
					
					if (Std.is (instance, flash.display.DisplayObject)) {
						
						flash.Lib.current.addChild (cast instance);
						
					}
					
				}
				
			},
			0, 0, 
			30, 
			7303023,
			(true ? flash.Lib.HARDWARE : 0) |
			(true ? flash.Lib.ALLOW_SHADERS : 0) |
			(true ? flash.Lib.REQUIRE_SHADERS : 0) |
			(false ? flash.Lib.DEPTH_BUFFER : 0) |
			(false ? flash.Lib.STENCIL_BUFFER : 0) |
			(true ? flash.Lib.RESIZABLE : 0) |
			(false ? flash.Lib.BORDERLESS : 0) |
			(false ? flash.Lib.VSYNC : 0) |
			(true ? flash.Lib.FULLSCREEN : 0) |
			(0 == 4 ? flash.Lib.HW_AA_HIRES : 0) |
			(0 == 2 ? flash.Lib.HW_AA : 0),
			"TurtlebiteSim2",
			null
			
		);
		
	}
	
	
	
	
	#if neko
	@:noCompletion public static function __init__ () {
		
		untyped $loader.path = $array (haxe.io.Path.directory (Sys.executablePath ()), $loader.path);
		untyped $loader.path = $array ("./", $loader.path);
		untyped $loader.path = $array ("@executable_path/", $loader.path);
		
	}
	#end
	
	
}


@:build(DocumentClass.build())
@:keep class DocumentClass extends App {}





#elseif macro


import haxe.macro.Context;
import haxe.macro.Expr;


class DocumentClass {
	
	
	macro public static function build ():Array<Field> {
		
		var classType = Context.getLocalClass ().get ();
		var searchTypes = classType;
		
		while (searchTypes.superClass != null) {
			
			if (searchTypes.pack.length >= 2 && (searchTypes.pack[1] == "display" || searchTypes.pack[2] == "display") && searchTypes.name == "DisplayObject") {
				
				var fields = Context.getBuildFields ();
				var method = macro { return flash.Lib.current.stage; }
				
				fields.push ({ name: "get_stage", access: [ APrivate, AOverride ], kind: FFun({ args: [], expr: method, params: [], ret: macro :flash.display.Stage }), pos: Context.currentPos () });
				return fields;
				
			}
			
			searchTypes = searchTypes.superClass.t.get ();
			
		}
		
		return null;
		
	}
	
	
}


#elseif waxe


class ApplicationMain {
	
	
	public static var autoShowFrame:Bool = true;
	public static var frame:wx.Frame;
	#if openfl
	static public var nmeStage:wx.NMEStage;
	#end
	
	
	public static function main () {
		
		#if openfl
		flash.Lib.setPackage ("Christian Kaegi", "TurtlebiteSim2", "net.kaegi.TurtlebiteSim2", "1.0.0");
		
		#end
		
		wx.App.boot (function () {
			
			
			frame = wx.Frame.create (null, null, "TurtlebiteSim2", null, { width: 0, height: 0 });
			
			
			#if openfl
			var stage = wx.NMEStage.create (frame, null, null, { width: 0, height: 0 });
			#end
			
			var hasMain = false;
			for (methodName in Type.getClassFields (App)) {
				if (methodName == "main") {
					hasMain = true;
					break;
				}
			}
			
			if (hasMain) {
				Reflect.callMethod (App, Reflect.field (App, "main"), []);
			}else {
				var instance = Type.createInstance (App, []);
			}
			
			if (autoShowFrame) {
				wx.App.setTopWindow (frame);
				frame.shown = true;
			}
			
		});
		
	}
	
	#if neko
	@:noCompletion public static function __init__ () {
		
		untyped $loader.path = $array (haxe.io.Path.directory (Sys.executablePath ()), $loader.path);
		untyped $loader.path = $array ("./", $loader.path);
		untyped $loader.path = $array ("@executable_path/", $loader.path);
		
	}
	#end
	
	
}


#else


import App;

class ApplicationMain {
	
	
	public static function main () {
		
		
		
	}
	
	
}


#end


#else


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
		var stage = new openfl._legacy.display.HybridStage (app.window.width, app.window.height, config.background);
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
			file: "TurtlebiteSim2",
			fps: Std.int (30),
			fullscreen: true,
			height: Std.int (0),
			orientation: "",
			packageName: "net.kaegi.TurtlebiteSim2",
			resizable: true,
			stencilBuffer: false,
			title: "TurtlebiteSim2",
			version: "1.0.0",
			vsync: false,
			width: Std.int (0),
			
		}
		
		#if (js && html5)
		#if (munit || utest)
		openfl.Lib.embed (null, 0, 0, "null");
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
			
			if (Std.is (instance, flash.display.DisplayObject)) {
				
				flash.Lib.current.addChild (cast instance);
				
			}
			
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
			
			if (searchTypes.pack.length >= 2 && (searchTypes.pack[1] == "display" || searchTypes.pack[2] == "display") && searchTypes.name == "DisplayObject") {
				
				var fields = Context.getBuildFields ();
				var method = macro { return flash.Lib.current.stage; }
				
				fields.push ({ name: "get_stage", access: [ APrivate, AOverride ], kind: FFun({ args: [], expr: method, params: [], ret: macro :flash.display.Stage }), pos: Context.currentPos () });
				return fields;
				
			}
			
			searchTypes = searchTypes.superClass.t.get ();
			
		}
		
		return null;
		
	}
	
	
}


#end


#end
