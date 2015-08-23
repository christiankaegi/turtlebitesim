#if !lime_hybrid


package;


import haxe.Timer;
import haxe.Unserializer;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.MovieClip;
import openfl.events.Event;
import openfl.text.Font;
import openfl.media.Sound;
import openfl.net.URLRequest;
import openfl.utils.ByteArray;
import openfl.Assets;

#if (flash || js)
import openfl.display.Loader;
import openfl.events.Event;
import openfl.net.URLLoader;
#end

#if sys
import sys.FileSystem;
#end

#if ios
import openfl._legacy.utils.SystemPath;
#end


@:access(openfl.media.Sound)
class DefaultAssetLibrary extends AssetLibrary {
	
	
	public var className (default, null) = new Map <String, Dynamic> ();
	public var path (default, null) = new Map <String, String> ();
	public var type (default, null) = new Map <String, AssetType> ();
	
	private var lastModified:Float;
	private var timer:Timer;
	
	
	public function new () {
		
		super ();
		
		#if flash
		
		path.set ("assets/fonts/Consolas Bold.eot", "assets/fonts/Consolas Bold.eot");
		type.set ("assets/fonts/Consolas Bold.eot", AssetType.BINARY);
		path.set ("assets/fonts/Consolas Bold.svg", "assets/fonts/Consolas Bold.svg");
		type.set ("assets/fonts/Consolas Bold.svg", AssetType.TEXT);
		path.set ("assets/fonts/Consolas Bold.ttf", "assets/fonts/Consolas Bold.ttf");
		type.set ("assets/fonts/Consolas Bold.ttf", AssetType.FONT);
		path.set ("assets/fonts/Consolas Bold.woff", "assets/fonts/Consolas Bold.woff");
		type.set ("assets/fonts/Consolas Bold.woff", AssetType.BINARY);
		path.set ("assets/fonts/MyriadPro-Bold.eot", "assets/fonts/MyriadPro-Bold.eot");
		type.set ("assets/fonts/MyriadPro-Bold.eot", AssetType.BINARY);
		path.set ("assets/fonts/MyriadPro-Bold.otf", "assets/fonts/MyriadPro-Bold.otf");
		type.set ("assets/fonts/MyriadPro-Bold.otf", AssetType.FONT);
		path.set ("assets/fonts/MyriadPro-Bold.woff", "assets/fonts/MyriadPro-Bold.woff");
		type.set ("assets/fonts/MyriadPro-Bold.woff", AssetType.BINARY);
		path.set ("assets/fonts/MyriadPro-Regular.eot", "assets/fonts/MyriadPro-Regular.eot");
		type.set ("assets/fonts/MyriadPro-Regular.eot", AssetType.BINARY);
		path.set ("assets/fonts/MyriadPro-Regular.otf", "assets/fonts/MyriadPro-Regular.otf");
		type.set ("assets/fonts/MyriadPro-Regular.otf", AssetType.FONT);
		path.set ("assets/fonts/MyriadPro-Regular.woff", "assets/fonts/MyriadPro-Regular.woff");
		type.set ("assets/fonts/MyriadPro-Regular.woff", AssetType.BINARY);
		path.set ("assets/images/Accu-out-0.png", "assets/images/Accu-out-0.png");
		type.set ("assets/images/Accu-out-0.png", AssetType.IMAGE);
		path.set ("assets/images/Accu-out-1.png", "assets/images/Accu-out-1.png");
		type.set ("assets/images/Accu-out-1.png", AssetType.IMAGE);
		path.set ("assets/images/Accu-out-2.png", "assets/images/Accu-out-2.png");
		type.set ("assets/images/Accu-out-2.png", AssetType.IMAGE);
		path.set ("assets/images/Accu-out-3.png", "assets/images/Accu-out-3.png");
		type.set ("assets/images/Accu-out-3.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_1Bit_bottomLayer2048.png", "assets/images/accuPopup_1Bit_bottomLayer2048.png");
		type.set ("assets/images/accuPopup_1Bit_bottomLayer2048.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_1Bit_gate1_out.png", "assets/images/accuPopup_1Bit_gate1_out.png");
		type.set ("assets/images/accuPopup_1Bit_gate1_out.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_1Bit_gate2_out.png", "assets/images/accuPopup_1Bit_gate2_out.png");
		type.set ("assets/images/accuPopup_1Bit_gate2_out.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_1Bit_gate3_out.png", "assets/images/accuPopup_1Bit_gate3_out.png");
		type.set ("assets/images/accuPopup_1Bit_gate3_out.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_1Bit_gate4_out.png", "assets/images/accuPopup_1Bit_gate4_out.png");
		type.set ("assets/images/accuPopup_1Bit_gate4_out.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_1Bit_input.png", "assets/images/accuPopup_1Bit_input.png");
		type.set ("assets/images/accuPopup_1Bit_input.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_1Bit_set.png", "assets/images/accuPopup_1Bit_set.png");
		type.set ("assets/images/accuPopup_1Bit_set.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_bottomLayer2048.png", "assets/images/accuPopup_bottomLayer2048.png");
		type.set ("assets/images/accuPopup_bottomLayer2048.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_enabler_enable.png", "assets/images/accuPopup_enabler_enable.png");
		type.set ("assets/images/accuPopup_enabler_enable.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_enabler_out_0.png", "assets/images/accuPopup_enabler_out_0.png");
		type.set ("assets/images/accuPopup_enabler_out_0.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_enabler_out_1.png", "assets/images/accuPopup_enabler_out_1.png");
		type.set ("assets/images/accuPopup_enabler_out_1.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_enabler_out_2.png", "assets/images/accuPopup_enabler_out_2.png");
		type.set ("assets/images/accuPopup_enabler_out_2.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_enabler_out_3.png", "assets/images/accuPopup_enabler_out_3.png");
		type.set ("assets/images/accuPopup_enabler_out_3.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_memory_in_0.png", "assets/images/accuPopup_memory_in_0.png");
		type.set ("assets/images/accuPopup_memory_in_0.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_memory_in_1.png", "assets/images/accuPopup_memory_in_1.png");
		type.set ("assets/images/accuPopup_memory_in_1.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_memory_in_2.png", "assets/images/accuPopup_memory_in_2.png");
		type.set ("assets/images/accuPopup_memory_in_2.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_memory_in_3.png", "assets/images/accuPopup_memory_in_3.png");
		type.set ("assets/images/accuPopup_memory_in_3.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_memory_out_0.png", "assets/images/accuPopup_memory_out_0.png");
		type.set ("assets/images/accuPopup_memory_out_0.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_memory_out_1.png", "assets/images/accuPopup_memory_out_1.png");
		type.set ("assets/images/accuPopup_memory_out_1.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_memory_out_2.png", "assets/images/accuPopup_memory_out_2.png");
		type.set ("assets/images/accuPopup_memory_out_2.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_memory_out_3.png", "assets/images/accuPopup_memory_out_3.png");
		type.set ("assets/images/accuPopup_memory_out_3.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_memory_set.png", "assets/images/accuPopup_memory_set.png");
		type.set ("assets/images/accuPopup_memory_set.png", AssetType.IMAGE);
		path.set ("assets/images/ALU-out-0.png", "assets/images/ALU-out-0.png");
		type.set ("assets/images/ALU-out-0.png", AssetType.IMAGE);
		path.set ("assets/images/ALU-out-1.png", "assets/images/ALU-out-1.png");
		type.set ("assets/images/ALU-out-1.png", AssetType.IMAGE);
		path.set ("assets/images/ALU-out-2.png", "assets/images/ALU-out-2.png");
		type.set ("assets/images/ALU-out-2.png", AssetType.IMAGE);
		path.set ("assets/images/ALU-out-3.png", "assets/images/ALU-out-3.png");
		type.set ("assets/images/ALU-out-3.png", AssetType.IMAGE);
		path.set ("assets/images/ALU-out-equal.png", "assets/images/ALU-out-equal.png");
		type.set ("assets/images/ALU-out-equal.png", AssetType.IMAGE);
		path.set ("assets/images/ALU-out.png", "assets/images/ALU-out.png");
		type.set ("assets/images/ALU-out.png", AssetType.IMAGE);
		path.set ("assets/images/architecture.png", "assets/images/architecture.png");
		type.set ("assets/images/architecture.png", AssetType.IMAGE);
		path.set ("assets/images/bottom_layer.png", "assets/images/bottom_layer.png");
		type.set ("assets/images/bottom_layer.png", AssetType.IMAGE);
		path.set ("assets/images/busline0.png", "assets/images/busline0.png");
		type.set ("assets/images/busline0.png", AssetType.IMAGE);
		path.set ("assets/images/busline1.png", "assets/images/busline1.png");
		type.set ("assets/images/busline1.png", AssetType.IMAGE);
		path.set ("assets/images/busline2.png", "assets/images/busline2.png");
		type.set ("assets/images/busline2.png", AssetType.IMAGE);
		path.set ("assets/images/busline3.png", "assets/images/busline3.png");
		type.set ("assets/images/busline3.png", AssetType.IMAGE);
		path.set ("assets/images/busline4.png", "assets/images/busline4.png");
		type.set ("assets/images/busline4.png", AssetType.IMAGE);
		path.set ("assets/images/busline5.png", "assets/images/busline5.png");
		type.set ("assets/images/busline5.png", AssetType.IMAGE);
		path.set ("assets/images/busline6.png", "assets/images/busline6.png");
		type.set ("assets/images/busline6.png", AssetType.IMAGE);
		path.set ("assets/images/busline7.png", "assets/images/busline7.png");
		type.set ("assets/images/busline7.png", AssetType.IMAGE);
		path.set ("assets/images/Clock.png", "assets/images/Clock.png");
		type.set ("assets/images/Clock.png", AssetType.IMAGE);
		path.set ("assets/images/clockGlow.png", "assets/images/clockGlow.png");
		type.set ("assets/images/clockGlow.png", AssetType.IMAGE);
		path.set ("assets/images/comp_static_lines.png", "assets/images/comp_static_lines.png");
		type.set ("assets/images/comp_static_lines.png", AssetType.IMAGE);
		path.set ("assets/images/coverAlu2048.png", "assets/images/coverAlu2048.png");
		type.set ("assets/images/coverAlu2048.png", AssetType.IMAGE);
		path.set ("assets/images/coverDecoder2048.png", "assets/images/coverDecoder2048.png");
		type.set ("assets/images/coverDecoder2048.png", AssetType.IMAGE);
		path.set ("assets/images/coverMultiplexer2048.png", "assets/images/coverMultiplexer2048.png");
		type.set ("assets/images/coverMultiplexer2048.png", AssetType.IMAGE);
		path.set ("assets/images/Decoder-out-1.png", "assets/images/Decoder-out-1.png");
		type.set ("assets/images/Decoder-out-1.png", AssetType.IMAGE);
		path.set ("assets/images/Decoder-out-2.png", "assets/images/Decoder-out-2.png");
		type.set ("assets/images/Decoder-out-2.png", AssetType.IMAGE);
		path.set ("assets/images/Decoder-out-3.png", "assets/images/Decoder-out-3.png");
		type.set ("assets/images/Decoder-out-3.png", AssetType.IMAGE);
		path.set ("assets/images/EditRomPopup2048.png", "assets/images/EditRomPopup2048.png");
		type.set ("assets/images/EditRomPopup2048.png", AssetType.IMAGE);
		path.set ("assets/images/Enabler1-out-0.png", "assets/images/Enabler1-out-0.png");
		type.set ("assets/images/Enabler1-out-0.png", AssetType.IMAGE);
		path.set ("assets/images/Enabler1-out-1.png", "assets/images/Enabler1-out-1.png");
		type.set ("assets/images/Enabler1-out-1.png", AssetType.IMAGE);
		path.set ("assets/images/Enabler1-out-2.png", "assets/images/Enabler1-out-2.png");
		type.set ("assets/images/Enabler1-out-2.png", AssetType.IMAGE);
		path.set ("assets/images/Enabler1-out-3.png", "assets/images/Enabler1-out-3.png");
		type.set ("assets/images/Enabler1-out-3.png", AssetType.IMAGE);
		path.set ("assets/images/Enabler2-out-0.png", "assets/images/Enabler2-out-0.png");
		type.set ("assets/images/Enabler2-out-0.png", AssetType.IMAGE);
		path.set ("assets/images/Enabler2-out-1.png", "assets/images/Enabler2-out-1.png");
		type.set ("assets/images/Enabler2-out-1.png", AssetType.IMAGE);
		path.set ("assets/images/Enabler2-out-2.png", "assets/images/Enabler2-out-2.png");
		type.set ("assets/images/Enabler2-out-2.png", AssetType.IMAGE);
		path.set ("assets/images/Enabler2-out-3.png", "assets/images/Enabler2-out-3.png");
		type.set ("assets/images/Enabler2-out-3.png", AssetType.IMAGE);
		path.set ("assets/images/enterInstruction_BG.png", "assets/images/enterInstruction_BG.png");
		type.set ("assets/images/enterInstruction_BG.png", AssetType.IMAGE);
		path.set ("assets/images/enterInstruction_line0.png", "assets/images/enterInstruction_line0.png");
		type.set ("assets/images/enterInstruction_line0.png", AssetType.IMAGE);
		path.set ("assets/images/enterInstruction_line1.png", "assets/images/enterInstruction_line1.png");
		type.set ("assets/images/enterInstruction_line1.png", AssetType.IMAGE);
		path.set ("assets/images/enterInstruction_line2.png", "assets/images/enterInstruction_line2.png");
		type.set ("assets/images/enterInstruction_line2.png", AssetType.IMAGE);
		path.set ("assets/images/enterInstruction_line3.png", "assets/images/enterInstruction_line3.png");
		type.set ("assets/images/enterInstruction_line3.png", AssetType.IMAGE);
		path.set ("assets/images/enterInstruction_line4.png", "assets/images/enterInstruction_line4.png");
		type.set ("assets/images/enterInstruction_line4.png", AssetType.IMAGE);
		path.set ("assets/images/enterInstruction_line5.png", "assets/images/enterInstruction_line5.png");
		type.set ("assets/images/enterInstruction_line5.png", AssetType.IMAGE);
		path.set ("assets/images/enterInstruction_line6.png", "assets/images/enterInstruction_line6.png");
		type.set ("assets/images/enterInstruction_line6.png", AssetType.IMAGE);
		path.set ("assets/images/enterInstruction_line7.png", "assets/images/enterInstruction_line7.png");
		type.set ("assets/images/enterInstruction_line7.png", AssetType.IMAGE);
		path.set ("assets/images/FlowArrows2048.png", "assets/images/FlowArrows2048.png");
		type.set ("assets/images/FlowArrows2048.png", AssetType.IMAGE);
		path.set ("assets/images/G1-out-0.png", "assets/images/G1-out-0.png");
		type.set ("assets/images/G1-out-0.png", AssetType.IMAGE);
		path.set ("assets/images/G1-out-1.png", "assets/images/G1-out-1.png");
		type.set ("assets/images/G1-out-1.png", AssetType.IMAGE);
		path.set ("assets/images/G1-out-2.png", "assets/images/G1-out-2.png");
		type.set ("assets/images/G1-out-2.png", AssetType.IMAGE);
		path.set ("assets/images/G1-out-3.png", "assets/images/G1-out-3.png");
		type.set ("assets/images/G1-out-3.png", AssetType.IMAGE);
		path.set ("assets/images/G2-out.png", "assets/images/G2-out.png");
		type.set ("assets/images/G2-out.png", AssetType.IMAGE);
		path.set ("assets/images/G3-out.png", "assets/images/G3-out.png");
		type.set ("assets/images/G3-out.png", AssetType.IMAGE);
		path.set ("assets/images/G4-out.png", "assets/images/G4-out.png");
		type.set ("assets/images/G4-out.png", AssetType.IMAGE);
		path.set ("assets/images/G5-out.png", "assets/images/G5-out.png");
		type.set ("assets/images/G5-out.png", AssetType.IMAGE);
		path.set ("assets/images/G6-out.png", "assets/images/G6-out.png");
		type.set ("assets/images/G6-out.png", AssetType.IMAGE);
		path.set ("assets/images/G7-out.png", "assets/images/G7-out.png");
		type.set ("assets/images/G7-out.png", AssetType.IMAGE);
		path.set ("assets/images/G8-out.png", "assets/images/G8-out.png");
		type.set ("assets/images/G8-out.png", AssetType.IMAGE);
		path.set ("assets/images/G9-out.png", "assets/images/G9-out.png");
		type.set ("assets/images/G9-out.png", AssetType.IMAGE);
		path.set ("assets/images/INP-out.png", "assets/images/INP-out.png");
		type.set ("assets/images/INP-out.png", AssetType.IMAGE);
		path.set ("assets/images/instructionTable.png", "assets/images/instructionTable.png");
		type.set ("assets/images/instructionTable.png", AssetType.IMAGE);
		path.set ("assets/images/instructionTable2048.png", "assets/images/instructionTable2048.png");
		type.set ("assets/images/instructionTable2048.png", AssetType.IMAGE);
		path.set ("assets/images/JE-out.png", "assets/images/JE-out.png");
		type.set ("assets/images/JE-out.png", AssetType.IMAGE);
		path.set ("assets/images/JMP-out.png", "assets/images/JMP-out.png");
		type.set ("assets/images/JMP-out.png", AssetType.IMAGE);
		path.set ("assets/images/JNE-out.png", "assets/images/JNE-out.png");
		type.set ("assets/images/JNE-out.png", AssetType.IMAGE);
		path.set ("assets/images/Key-out-0.png", "assets/images/Key-out-0.png");
		type.set ("assets/images/Key-out-0.png", AssetType.IMAGE);
		path.set ("assets/images/Key-out-1.png", "assets/images/Key-out-1.png");
		type.set ("assets/images/Key-out-1.png", AssetType.IMAGE);
		path.set ("assets/images/Key-out-2.png", "assets/images/Key-out-2.png");
		type.set ("assets/images/Key-out-2.png", AssetType.IMAGE);
		path.set ("assets/images/Key-out-3.png", "assets/images/Key-out-3.png");
		type.set ("assets/images/Key-out-3.png", AssetType.IMAGE);
		path.set ("assets/images/LDA-out.png", "assets/images/LDA-out.png");
		type.set ("assets/images/LDA-out.png", AssetType.IMAGE);
		path.set ("assets/images/LDI-out.png", "assets/images/LDI-out.png");
		type.set ("assets/images/LDI-out.png", AssetType.IMAGE);
		path.set ("assets/images/MarkUnits.png", "assets/images/MarkUnits.png");
		type.set ("assets/images/MarkUnits.png", AssetType.IMAGE);
		path.set ("assets/images/MarkUnits2048.png", "assets/images/MarkUnits2048.png");
		type.set ("assets/images/MarkUnits2048.png", AssetType.IMAGE);
		path.set ("assets/images/MOV-out.png", "assets/images/MOV-out.png");
		type.set ("assets/images/MOV-out.png", AssetType.IMAGE);
		path.set ("assets/images/MUX-out-0.png", "assets/images/MUX-out-0.png");
		type.set ("assets/images/MUX-out-0.png", AssetType.IMAGE);
		path.set ("assets/images/MUX-out-1.png", "assets/images/MUX-out-1.png");
		type.set ("assets/images/MUX-out-1.png", AssetType.IMAGE);
		path.set ("assets/images/MUX-out-2.png", "assets/images/MUX-out-2.png");
		type.set ("assets/images/MUX-out-2.png", AssetType.IMAGE);
		path.set ("assets/images/MUX-out-3.png", "assets/images/MUX-out-3.png");
		type.set ("assets/images/MUX-out-3.png", AssetType.IMAGE);
		path.set ("assets/images/OUT-out.png", "assets/images/OUT-out.png");
		type.set ("assets/images/OUT-out.png", AssetType.IMAGE);
		path.set ("assets/images/pc-out-0.png", "assets/images/pc-out-0.png");
		type.set ("assets/images/pc-out-0.png", AssetType.IMAGE);
		path.set ("assets/images/pc-out-1.png", "assets/images/pc-out-1.png");
		type.set ("assets/images/pc-out-1.png", AssetType.IMAGE);
		path.set ("assets/images/pc-out-2.png", "assets/images/pc-out-2.png");
		type.set ("assets/images/pc-out-2.png", AssetType.IMAGE);
		path.set ("assets/images/pc-out-3.png", "assets/images/pc-out-3.png");
		type.set ("assets/images/pc-out-3.png", AssetType.IMAGE);
		path.set ("assets/images/PowerOffCover.png", "assets/images/PowerOffCover.png");
		type.set ("assets/images/PowerOffCover.png", AssetType.IMAGE);
		path.set ("assets/images/PowerOffCover2048.png", "assets/images/PowerOffCover2048.png");
		type.set ("assets/images/PowerOffCover2048.png", AssetType.IMAGE);
		path.set ("assets/images/R1-out-0.png", "assets/images/R1-out-0.png");
		type.set ("assets/images/R1-out-0.png", AssetType.IMAGE);
		path.set ("assets/images/R1-out-1.png", "assets/images/R1-out-1.png");
		type.set ("assets/images/R1-out-1.png", AssetType.IMAGE);
		path.set ("assets/images/R1-out-2.png", "assets/images/R1-out-2.png");
		type.set ("assets/images/R1-out-2.png", AssetType.IMAGE);
		path.set ("assets/images/R1-out-3.png", "assets/images/R1-out-3.png");
		type.set ("assets/images/R1-out-3.png", AssetType.IMAGE);
		path.set ("assets/images/R2-out-0.png", "assets/images/R2-out-0.png");
		type.set ("assets/images/R2-out-0.png", AssetType.IMAGE);
		path.set ("assets/images/R2-out-1.png", "assets/images/R2-out-1.png");
		type.set ("assets/images/R2-out-1.png", AssetType.IMAGE);
		path.set ("assets/images/R2-out-2.png", "assets/images/R2-out-2.png");
		type.set ("assets/images/R2-out-2.png", AssetType.IMAGE);
		path.set ("assets/images/R2-out-3.png", "assets/images/R2-out-3.png");
		type.set ("assets/images/R2-out-3.png", AssetType.IMAGE);
		path.set ("assets/images/RAM-out-0.png", "assets/images/RAM-out-0.png");
		type.set ("assets/images/RAM-out-0.png", AssetType.IMAGE);
		path.set ("assets/images/RAM-out-1.png", "assets/images/RAM-out-1.png");
		type.set ("assets/images/RAM-out-1.png", AssetType.IMAGE);
		path.set ("assets/images/RAM-out-2.png", "assets/images/RAM-out-2.png");
		type.set ("assets/images/RAM-out-2.png", AssetType.IMAGE);
		path.set ("assets/images/RAM-out-3.png", "assets/images/RAM-out-3.png");
		type.set ("assets/images/RAM-out-3.png", AssetType.IMAGE);
		path.set ("assets/images/SDA-out.png", "assets/images/SDA-out.png");
		type.set ("assets/images/SDA-out.png", AssetType.IMAGE);
		path.set ("assets/images/tfFrame.png", "assets/images/tfFrame.png");
		type.set ("assets/images/tfFrame.png", AssetType.IMAGE);
		path.set ("assets/images/top_layer.png", "assets/images/top_layer.png");
		type.set ("assets/images/top_layer.png", AssetType.IMAGE);
		path.set ("assets/images/top_layer2048.png", "assets/images/top_layer2048.png");
		type.set ("assets/images/top_layer2048.png", AssetType.IMAGE);
		path.set ("assets/images/top_layer_colored.png", "assets/images/top_layer_colored.png");
		type.set ("assets/images/top_layer_colored.png", AssetType.IMAGE);
		path.set ("assets/tbsimlogo.svg", "assets/tbsimlogo.svg");
		type.set ("assets/tbsimlogo.svg", AssetType.TEXT);
		path.set ("assets/tbsimlogo2.svg", "assets/tbsimlogo2.svg");
		type.set ("assets/tbsimlogo2.svg", AssetType.TEXT);
		path.set ("assets/tbsimlogo3.svg", "assets/tbsimlogo3.svg");
		type.set ("assets/tbsimlogo3.svg", AssetType.TEXT);
		path.set ("fonts/Consolas Bold.eot", "fonts/Consolas Bold.eot");
		type.set ("fonts/Consolas Bold.eot", AssetType.BINARY);
		path.set ("fonts/Consolas Bold.svg", "fonts/Consolas Bold.svg");
		type.set ("fonts/Consolas Bold.svg", AssetType.TEXT);
		path.set ("fonts/Consolas Bold.ttf", "fonts/Consolas Bold.ttf");
		type.set ("fonts/Consolas Bold.ttf", AssetType.FONT);
		path.set ("fonts/Consolas Bold.woff", "fonts/Consolas Bold.woff");
		type.set ("fonts/Consolas Bold.woff", AssetType.BINARY);
		path.set ("fonts/MyriadPro-Bold.eot", "fonts/MyriadPro-Bold.eot");
		type.set ("fonts/MyriadPro-Bold.eot", AssetType.BINARY);
		path.set ("fonts/MyriadPro-Bold.otf", "fonts/MyriadPro-Bold.otf");
		type.set ("fonts/MyriadPro-Bold.otf", AssetType.FONT);
		path.set ("fonts/MyriadPro-Bold.woff", "fonts/MyriadPro-Bold.woff");
		type.set ("fonts/MyriadPro-Bold.woff", AssetType.BINARY);
		path.set ("fonts/MyriadPro-Regular.eot", "fonts/MyriadPro-Regular.eot");
		type.set ("fonts/MyriadPro-Regular.eot", AssetType.BINARY);
		path.set ("fonts/MyriadPro-Regular.otf", "fonts/MyriadPro-Regular.otf");
		type.set ("fonts/MyriadPro-Regular.otf", AssetType.FONT);
		path.set ("fonts/MyriadPro-Regular.woff", "fonts/MyriadPro-Regular.woff");
		type.set ("fonts/MyriadPro-Regular.woff", AssetType.BINARY);
		
		
		#elseif html5
		
		var id;
		id = "assets/fonts/Consolas Bold.eot";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/fonts/Consolas Bold.svg";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/fonts/Consolas Bold.ttf";
		path.set (id, id);
		type.set (id, AssetType.FONT);
		id = "assets/fonts/Consolas Bold.woff";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/fonts/MyriadPro-Bold.eot";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/fonts/MyriadPro-Bold.otf";
		path.set (id, id);
		type.set (id, AssetType.FONT);
		id = "assets/fonts/MyriadPro-Bold.woff";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/fonts/MyriadPro-Regular.eot";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/fonts/MyriadPro-Regular.otf";
		path.set (id, id);
		type.set (id, AssetType.FONT);
		id = "assets/fonts/MyriadPro-Regular.woff";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/images/Accu-out-0.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Accu-out-1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Accu-out-2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Accu-out-3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_1Bit_bottomLayer2048.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_1Bit_gate1_out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_1Bit_gate2_out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_1Bit_gate3_out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_1Bit_gate4_out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_1Bit_input.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_1Bit_set.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_bottomLayer2048.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_enabler_enable.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_enabler_out_0.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_enabler_out_1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_enabler_out_2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_enabler_out_3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_memory_in_0.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_memory_in_1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_memory_in_2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_memory_in_3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_memory_out_0.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_memory_out_1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_memory_out_2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_memory_out_3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_memory_set.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/ALU-out-0.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/ALU-out-1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/ALU-out-2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/ALU-out-3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/ALU-out-equal.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/ALU-out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/architecture.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/bottom_layer.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/busline0.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/busline1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/busline2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/busline3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/busline4.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/busline5.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/busline6.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/busline7.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Clock.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/clockGlow.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/comp_static_lines.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/coverAlu2048.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/coverDecoder2048.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/coverMultiplexer2048.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Decoder-out-1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Decoder-out-2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Decoder-out-3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/EditRomPopup2048.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Enabler1-out-0.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Enabler1-out-1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Enabler1-out-2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Enabler1-out-3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Enabler2-out-0.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Enabler2-out-1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Enabler2-out-2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Enabler2-out-3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/enterInstruction_BG.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/enterInstruction_line0.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/enterInstruction_line1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/enterInstruction_line2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/enterInstruction_line3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/enterInstruction_line4.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/enterInstruction_line5.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/enterInstruction_line6.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/enterInstruction_line7.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/FlowArrows2048.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/G1-out-0.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/G1-out-1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/G1-out-2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/G1-out-3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/G2-out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/G3-out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/G4-out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/G5-out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/G6-out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/G7-out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/G8-out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/G9-out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/INP-out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/instructionTable.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/instructionTable2048.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/JE-out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/JMP-out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/JNE-out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Key-out-0.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Key-out-1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Key-out-2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Key-out-3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/LDA-out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/LDI-out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/MarkUnits.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/MarkUnits2048.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/MOV-out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/MUX-out-0.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/MUX-out-1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/MUX-out-2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/MUX-out-3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/OUT-out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/pc-out-0.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/pc-out-1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/pc-out-2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/pc-out-3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/PowerOffCover.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/PowerOffCover2048.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/R1-out-0.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/R1-out-1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/R1-out-2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/R1-out-3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/R2-out-0.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/R2-out-1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/R2-out-2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/R2-out-3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/RAM-out-0.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/RAM-out-1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/RAM-out-2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/RAM-out-3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/SDA-out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/tfFrame.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/top_layer.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/top_layer2048.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/top_layer_colored.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/tbsimlogo.svg";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/tbsimlogo2.svg";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/tbsimlogo3.svg";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "fonts/Consolas Bold.eot";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "fonts/Consolas Bold.svg";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "fonts/Consolas Bold.ttf";
		path.set (id, id);
		type.set (id, AssetType.FONT);
		id = "fonts/Consolas Bold.woff";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "fonts/MyriadPro-Bold.eot";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "fonts/MyriadPro-Bold.otf";
		path.set (id, id);
		type.set (id, AssetType.FONT);
		id = "fonts/MyriadPro-Bold.woff";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "fonts/MyriadPro-Regular.eot";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "fonts/MyriadPro-Regular.otf";
		path.set (id, id);
		type.set (id, AssetType.FONT);
		id = "fonts/MyriadPro-Regular.woff";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		
		
		#else
		
		
		
		
		Font.registerFont (__ASSET__assets_fonts_consolas_bold_ttf);
		
		
		Font.registerFont (__ASSET__assets_fonts_myriadpro_bold_otf);
		
		
		Font.registerFont (__ASSET__assets_fonts_myriadpro_regular_otf);
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		Font.registerFont (__ASSET__fonts_consolas_bold_ttf);
		
		
		Font.registerFont (__ASSET__fonts_myriadpro_bold_otf);
		
		
		Font.registerFont (__ASSET__fonts_myriadpro_regular_otf);
		
		
		
		#if (windows || mac || linux)
		
		var useManifest = false;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		
		
		if (useManifest) {
			
			loadManifest ();
			
			if (Sys.args ().indexOf ("-livereload") > -1) {
				
				var path = FileSystem.fullPath ("manifest");
				lastModified = FileSystem.stat (path).mtime.getTime ();
				
				timer = new Timer (2000);
				timer.run = function () {
					
					var modified = FileSystem.stat (path).mtime.getTime ();
					
					if (modified > lastModified) {
						
						lastModified = modified;
						loadManifest ();
						
						if (eventCallback != null) {
							
							eventCallback (this, "change");
							
						}
						
					}
					
				}
				
			}
			
		}
		
		#else
		
		loadManifest ();
		
		#end
		#end
		
	}
	
	
	public override function exists (id:String, type:AssetType):Bool {
		
		var assetType = this.type.get (id);
		
		#if pixi
		
		if (assetType == IMAGE) {
			
			return true;
			
		} else {
			
			return false;
			
		}
		
		#end
		
		if (assetType != null) {
			
			if (assetType == type || ((type == SOUND || type == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			#if flash
			
			if ((assetType == BINARY || assetType == TEXT) && type == BINARY) {
				
				return true;
				
			} else if (path.exists (id)) {
				
				return true;
				
			}
			
			#else
			
			if (type == BINARY || type == null || (assetType == BINARY && type == TEXT)) {
				
				return true;
				
			}
			
			#end
			
		}
		
		return false;
		
	}
	
	
	public override function getBitmapData (id:String):BitmapData {
		
		#if pixi
		
		return BitmapData.fromImage (path.get (id));
		
		#elseif (flash)
		
		return cast (Type.createInstance (className.get (id), []), BitmapData);
		
		#elseif openfl_html5
		
		return BitmapData.fromImage (ApplicationMain.images.get (path.get (id)));
		
		#elseif js
		
		return cast (ApplicationMain.loaders.get (path.get (id)).contentLoaderInfo.content, Bitmap).bitmapData;
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), BitmapData);
		else return BitmapData.load (path.get (id));
		
		#end
		
	}
	
	
	public override function getBytes (id:String):ByteArray {
		
		#if (flash)
		
		return cast (Type.createInstance (className.get (id), []), ByteArray);

		#elseif (js || openfl_html5 || pixi)
		
		var bytes:ByteArray = null;
		var data = ApplicationMain.urlLoaders.get (path.get (id)).data;
		
		if (Std.is (data, String)) {
			
			bytes = new ByteArray ();
			bytes.writeUTFBytes (data);
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}

		if (bytes != null) {
			
			bytes.position = 0;
			return bytes;
			
		} else {
			
			return null;
		}
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), ByteArray);
		else return ByteArray.readFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getFont (id:String):Font {
		
		#if pixi
		
		return null;
		
		#elseif (flash || js)
		
		return cast (Type.createInstance (className.get (id), []), Font);
		
		#else
		
		if (className.exists(id)) {
			var fontClass = className.get(id);
			Font.registerFont(fontClass);
			return cast (Type.createInstance (fontClass, []), Font);
		} else return new Font (path.get (id));
		
		#end
		
	}
	
	
	public override function getMusic (id:String):Sound {
		
		#if pixi
		
		return null;
		
		#elseif (flash)
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif openfl_html5
		
		var sound = new Sound ();
		sound.__buffer = true;
		sound.load (new URLRequest (path.get (id)));
		return sound; 
		
		#elseif js
		
		return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		else return new Sound (new URLRequest (path.get (id)), null, true);
		
		#end
		
	}
	
	
	public override function getPath (id:String):String {
		
		#if ios
		
		return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		#else
		
		return path.get (id);
		
		#end
		
	}
	
	
	public override function getSound (id:String):Sound {
		
		#if pixi
		
		return null;
		
		#elseif (flash)
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif js
		
		return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		else return new Sound (new URLRequest (path.get (id)), null, type.get (id) == MUSIC);
		
		#end
		
	}
	
	
	public override function getText (id:String):String {
		
		#if js
		
		var bytes:ByteArray = null;
		var data = ApplicationMain.urlLoaders.get (path.get (id)).data;
		
		if (Std.is (data, String)) {
			
			return cast data;
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes.readUTFBytes (bytes.length);
			
		} else {
			
			return null;
		}
		
		#else
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.readUTFBytes (bytes.length);
			
		}
		
		#end
		
	}
	
	
	public override function isLocal (id:String, type:AssetType):Bool {
		
		#if flash
		
		if (type != AssetType.MUSIC && type != AssetType.SOUND) {
			
			return className.exists (id);
			
		}
		
		#end
		
		return true;
		
	}
	
	
	public override function list (type:AssetType):Array<String> {
		
		var items = [];
		
		for (id in this.type.keys ()) {
			
			if (type == null || exists (id, type)) {
				
				items.push (id);
				
			}
			
		}
		
		return items;
		
	}
	
	
	public override function loadBitmapData (id:String, handler:BitmapData -> Void):Void {
		
		#if pixi
		
		handler (getBitmapData (id));
		
		#elseif (flash || js)
		
		if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event:Event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getBitmapData (id));
			
		}
		
		#else
		
		handler (getBitmapData (id));
		
		#end
		
	}
	
	
	public override function loadBytes (id:String, handler:ByteArray -> Void):Void {
		
		#if pixi
		
		handler (getBytes (id));
		
		#elseif (flash || js)
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bytes = new ByteArray ();
				bytes.writeUTFBytes (event.currentTarget.data);
				bytes.position = 0;
				
				handler (bytes);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getBytes (id));
			
		}
		
		#else
		
		handler (getBytes (id));
		
		#end
		
	}
	
	
	public override function loadFont (id:String, handler:Font -> Void):Void {
		
		#if (flash || js)
		
		/*if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {*/
			
			handler (getFont (id));
			
		//}
		
		#else
		
		handler (getFont (id));
		
		#end
		
	}
	
	
	#if (!flash && !html5)
	private function loadManifest ():Void {
		
		try {
			
			#if blackberry
			var bytes = ByteArray.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = ByteArray.readFile ("../res/manifest");
			#elseif emscripten
			var bytes = ByteArray.readFile ("assets/manifest");
			#else
			var bytes = ByteArray.readFile ("manifest");
			#end
			
			if (bytes != null) {
				
				bytes.position = 0;
				
				if (bytes.length > 0) {
					
					var data = bytes.readUTFBytes (bytes.length);
					
					if (data != null && data.length > 0) {
						
						var manifest:Array<Dynamic> = Unserializer.run (data);
						
						for (asset in manifest) {
							
							if (!className.exists (asset.id)) {
								
								path.set (asset.id, asset.path);
								type.set (asset.id, Type.createEnum (AssetType, asset.type));
								
							}
							
						}
						
					}
					
				}
				
			} else {
				
				trace ("Warning: Could not load asset manifest (bytes was null)");
				
			}
		
		} catch (e:Dynamic) {
			
			trace ('Warning: Could not load asset manifest (${e})');
			
		}
		
	}
	#end
	
	
	public override function loadMusic (id:String, handler:Sound -> Void):Void {
		
		#if (flash || js)
		
		/*if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {*/
			
			handler (getMusic (id));
			
		//}
		
		#else
		
		handler (getMusic (id));
		
		#end
		
	}
	
	
	public override function loadSound (id:String, handler:Sound -> Void):Void {
		
		#if (flash || js)
		
		/*if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {*/
			
			handler (getSound (id));
			
		//}
		
		#else
		
		handler (getSound (id));
		
		#end
		
	}
	
	
	public override function loadText (id:String, handler:String -> Void):Void {
		
		#if js
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				handler (event.currentTarget.data);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getText (id));
			
		}
		
		#else
		
		var callback = function (bytes:ByteArray):Void {
			
			if (bytes == null) {
				
				handler (null);
				
			} else {
				
				handler (bytes.readUTFBytes (bytes.length));
				
			}
			
		}
		
		loadBytes (id, callback);
		
		#end
		
	}
	
	
}


#if pixi
#elseif flash























































































































































#elseif html5



@:keep #if display private #end class __ASSET__assets_fonts_consolas_bold_ttf extends flash.text.Font { #if (!openfl_html5_dom) public function new () { super (); fontName = "Consolas Bold"; } #end }


@:keep #if display private #end class __ASSET__assets_fonts_myriadpro_bold_otf extends flash.text.Font { #if (!openfl_html5_dom) public function new () { super (); fontName = "Myriad Pro Bold"; } #end }


@:keep #if display private #end class __ASSET__assets_fonts_myriadpro_regular_otf extends flash.text.Font { #if (!openfl_html5_dom) public function new () { super (); fontName = "Myriad Pro"; } #end }



































































































































@:keep #if display private #end class __ASSET__fonts_consolas_bold_ttf extends flash.text.Font { #if (!openfl_html5_dom) public function new () { super (); fontName = "Consolas Bold"; } #end }


@:keep #if display private #end class __ASSET__fonts_myriadpro_bold_otf extends flash.text.Font { #if (!openfl_html5_dom) public function new () { super (); fontName = "Myriad Pro Bold"; } #end }


@:keep #if display private #end class __ASSET__fonts_myriadpro_regular_otf extends flash.text.Font { #if (!openfl_html5_dom) public function new () { super (); fontName = "Myriad Pro"; } #end }



#else

#if (windows || mac || linux)





@:keep class __ASSET__assets_fonts_consolas_bold_ttf extends openfl.text.Font { public function new () { super (); __fontPath = "assets/fonts/Consolas Bold.ttf"; fontName = "Consolas Bold"; }}
@:keep class __ASSET__assets_fonts_myriadpro_bold_otf extends openfl.text.Font { public function new () { super (); __fontPath = "assets/fonts/MyriadPro-Bold.otf"; fontName = "Myriad Pro Bold"; }}
@:keep class __ASSET__assets_fonts_myriadpro_regular_otf extends openfl.text.Font { public function new () { super (); __fontPath = "assets/fonts/MyriadPro-Regular.otf"; fontName = "Myriad Pro"; }}
@:keep class __ASSET__fonts_consolas_bold_ttf extends openfl.text.Font { public function new () { super (); __fontPath = "fonts/Consolas Bold.ttf"; fontName = "Consolas Bold"; }}
@:keep class __ASSET__fonts_myriadpro_bold_otf extends openfl.text.Font { public function new () { super (); __fontPath = "fonts/MyriadPro-Bold.otf"; fontName = "Myriad Pro Bold"; }}
@:keep class __ASSET__fonts_myriadpro_regular_otf extends openfl.text.Font { public function new () { super (); __fontPath = "fonts/MyriadPro-Regular.otf"; fontName = "Myriad Pro"; }}


#else


class __ASSET__assets_fonts_consolas_bold_ttf extends openfl.text.Font { public function new () { super (); __fontPath = "assets/fonts/Consolas Bold.ttf"; fontName = "Consolas Bold";  }}
class __ASSET__assets_fonts_myriadpro_bold_otf extends openfl.text.Font { public function new () { super (); __fontPath = "assets/fonts/MyriadPro-Bold.otf"; fontName = "Myriad Pro Bold";  }}
class __ASSET__assets_fonts_myriadpro_regular_otf extends openfl.text.Font { public function new () { super (); __fontPath = "assets/fonts/MyriadPro-Regular.otf"; fontName = "Myriad Pro";  }}
class __ASSET__fonts_consolas_bold_ttf extends openfl.text.Font { public function new () { super (); __fontPath = "fonts/Consolas Bold.ttf"; fontName = "Consolas Bold";  }}
class __ASSET__fonts_myriadpro_bold_otf extends openfl.text.Font { public function new () { super (); __fontPath = "fonts/MyriadPro-Bold.otf"; fontName = "Myriad Pro Bold";  }}
class __ASSET__fonts_myriadpro_regular_otf extends openfl.text.Font { public function new () { super (); __fontPath = "fonts/MyriadPro-Regular.otf"; fontName = "Myriad Pro";  }}


#end

#end


#else


package;


import haxe.Timer;
import haxe.Unserializer;
import lime.app.Preloader;
import lime.audio.AudioSource;
import lime.audio.openal.AL;
import lime.audio.AudioBuffer;
import lime.graphics.Image;
import lime.text.Font;
import lime.utils.ByteArray;
import lime.utils.UInt8Array;
import lime.Assets;

#if sys
import sys.FileSystem;
#end

#if flash
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.Loader;
import flash.events.Event;
import flash.media.Sound;
import flash.net.URLLoader;
import flash.net.URLRequest;
#end


class DefaultAssetLibrary extends AssetLibrary {
	
	
	public var className (default, null) = new Map <String, Dynamic> ();
	public var path (default, null) = new Map <String, String> ();
	public var type (default, null) = new Map <String, AssetType> ();
	
	private var lastModified:Float;
	private var timer:Timer;
	
	
	public function new () {
		
		super ();
		
		#if flash
		
		path.set ("assets/fonts/Consolas Bold.eot", "assets/fonts/Consolas Bold.eot");
		type.set ("assets/fonts/Consolas Bold.eot", AssetType.BINARY);
		path.set ("assets/fonts/Consolas Bold.svg", "assets/fonts/Consolas Bold.svg");
		type.set ("assets/fonts/Consolas Bold.svg", AssetType.TEXT);
		path.set ("assets/fonts/Consolas Bold.ttf", "assets/fonts/Consolas Bold.ttf");
		type.set ("assets/fonts/Consolas Bold.ttf", AssetType.FONT);
		path.set ("assets/fonts/Consolas Bold.woff", "assets/fonts/Consolas Bold.woff");
		type.set ("assets/fonts/Consolas Bold.woff", AssetType.BINARY);
		path.set ("assets/fonts/MyriadPro-Bold.eot", "assets/fonts/MyriadPro-Bold.eot");
		type.set ("assets/fonts/MyriadPro-Bold.eot", AssetType.BINARY);
		path.set ("assets/fonts/MyriadPro-Bold.otf", "assets/fonts/MyriadPro-Bold.otf");
		type.set ("assets/fonts/MyriadPro-Bold.otf", AssetType.FONT);
		path.set ("assets/fonts/MyriadPro-Bold.woff", "assets/fonts/MyriadPro-Bold.woff");
		type.set ("assets/fonts/MyriadPro-Bold.woff", AssetType.BINARY);
		path.set ("assets/fonts/MyriadPro-Regular.eot", "assets/fonts/MyriadPro-Regular.eot");
		type.set ("assets/fonts/MyriadPro-Regular.eot", AssetType.BINARY);
		path.set ("assets/fonts/MyriadPro-Regular.otf", "assets/fonts/MyriadPro-Regular.otf");
		type.set ("assets/fonts/MyriadPro-Regular.otf", AssetType.FONT);
		path.set ("assets/fonts/MyriadPro-Regular.woff", "assets/fonts/MyriadPro-Regular.woff");
		type.set ("assets/fonts/MyriadPro-Regular.woff", AssetType.BINARY);
		path.set ("assets/images/Accu-out-0.png", "assets/images/Accu-out-0.png");
		type.set ("assets/images/Accu-out-0.png", AssetType.IMAGE);
		path.set ("assets/images/Accu-out-1.png", "assets/images/Accu-out-1.png");
		type.set ("assets/images/Accu-out-1.png", AssetType.IMAGE);
		path.set ("assets/images/Accu-out-2.png", "assets/images/Accu-out-2.png");
		type.set ("assets/images/Accu-out-2.png", AssetType.IMAGE);
		path.set ("assets/images/Accu-out-3.png", "assets/images/Accu-out-3.png");
		type.set ("assets/images/Accu-out-3.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_1Bit_bottomLayer2048.png", "assets/images/accuPopup_1Bit_bottomLayer2048.png");
		type.set ("assets/images/accuPopup_1Bit_bottomLayer2048.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_1Bit_gate1_out.png", "assets/images/accuPopup_1Bit_gate1_out.png");
		type.set ("assets/images/accuPopup_1Bit_gate1_out.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_1Bit_gate2_out.png", "assets/images/accuPopup_1Bit_gate2_out.png");
		type.set ("assets/images/accuPopup_1Bit_gate2_out.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_1Bit_gate3_out.png", "assets/images/accuPopup_1Bit_gate3_out.png");
		type.set ("assets/images/accuPopup_1Bit_gate3_out.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_1Bit_gate4_out.png", "assets/images/accuPopup_1Bit_gate4_out.png");
		type.set ("assets/images/accuPopup_1Bit_gate4_out.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_1Bit_input.png", "assets/images/accuPopup_1Bit_input.png");
		type.set ("assets/images/accuPopup_1Bit_input.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_1Bit_set.png", "assets/images/accuPopup_1Bit_set.png");
		type.set ("assets/images/accuPopup_1Bit_set.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_bottomLayer2048.png", "assets/images/accuPopup_bottomLayer2048.png");
		type.set ("assets/images/accuPopup_bottomLayer2048.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_enabler_enable.png", "assets/images/accuPopup_enabler_enable.png");
		type.set ("assets/images/accuPopup_enabler_enable.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_enabler_out_0.png", "assets/images/accuPopup_enabler_out_0.png");
		type.set ("assets/images/accuPopup_enabler_out_0.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_enabler_out_1.png", "assets/images/accuPopup_enabler_out_1.png");
		type.set ("assets/images/accuPopup_enabler_out_1.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_enabler_out_2.png", "assets/images/accuPopup_enabler_out_2.png");
		type.set ("assets/images/accuPopup_enabler_out_2.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_enabler_out_3.png", "assets/images/accuPopup_enabler_out_3.png");
		type.set ("assets/images/accuPopup_enabler_out_3.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_memory_in_0.png", "assets/images/accuPopup_memory_in_0.png");
		type.set ("assets/images/accuPopup_memory_in_0.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_memory_in_1.png", "assets/images/accuPopup_memory_in_1.png");
		type.set ("assets/images/accuPopup_memory_in_1.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_memory_in_2.png", "assets/images/accuPopup_memory_in_2.png");
		type.set ("assets/images/accuPopup_memory_in_2.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_memory_in_3.png", "assets/images/accuPopup_memory_in_3.png");
		type.set ("assets/images/accuPopup_memory_in_3.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_memory_out_0.png", "assets/images/accuPopup_memory_out_0.png");
		type.set ("assets/images/accuPopup_memory_out_0.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_memory_out_1.png", "assets/images/accuPopup_memory_out_1.png");
		type.set ("assets/images/accuPopup_memory_out_1.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_memory_out_2.png", "assets/images/accuPopup_memory_out_2.png");
		type.set ("assets/images/accuPopup_memory_out_2.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_memory_out_3.png", "assets/images/accuPopup_memory_out_3.png");
		type.set ("assets/images/accuPopup_memory_out_3.png", AssetType.IMAGE);
		path.set ("assets/images/accuPopup_memory_set.png", "assets/images/accuPopup_memory_set.png");
		type.set ("assets/images/accuPopup_memory_set.png", AssetType.IMAGE);
		path.set ("assets/images/ALU-out-0.png", "assets/images/ALU-out-0.png");
		type.set ("assets/images/ALU-out-0.png", AssetType.IMAGE);
		path.set ("assets/images/ALU-out-1.png", "assets/images/ALU-out-1.png");
		type.set ("assets/images/ALU-out-1.png", AssetType.IMAGE);
		path.set ("assets/images/ALU-out-2.png", "assets/images/ALU-out-2.png");
		type.set ("assets/images/ALU-out-2.png", AssetType.IMAGE);
		path.set ("assets/images/ALU-out-3.png", "assets/images/ALU-out-3.png");
		type.set ("assets/images/ALU-out-3.png", AssetType.IMAGE);
		path.set ("assets/images/ALU-out-equal.png", "assets/images/ALU-out-equal.png");
		type.set ("assets/images/ALU-out-equal.png", AssetType.IMAGE);
		path.set ("assets/images/ALU-out.png", "assets/images/ALU-out.png");
		type.set ("assets/images/ALU-out.png", AssetType.IMAGE);
		path.set ("assets/images/architecture.png", "assets/images/architecture.png");
		type.set ("assets/images/architecture.png", AssetType.IMAGE);
		path.set ("assets/images/bottom_layer.png", "assets/images/bottom_layer.png");
		type.set ("assets/images/bottom_layer.png", AssetType.IMAGE);
		path.set ("assets/images/busline0.png", "assets/images/busline0.png");
		type.set ("assets/images/busline0.png", AssetType.IMAGE);
		path.set ("assets/images/busline1.png", "assets/images/busline1.png");
		type.set ("assets/images/busline1.png", AssetType.IMAGE);
		path.set ("assets/images/busline2.png", "assets/images/busline2.png");
		type.set ("assets/images/busline2.png", AssetType.IMAGE);
		path.set ("assets/images/busline3.png", "assets/images/busline3.png");
		type.set ("assets/images/busline3.png", AssetType.IMAGE);
		path.set ("assets/images/busline4.png", "assets/images/busline4.png");
		type.set ("assets/images/busline4.png", AssetType.IMAGE);
		path.set ("assets/images/busline5.png", "assets/images/busline5.png");
		type.set ("assets/images/busline5.png", AssetType.IMAGE);
		path.set ("assets/images/busline6.png", "assets/images/busline6.png");
		type.set ("assets/images/busline6.png", AssetType.IMAGE);
		path.set ("assets/images/busline7.png", "assets/images/busline7.png");
		type.set ("assets/images/busline7.png", AssetType.IMAGE);
		path.set ("assets/images/Clock.png", "assets/images/Clock.png");
		type.set ("assets/images/Clock.png", AssetType.IMAGE);
		path.set ("assets/images/clockGlow.png", "assets/images/clockGlow.png");
		type.set ("assets/images/clockGlow.png", AssetType.IMAGE);
		path.set ("assets/images/comp_static_lines.png", "assets/images/comp_static_lines.png");
		type.set ("assets/images/comp_static_lines.png", AssetType.IMAGE);
		path.set ("assets/images/coverAlu2048.png", "assets/images/coverAlu2048.png");
		type.set ("assets/images/coverAlu2048.png", AssetType.IMAGE);
		path.set ("assets/images/coverDecoder2048.png", "assets/images/coverDecoder2048.png");
		type.set ("assets/images/coverDecoder2048.png", AssetType.IMAGE);
		path.set ("assets/images/coverMultiplexer2048.png", "assets/images/coverMultiplexer2048.png");
		type.set ("assets/images/coverMultiplexer2048.png", AssetType.IMAGE);
		path.set ("assets/images/Decoder-out-1.png", "assets/images/Decoder-out-1.png");
		type.set ("assets/images/Decoder-out-1.png", AssetType.IMAGE);
		path.set ("assets/images/Decoder-out-2.png", "assets/images/Decoder-out-2.png");
		type.set ("assets/images/Decoder-out-2.png", AssetType.IMAGE);
		path.set ("assets/images/Decoder-out-3.png", "assets/images/Decoder-out-3.png");
		type.set ("assets/images/Decoder-out-3.png", AssetType.IMAGE);
		path.set ("assets/images/EditRomPopup2048.png", "assets/images/EditRomPopup2048.png");
		type.set ("assets/images/EditRomPopup2048.png", AssetType.IMAGE);
		path.set ("assets/images/Enabler1-out-0.png", "assets/images/Enabler1-out-0.png");
		type.set ("assets/images/Enabler1-out-0.png", AssetType.IMAGE);
		path.set ("assets/images/Enabler1-out-1.png", "assets/images/Enabler1-out-1.png");
		type.set ("assets/images/Enabler1-out-1.png", AssetType.IMAGE);
		path.set ("assets/images/Enabler1-out-2.png", "assets/images/Enabler1-out-2.png");
		type.set ("assets/images/Enabler1-out-2.png", AssetType.IMAGE);
		path.set ("assets/images/Enabler1-out-3.png", "assets/images/Enabler1-out-3.png");
		type.set ("assets/images/Enabler1-out-3.png", AssetType.IMAGE);
		path.set ("assets/images/Enabler2-out-0.png", "assets/images/Enabler2-out-0.png");
		type.set ("assets/images/Enabler2-out-0.png", AssetType.IMAGE);
		path.set ("assets/images/Enabler2-out-1.png", "assets/images/Enabler2-out-1.png");
		type.set ("assets/images/Enabler2-out-1.png", AssetType.IMAGE);
		path.set ("assets/images/Enabler2-out-2.png", "assets/images/Enabler2-out-2.png");
		type.set ("assets/images/Enabler2-out-2.png", AssetType.IMAGE);
		path.set ("assets/images/Enabler2-out-3.png", "assets/images/Enabler2-out-3.png");
		type.set ("assets/images/Enabler2-out-3.png", AssetType.IMAGE);
		path.set ("assets/images/enterInstruction_BG.png", "assets/images/enterInstruction_BG.png");
		type.set ("assets/images/enterInstruction_BG.png", AssetType.IMAGE);
		path.set ("assets/images/enterInstruction_line0.png", "assets/images/enterInstruction_line0.png");
		type.set ("assets/images/enterInstruction_line0.png", AssetType.IMAGE);
		path.set ("assets/images/enterInstruction_line1.png", "assets/images/enterInstruction_line1.png");
		type.set ("assets/images/enterInstruction_line1.png", AssetType.IMAGE);
		path.set ("assets/images/enterInstruction_line2.png", "assets/images/enterInstruction_line2.png");
		type.set ("assets/images/enterInstruction_line2.png", AssetType.IMAGE);
		path.set ("assets/images/enterInstruction_line3.png", "assets/images/enterInstruction_line3.png");
		type.set ("assets/images/enterInstruction_line3.png", AssetType.IMAGE);
		path.set ("assets/images/enterInstruction_line4.png", "assets/images/enterInstruction_line4.png");
		type.set ("assets/images/enterInstruction_line4.png", AssetType.IMAGE);
		path.set ("assets/images/enterInstruction_line5.png", "assets/images/enterInstruction_line5.png");
		type.set ("assets/images/enterInstruction_line5.png", AssetType.IMAGE);
		path.set ("assets/images/enterInstruction_line6.png", "assets/images/enterInstruction_line6.png");
		type.set ("assets/images/enterInstruction_line6.png", AssetType.IMAGE);
		path.set ("assets/images/enterInstruction_line7.png", "assets/images/enterInstruction_line7.png");
		type.set ("assets/images/enterInstruction_line7.png", AssetType.IMAGE);
		path.set ("assets/images/FlowArrows2048.png", "assets/images/FlowArrows2048.png");
		type.set ("assets/images/FlowArrows2048.png", AssetType.IMAGE);
		path.set ("assets/images/G1-out-0.png", "assets/images/G1-out-0.png");
		type.set ("assets/images/G1-out-0.png", AssetType.IMAGE);
		path.set ("assets/images/G1-out-1.png", "assets/images/G1-out-1.png");
		type.set ("assets/images/G1-out-1.png", AssetType.IMAGE);
		path.set ("assets/images/G1-out-2.png", "assets/images/G1-out-2.png");
		type.set ("assets/images/G1-out-2.png", AssetType.IMAGE);
		path.set ("assets/images/G1-out-3.png", "assets/images/G1-out-3.png");
		type.set ("assets/images/G1-out-3.png", AssetType.IMAGE);
		path.set ("assets/images/G2-out.png", "assets/images/G2-out.png");
		type.set ("assets/images/G2-out.png", AssetType.IMAGE);
		path.set ("assets/images/G3-out.png", "assets/images/G3-out.png");
		type.set ("assets/images/G3-out.png", AssetType.IMAGE);
		path.set ("assets/images/G4-out.png", "assets/images/G4-out.png");
		type.set ("assets/images/G4-out.png", AssetType.IMAGE);
		path.set ("assets/images/G5-out.png", "assets/images/G5-out.png");
		type.set ("assets/images/G5-out.png", AssetType.IMAGE);
		path.set ("assets/images/G6-out.png", "assets/images/G6-out.png");
		type.set ("assets/images/G6-out.png", AssetType.IMAGE);
		path.set ("assets/images/G7-out.png", "assets/images/G7-out.png");
		type.set ("assets/images/G7-out.png", AssetType.IMAGE);
		path.set ("assets/images/G8-out.png", "assets/images/G8-out.png");
		type.set ("assets/images/G8-out.png", AssetType.IMAGE);
		path.set ("assets/images/G9-out.png", "assets/images/G9-out.png");
		type.set ("assets/images/G9-out.png", AssetType.IMAGE);
		path.set ("assets/images/INP-out.png", "assets/images/INP-out.png");
		type.set ("assets/images/INP-out.png", AssetType.IMAGE);
		path.set ("assets/images/instructionTable.png", "assets/images/instructionTable.png");
		type.set ("assets/images/instructionTable.png", AssetType.IMAGE);
		path.set ("assets/images/instructionTable2048.png", "assets/images/instructionTable2048.png");
		type.set ("assets/images/instructionTable2048.png", AssetType.IMAGE);
		path.set ("assets/images/JE-out.png", "assets/images/JE-out.png");
		type.set ("assets/images/JE-out.png", AssetType.IMAGE);
		path.set ("assets/images/JMP-out.png", "assets/images/JMP-out.png");
		type.set ("assets/images/JMP-out.png", AssetType.IMAGE);
		path.set ("assets/images/JNE-out.png", "assets/images/JNE-out.png");
		type.set ("assets/images/JNE-out.png", AssetType.IMAGE);
		path.set ("assets/images/Key-out-0.png", "assets/images/Key-out-0.png");
		type.set ("assets/images/Key-out-0.png", AssetType.IMAGE);
		path.set ("assets/images/Key-out-1.png", "assets/images/Key-out-1.png");
		type.set ("assets/images/Key-out-1.png", AssetType.IMAGE);
		path.set ("assets/images/Key-out-2.png", "assets/images/Key-out-2.png");
		type.set ("assets/images/Key-out-2.png", AssetType.IMAGE);
		path.set ("assets/images/Key-out-3.png", "assets/images/Key-out-3.png");
		type.set ("assets/images/Key-out-3.png", AssetType.IMAGE);
		path.set ("assets/images/LDA-out.png", "assets/images/LDA-out.png");
		type.set ("assets/images/LDA-out.png", AssetType.IMAGE);
		path.set ("assets/images/LDI-out.png", "assets/images/LDI-out.png");
		type.set ("assets/images/LDI-out.png", AssetType.IMAGE);
		path.set ("assets/images/MarkUnits.png", "assets/images/MarkUnits.png");
		type.set ("assets/images/MarkUnits.png", AssetType.IMAGE);
		path.set ("assets/images/MarkUnits2048.png", "assets/images/MarkUnits2048.png");
		type.set ("assets/images/MarkUnits2048.png", AssetType.IMAGE);
		path.set ("assets/images/MOV-out.png", "assets/images/MOV-out.png");
		type.set ("assets/images/MOV-out.png", AssetType.IMAGE);
		path.set ("assets/images/MUX-out-0.png", "assets/images/MUX-out-0.png");
		type.set ("assets/images/MUX-out-0.png", AssetType.IMAGE);
		path.set ("assets/images/MUX-out-1.png", "assets/images/MUX-out-1.png");
		type.set ("assets/images/MUX-out-1.png", AssetType.IMAGE);
		path.set ("assets/images/MUX-out-2.png", "assets/images/MUX-out-2.png");
		type.set ("assets/images/MUX-out-2.png", AssetType.IMAGE);
		path.set ("assets/images/MUX-out-3.png", "assets/images/MUX-out-3.png");
		type.set ("assets/images/MUX-out-3.png", AssetType.IMAGE);
		path.set ("assets/images/OUT-out.png", "assets/images/OUT-out.png");
		type.set ("assets/images/OUT-out.png", AssetType.IMAGE);
		path.set ("assets/images/pc-out-0.png", "assets/images/pc-out-0.png");
		type.set ("assets/images/pc-out-0.png", AssetType.IMAGE);
		path.set ("assets/images/pc-out-1.png", "assets/images/pc-out-1.png");
		type.set ("assets/images/pc-out-1.png", AssetType.IMAGE);
		path.set ("assets/images/pc-out-2.png", "assets/images/pc-out-2.png");
		type.set ("assets/images/pc-out-2.png", AssetType.IMAGE);
		path.set ("assets/images/pc-out-3.png", "assets/images/pc-out-3.png");
		type.set ("assets/images/pc-out-3.png", AssetType.IMAGE);
		path.set ("assets/images/PowerOffCover.png", "assets/images/PowerOffCover.png");
		type.set ("assets/images/PowerOffCover.png", AssetType.IMAGE);
		path.set ("assets/images/PowerOffCover2048.png", "assets/images/PowerOffCover2048.png");
		type.set ("assets/images/PowerOffCover2048.png", AssetType.IMAGE);
		path.set ("assets/images/R1-out-0.png", "assets/images/R1-out-0.png");
		type.set ("assets/images/R1-out-0.png", AssetType.IMAGE);
		path.set ("assets/images/R1-out-1.png", "assets/images/R1-out-1.png");
		type.set ("assets/images/R1-out-1.png", AssetType.IMAGE);
		path.set ("assets/images/R1-out-2.png", "assets/images/R1-out-2.png");
		type.set ("assets/images/R1-out-2.png", AssetType.IMAGE);
		path.set ("assets/images/R1-out-3.png", "assets/images/R1-out-3.png");
		type.set ("assets/images/R1-out-3.png", AssetType.IMAGE);
		path.set ("assets/images/R2-out-0.png", "assets/images/R2-out-0.png");
		type.set ("assets/images/R2-out-0.png", AssetType.IMAGE);
		path.set ("assets/images/R2-out-1.png", "assets/images/R2-out-1.png");
		type.set ("assets/images/R2-out-1.png", AssetType.IMAGE);
		path.set ("assets/images/R2-out-2.png", "assets/images/R2-out-2.png");
		type.set ("assets/images/R2-out-2.png", AssetType.IMAGE);
		path.set ("assets/images/R2-out-3.png", "assets/images/R2-out-3.png");
		type.set ("assets/images/R2-out-3.png", AssetType.IMAGE);
		path.set ("assets/images/RAM-out-0.png", "assets/images/RAM-out-0.png");
		type.set ("assets/images/RAM-out-0.png", AssetType.IMAGE);
		path.set ("assets/images/RAM-out-1.png", "assets/images/RAM-out-1.png");
		type.set ("assets/images/RAM-out-1.png", AssetType.IMAGE);
		path.set ("assets/images/RAM-out-2.png", "assets/images/RAM-out-2.png");
		type.set ("assets/images/RAM-out-2.png", AssetType.IMAGE);
		path.set ("assets/images/RAM-out-3.png", "assets/images/RAM-out-3.png");
		type.set ("assets/images/RAM-out-3.png", AssetType.IMAGE);
		path.set ("assets/images/SDA-out.png", "assets/images/SDA-out.png");
		type.set ("assets/images/SDA-out.png", AssetType.IMAGE);
		path.set ("assets/images/tfFrame.png", "assets/images/tfFrame.png");
		type.set ("assets/images/tfFrame.png", AssetType.IMAGE);
		path.set ("assets/images/top_layer.png", "assets/images/top_layer.png");
		type.set ("assets/images/top_layer.png", AssetType.IMAGE);
		path.set ("assets/images/top_layer2048.png", "assets/images/top_layer2048.png");
		type.set ("assets/images/top_layer2048.png", AssetType.IMAGE);
		path.set ("assets/images/top_layer_colored.png", "assets/images/top_layer_colored.png");
		type.set ("assets/images/top_layer_colored.png", AssetType.IMAGE);
		path.set ("assets/tbsimlogo.svg", "assets/tbsimlogo.svg");
		type.set ("assets/tbsimlogo.svg", AssetType.TEXT);
		path.set ("assets/tbsimlogo2.svg", "assets/tbsimlogo2.svg");
		type.set ("assets/tbsimlogo2.svg", AssetType.TEXT);
		path.set ("assets/tbsimlogo3.svg", "assets/tbsimlogo3.svg");
		type.set ("assets/tbsimlogo3.svg", AssetType.TEXT);
		path.set ("fonts/Consolas Bold.eot", "fonts/Consolas Bold.eot");
		type.set ("fonts/Consolas Bold.eot", AssetType.BINARY);
		path.set ("fonts/Consolas Bold.svg", "fonts/Consolas Bold.svg");
		type.set ("fonts/Consolas Bold.svg", AssetType.TEXT);
		path.set ("fonts/Consolas Bold.ttf", "fonts/Consolas Bold.ttf");
		type.set ("fonts/Consolas Bold.ttf", AssetType.FONT);
		path.set ("fonts/Consolas Bold.woff", "fonts/Consolas Bold.woff");
		type.set ("fonts/Consolas Bold.woff", AssetType.BINARY);
		path.set ("fonts/MyriadPro-Bold.eot", "fonts/MyriadPro-Bold.eot");
		type.set ("fonts/MyriadPro-Bold.eot", AssetType.BINARY);
		path.set ("fonts/MyriadPro-Bold.otf", "fonts/MyriadPro-Bold.otf");
		type.set ("fonts/MyriadPro-Bold.otf", AssetType.FONT);
		path.set ("fonts/MyriadPro-Bold.woff", "fonts/MyriadPro-Bold.woff");
		type.set ("fonts/MyriadPro-Bold.woff", AssetType.BINARY);
		path.set ("fonts/MyriadPro-Regular.eot", "fonts/MyriadPro-Regular.eot");
		type.set ("fonts/MyriadPro-Regular.eot", AssetType.BINARY);
		path.set ("fonts/MyriadPro-Regular.otf", "fonts/MyriadPro-Regular.otf");
		type.set ("fonts/MyriadPro-Regular.otf", AssetType.FONT);
		path.set ("fonts/MyriadPro-Regular.woff", "fonts/MyriadPro-Regular.woff");
		type.set ("fonts/MyriadPro-Regular.woff", AssetType.BINARY);
		
		
		#elseif html5
		
		var id;
		id = "assets/fonts/Consolas Bold.eot";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/fonts/Consolas Bold.svg";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/fonts/Consolas Bold.ttf";
		path.set (id, id);
		type.set (id, AssetType.FONT);
		id = "assets/fonts/Consolas Bold.woff";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/fonts/MyriadPro-Bold.eot";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/fonts/MyriadPro-Bold.otf";
		path.set (id, id);
		type.set (id, AssetType.FONT);
		id = "assets/fonts/MyriadPro-Bold.woff";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/fonts/MyriadPro-Regular.eot";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/fonts/MyriadPro-Regular.otf";
		path.set (id, id);
		type.set (id, AssetType.FONT);
		id = "assets/fonts/MyriadPro-Regular.woff";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/images/Accu-out-0.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Accu-out-1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Accu-out-2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Accu-out-3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_1Bit_bottomLayer2048.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_1Bit_gate1_out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_1Bit_gate2_out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_1Bit_gate3_out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_1Bit_gate4_out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_1Bit_input.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_1Bit_set.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_bottomLayer2048.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_enabler_enable.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_enabler_out_0.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_enabler_out_1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_enabler_out_2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_enabler_out_3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_memory_in_0.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_memory_in_1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_memory_in_2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_memory_in_3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_memory_out_0.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_memory_out_1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_memory_out_2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_memory_out_3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/accuPopup_memory_set.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/ALU-out-0.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/ALU-out-1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/ALU-out-2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/ALU-out-3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/ALU-out-equal.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/ALU-out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/architecture.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/bottom_layer.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/busline0.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/busline1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/busline2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/busline3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/busline4.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/busline5.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/busline6.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/busline7.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Clock.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/clockGlow.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/comp_static_lines.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/coverAlu2048.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/coverDecoder2048.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/coverMultiplexer2048.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Decoder-out-1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Decoder-out-2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Decoder-out-3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/EditRomPopup2048.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Enabler1-out-0.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Enabler1-out-1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Enabler1-out-2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Enabler1-out-3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Enabler2-out-0.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Enabler2-out-1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Enabler2-out-2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Enabler2-out-3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/enterInstruction_BG.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/enterInstruction_line0.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/enterInstruction_line1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/enterInstruction_line2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/enterInstruction_line3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/enterInstruction_line4.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/enterInstruction_line5.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/enterInstruction_line6.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/enterInstruction_line7.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/FlowArrows2048.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/G1-out-0.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/G1-out-1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/G1-out-2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/G1-out-3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/G2-out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/G3-out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/G4-out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/G5-out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/G6-out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/G7-out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/G8-out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/G9-out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/INP-out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/instructionTable.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/instructionTable2048.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/JE-out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/JMP-out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/JNE-out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Key-out-0.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Key-out-1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Key-out-2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Key-out-3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/LDA-out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/LDI-out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/MarkUnits.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/MarkUnits2048.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/MOV-out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/MUX-out-0.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/MUX-out-1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/MUX-out-2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/MUX-out-3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/OUT-out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/pc-out-0.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/pc-out-1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/pc-out-2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/pc-out-3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/PowerOffCover.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/PowerOffCover2048.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/R1-out-0.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/R1-out-1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/R1-out-2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/R1-out-3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/R2-out-0.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/R2-out-1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/R2-out-2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/R2-out-3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/RAM-out-0.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/RAM-out-1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/RAM-out-2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/RAM-out-3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/SDA-out.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/tfFrame.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/top_layer.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/top_layer2048.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/top_layer_colored.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/tbsimlogo.svg";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/tbsimlogo2.svg";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/tbsimlogo3.svg";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "fonts/Consolas Bold.eot";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "fonts/Consolas Bold.svg";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "fonts/Consolas Bold.ttf";
		path.set (id, id);
		type.set (id, AssetType.FONT);
		id = "fonts/Consolas Bold.woff";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "fonts/MyriadPro-Bold.eot";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "fonts/MyriadPro-Bold.otf";
		path.set (id, id);
		type.set (id, AssetType.FONT);
		id = "fonts/MyriadPro-Bold.woff";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "fonts/MyriadPro-Regular.eot";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "fonts/MyriadPro-Regular.otf";
		path.set (id, id);
		type.set (id, AssetType.FONT);
		id = "fonts/MyriadPro-Regular.woff";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		
		
		var assetsPrefix = ApplicationMain.config.assetsPrefix;
		if (assetsPrefix != null) {
			for (k in path.keys()) {
				path.set(k, assetsPrefix + path[k]);
			}
		}
		
		#else
		
		#if openfl
		
		
		
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_consolas_bold_ttf);
		
		
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_myriadpro_bold_otf);
		
		
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_myriadpro_regular_otf);
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		openfl.text.Font.registerFont (__ASSET__OPENFL__fonts_consolas_bold_ttf);
		
		
		openfl.text.Font.registerFont (__ASSET__OPENFL__fonts_myriadpro_bold_otf);
		
		
		openfl.text.Font.registerFont (__ASSET__OPENFL__fonts_myriadpro_regular_otf);
		
		
		#end
		
		#if (windows || mac || linux)
		
		var useManifest = false;
		useManifest = true;
		useManifest = true;
		
		className.set ("assets/fonts/Consolas Bold.ttf", __ASSET__assets_fonts_consolas_bold_ttf);
		type.set ("assets/fonts/Consolas Bold.ttf", AssetType.FONT);
		useManifest = true;
		useManifest = true;
		
		className.set ("assets/fonts/MyriadPro-Bold.otf", __ASSET__assets_fonts_myriadpro_bold_otf);
		type.set ("assets/fonts/MyriadPro-Bold.otf", AssetType.FONT);
		useManifest = true;
		useManifest = true;
		
		className.set ("assets/fonts/MyriadPro-Regular.otf", __ASSET__assets_fonts_myriadpro_regular_otf);
		type.set ("assets/fonts/MyriadPro-Regular.otf", AssetType.FONT);
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		
		className.set ("fonts/Consolas Bold.ttf", __ASSET__fonts_consolas_bold_ttf);
		type.set ("fonts/Consolas Bold.ttf", AssetType.FONT);
		useManifest = true;
		useManifest = true;
		
		className.set ("fonts/MyriadPro-Bold.otf", __ASSET__fonts_myriadpro_bold_otf);
		type.set ("fonts/MyriadPro-Bold.otf", AssetType.FONT);
		useManifest = true;
		useManifest = true;
		
		className.set ("fonts/MyriadPro-Regular.otf", __ASSET__fonts_myriadpro_regular_otf);
		type.set ("fonts/MyriadPro-Regular.otf", AssetType.FONT);
		useManifest = true;
		
		
		if (useManifest) {
			
			loadManifest ();
			
			if (Sys.args ().indexOf ("-livereload") > -1) {
				
				var path = FileSystem.fullPath ("manifest");
				lastModified = FileSystem.stat (path).mtime.getTime ();
				
				timer = new Timer (2000);
				timer.run = function () {
					
					var modified = FileSystem.stat (path).mtime.getTime ();
					
					if (modified > lastModified) {
						
						lastModified = modified;
						loadManifest ();
						
						if (eventCallback != null) {
							
							eventCallback (this, "change");
							
						}
						
					}
					
				}
				
			}
			
		}
		
		#else
		
		loadManifest ();
		
		#end
		#end
		
	}
	
	
	public override function exists (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var assetType = this.type.get (id);
		
		if (assetType != null) {
			
			if (assetType == requestedType || ((requestedType == SOUND || requestedType == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			#if flash
			
			if (requestedType == BINARY && (assetType == BINARY || assetType == TEXT || assetType == IMAGE)) {
				
				return true;
				
			} else if (requestedType == null || path.exists (id)) {
				
				return true;
				
			}
			
			#else
			
			if (requestedType == BINARY || requestedType == null || (assetType == BINARY && requestedType == TEXT)) {
				
				return true;
				
			}
			
			#end
			
		}
		
		return false;
		
	}
	
	
	public override function getAudioBuffer (id:String):AudioBuffer {
		
		#if flash
		
		var buffer = new AudioBuffer ();
		buffer.src = cast (Type.createInstance (className.get (id), []), Sound);
		return buffer;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return AudioBuffer.fromBytes (cast (Type.createInstance (className.get (id), []), ByteArray));
		else return AudioBuffer.fromFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getBytes (id:String):ByteArray {
		
		#if flash
		
		switch (type.get (id)) {
			
			case TEXT, BINARY:
				
				return cast (Type.createInstance (className.get (id), []), ByteArray);
			
			case IMAGE:
				
				var bitmapData = cast (Type.createInstance (className.get (id), []), BitmapData);
				return bitmapData.getPixels (bitmapData.rect);
			
			default:
				
				return null;
			
		}
		
		return cast (Type.createInstance (className.get (id), []), ByteArray);
		
		#elseif html5
		
		var bytes:ByteArray = null;
		var data = Preloader.loaders.get (path.get (id)).data;
		
		if (Std.is (data, String)) {
			
			bytes = new ByteArray ();
			bytes.writeUTFBytes (data);
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes;
			
		} else {
			
			return null;
		}
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), ByteArray);
		else return ByteArray.readFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getFont (id:String):Font {
		
		#if flash
		
		var src = Type.createInstance (className.get (id), []);
		
		var font = new Font (src.fontName);
		font.src = src;
		return font;
		
		#elseif html5
		
		return cast (Type.createInstance (className.get (id), []), Font);
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Font);
			
		} else {
			
			return Font.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	public override function getImage (id:String):Image {
		
		#if flash
		
		return Image.fromBitmapData (cast (Type.createInstance (className.get (id), []), BitmapData));
		
		#elseif html5
		
		return Image.fromImageElement (Preloader.images.get (path.get (id)));
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Image);
			
		} else {
			
			return Image.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	/*public override function getMusic (id:String):Dynamic {
		
		#if flash
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif openfl_html5
		
		//var sound = new Sound ();
		//sound.__buffer = true;
		//sound.load (new URLRequest (path.get (id)));
		//return sound;
		return null;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		return null;
		//if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		//else return new Sound (new URLRequest (path.get (id)), null, true);
		
		#end
		
	}*/
	
	
	public override function getPath (id:String):String {
		
		//#if ios
		
		//return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		//#else
		
		return path.get (id);
		
		//#end
		
	}
	
	
	public override function getText (id:String):String {
		
		#if html5
		
		var bytes:ByteArray = null;
		var data = Preloader.loaders.get (path.get (id)).data;
		
		if (Std.is (data, String)) {
			
			return cast data;
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes.readUTFBytes (bytes.length);
			
		} else {
			
			return null;
		}
		
		#else
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.readUTFBytes (bytes.length);
			
		}
		
		#end
		
	}
	
	
	public override function isLocal (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		
		#if flash
		
		//if (requestedType != AssetType.MUSIC && requestedType != AssetType.SOUND) {
			
			return className.exists (id);
			
		//}
		
		#end
		
		return true;
		
	}
	
	
	public override function list (type:String):Array<String> {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var items = [];
		
		for (id in this.type.keys ()) {
			
			if (requestedType == null || exists (id, type)) {
				
				items.push (id);
				
			}
			
		}
		
		return items;
		
	}
	
	
	public override function loadAudioBuffer (id:String, handler:AudioBuffer -> Void):Void {
		
		#if (flash)
		if (path.exists (id)) {
			
			var soundLoader = new Sound ();
			soundLoader.addEventListener (Event.COMPLETE, function (event) {
				
				var audioBuffer:AudioBuffer = new AudioBuffer();
				audioBuffer.src = event.currentTarget;
				handler (audioBuffer);
				
			});
			soundLoader.load (new URLRequest (path.get (id)));
			
		} else {
			handler (getAudioBuffer (id));
			
		}
		#else
		handler (getAudioBuffer (id));
		
		#end
		
	}
	
	
	public override function loadBytes (id:String, handler:ByteArray -> Void):Void {
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bytes = new ByteArray ();
				bytes.writeUTFBytes (event.currentTarget.data);
				bytes.position = 0;
				
				handler (bytes);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getBytes (id));
			
		}
		
		#else
		
		handler (getBytes (id));
		
		#end
		
	}
	
	
	public override function loadImage (id:String, handler:Image -> Void):Void {
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bitmapData = cast (event.currentTarget.content, Bitmap).bitmapData;
				handler (Image.fromBitmapData (bitmapData));
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getImage (id));
			
		}
		
		#else
		
		handler (getImage (id));
		
		#end
		
	}
	
	
	#if (!flash && !html5)
	private function loadManifest ():Void {
		
		try {
			
			#if blackberry
			var bytes = ByteArray.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = ByteArray.readFile ("../res/manifest");
			#elseif emscripten
			var bytes = ByteArray.readFile ("assets/manifest");
			#elseif (mac && java)
			var bytes = ByteArray.readFile ("../Resources/manifest");
			#elseif ios
			var bytes = ByteArray.readFile ("assets/manifest");
			#else
			var bytes = ByteArray.readFile ("manifest");
			#end
			
			if (bytes != null) {
				
				bytes.position = 0;
				
				if (bytes.length > 0) {
					
					var data = bytes.readUTFBytes (bytes.length);
					
					if (data != null && data.length > 0) {
						
						var manifest:Array<Dynamic> = Unserializer.run (data);
						
						for (asset in manifest) {
							
							if (!className.exists (asset.id)) {
								
								#if ios
								path.set (asset.id, "assets/" + asset.path);
								#else
								path.set (asset.id, asset.path);
								#end
								type.set (asset.id, cast (asset.type, AssetType));
								
							}
							
						}
						
					}
					
				}
				
			} else {
				
				trace ("Warning: Could not load asset manifest (bytes was null)");
				
			}
		
		} catch (e:Dynamic) {
			
			trace ('Warning: Could not load asset manifest (${e})');
			
		}
		
	}
	#end
	
	
	/*public override function loadMusic (id:String, handler:Dynamic -> Void):Void {
		
		#if (flash || html5)
		
		//if (path.exists (id)) {
			
		//	var loader = new Loader ();
		//	loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
		//		handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
		//	});
		//	loader.load (new URLRequest (path.get (id)));
			
		//} else {
			
			handler (getMusic (id));
			
		//}
		
		#else
		
		handler (getMusic (id));
		
		#end
		
	}*/
	
	
	public override function loadText (id:String, handler:String -> Void):Void {
		
		//#if html5
		
		/*if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				handler (event.currentTarget.data);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getText (id));
			
		}*/
		
		//#else
		
		var callback = function (bytes:ByteArray):Void {
			
			if (bytes == null) {
				
				handler (null);
				
			} else {
				
				handler (bytes.readUTFBytes (bytes.length));
				
			}
			
		}
		
		loadBytes (id, callback);
		
		//#end
		
	}
	
	
}


#if !display
#if flash























































































































































#elseif html5



@:keep #if display private #end class __ASSET__assets_fonts_consolas_bold_ttf extends lime.text.Font { public function new () { super (); name = "Consolas Bold"; } } 


@:keep #if display private #end class __ASSET__assets_fonts_myriadpro_bold_otf extends lime.text.Font { public function new () { super (); name = "Myriad Pro Bold"; } } 


@:keep #if display private #end class __ASSET__assets_fonts_myriadpro_regular_otf extends lime.text.Font { public function new () { super (); name = "Myriad Pro"; } } 



































































































































@:keep #if display private #end class __ASSET__fonts_consolas_bold_ttf extends lime.text.Font { public function new () { super (); name = "Consolas Bold"; } } 


@:keep #if display private #end class __ASSET__fonts_myriadpro_bold_otf extends lime.text.Font { public function new () { super (); name = "Myriad Pro Bold"; } } 


@:keep #if display private #end class __ASSET__fonts_myriadpro_regular_otf extends lime.text.Font { public function new () { super (); name = "Myriad Pro"; } } 



#else

@:keep #if display private #end class __ASSET__assets_fonts_consolas_bold_ttf extends lime.text.Font { public function new () { __fontPath = "assets/fonts/Consolas Bold.ttf"; name = "Consolas Bold"; super (); }}
@:keep #if display private #end class __ASSET__assets_fonts_myriadpro_bold_otf extends lime.text.Font { public function new () { __fontPath = "assets/fonts/MyriadPro-Bold.otf"; name = "Myriad Pro Bold"; super (); }}
@:keep #if display private #end class __ASSET__assets_fonts_myriadpro_regular_otf extends lime.text.Font { public function new () { __fontPath = "assets/fonts/MyriadPro-Regular.otf"; name = "Myriad Pro"; super (); }}
@:keep #if display private #end class __ASSET__fonts_consolas_bold_ttf extends lime.text.Font { public function new () { __fontPath = "fonts/Consolas Bold.ttf"; name = "Consolas Bold"; super (); }}
@:keep #if display private #end class __ASSET__fonts_myriadpro_bold_otf extends lime.text.Font { public function new () { __fontPath = "fonts/MyriadPro-Bold.otf"; name = "Myriad Pro Bold"; super (); }}
@:keep #if display private #end class __ASSET__fonts_myriadpro_regular_otf extends lime.text.Font { public function new () { __fontPath = "fonts/MyriadPro-Regular.otf"; name = "Myriad Pro"; super (); }}


#if (windows || mac || linux)





#end

#if openfl
@:keep #if display private #end class __ASSET__OPENFL__assets_fonts_consolas_bold_ttf extends openfl.text.Font { public function new () { __fontPath = "assets/fonts/Consolas Bold.ttf"; name = "Consolas Bold"; super (); }}
@:keep #if display private #end class __ASSET__OPENFL__assets_fonts_myriadpro_bold_otf extends openfl.text.Font { public function new () { __fontPath = "assets/fonts/MyriadPro-Bold.otf"; name = "Myriad Pro Bold"; super (); }}
@:keep #if display private #end class __ASSET__OPENFL__assets_fonts_myriadpro_regular_otf extends openfl.text.Font { public function new () { __fontPath = "assets/fonts/MyriadPro-Regular.otf"; name = "Myriad Pro"; super (); }}
@:keep #if display private #end class __ASSET__OPENFL__fonts_consolas_bold_ttf extends openfl.text.Font { public function new () { __fontPath = "fonts/Consolas Bold.ttf"; name = "Consolas Bold"; super (); }}
@:keep #if display private #end class __ASSET__OPENFL__fonts_myriadpro_bold_otf extends openfl.text.Font { public function new () { __fontPath = "fonts/MyriadPro-Bold.otf"; name = "Myriad Pro Bold"; super (); }}
@:keep #if display private #end class __ASSET__OPENFL__fonts_myriadpro_regular_otf extends openfl.text.Font { public function new () { __fontPath = "fonts/MyriadPro-Regular.otf"; name = "Myriad Pro"; super (); }}

#end

#end
#end


#end