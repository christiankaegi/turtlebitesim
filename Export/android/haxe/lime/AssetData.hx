package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/fonts/Consolas Bold.eot", "assets/fonts/Consolas Bold.eot");
			type.set ("assets/fonts/Consolas Bold.eot", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/fonts/Consolas Bold.svg", "assets/fonts/Consolas Bold.svg");
			type.set ("assets/fonts/Consolas Bold.svg", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/fonts/Consolas Bold.ttf", "assets/fonts/Consolas Bold.ttf");
			type.set ("assets/fonts/Consolas Bold.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("assets/fonts/Consolas Bold.woff", "assets/fonts/Consolas Bold.woff");
			type.set ("assets/fonts/Consolas Bold.woff", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/fonts/MyriadPro-Bold.eot", "assets/fonts/MyriadPro-Bold.eot");
			type.set ("assets/fonts/MyriadPro-Bold.eot", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/fonts/MyriadPro-Bold.otf", "assets/fonts/MyriadPro-Bold.otf");
			type.set ("assets/fonts/MyriadPro-Bold.otf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("assets/fonts/MyriadPro-Bold.woff", "assets/fonts/MyriadPro-Bold.woff");
			type.set ("assets/fonts/MyriadPro-Bold.woff", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/fonts/MyriadPro-Regular.eot", "assets/fonts/MyriadPro-Regular.eot");
			type.set ("assets/fonts/MyriadPro-Regular.eot", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/fonts/MyriadPro-Regular.otf", "assets/fonts/MyriadPro-Regular.otf");
			type.set ("assets/fonts/MyriadPro-Regular.otf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("assets/fonts/MyriadPro-Regular.woff", "assets/fonts/MyriadPro-Regular.woff");
			type.set ("assets/fonts/MyriadPro-Regular.woff", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/Accu-out-0.png", "assets/images/Accu-out-0.png");
			type.set ("assets/images/Accu-out-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Accu-out-1.png", "assets/images/Accu-out-1.png");
			type.set ("assets/images/Accu-out-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Accu-out-2.png", "assets/images/Accu-out-2.png");
			type.set ("assets/images/Accu-out-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Accu-out-3.png", "assets/images/Accu-out-3.png");
			type.set ("assets/images/Accu-out-3.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/accuPopup_1Bit_bottomLayer2048.png", "assets/images/accuPopup_1Bit_bottomLayer2048.png");
			type.set ("assets/images/accuPopup_1Bit_bottomLayer2048.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/accuPopup_1Bit_gate1_out.png", "assets/images/accuPopup_1Bit_gate1_out.png");
			type.set ("assets/images/accuPopup_1Bit_gate1_out.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/accuPopup_1Bit_gate2_out.png", "assets/images/accuPopup_1Bit_gate2_out.png");
			type.set ("assets/images/accuPopup_1Bit_gate2_out.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/accuPopup_1Bit_gate3_out.png", "assets/images/accuPopup_1Bit_gate3_out.png");
			type.set ("assets/images/accuPopup_1Bit_gate3_out.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/accuPopup_1Bit_gate4_out.png", "assets/images/accuPopup_1Bit_gate4_out.png");
			type.set ("assets/images/accuPopup_1Bit_gate4_out.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/accuPopup_1Bit_input.png", "assets/images/accuPopup_1Bit_input.png");
			type.set ("assets/images/accuPopup_1Bit_input.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/accuPopup_1Bit_set.png", "assets/images/accuPopup_1Bit_set.png");
			type.set ("assets/images/accuPopup_1Bit_set.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/accuPopup_bottomLayer2048.png", "assets/images/accuPopup_bottomLayer2048.png");
			type.set ("assets/images/accuPopup_bottomLayer2048.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/accuPopup_enabler_enable.png", "assets/images/accuPopup_enabler_enable.png");
			type.set ("assets/images/accuPopup_enabler_enable.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/accuPopup_enabler_out_0.png", "assets/images/accuPopup_enabler_out_0.png");
			type.set ("assets/images/accuPopup_enabler_out_0.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/accuPopup_enabler_out_1.png", "assets/images/accuPopup_enabler_out_1.png");
			type.set ("assets/images/accuPopup_enabler_out_1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/accuPopup_enabler_out_2.png", "assets/images/accuPopup_enabler_out_2.png");
			type.set ("assets/images/accuPopup_enabler_out_2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/accuPopup_enabler_out_3.png", "assets/images/accuPopup_enabler_out_3.png");
			type.set ("assets/images/accuPopup_enabler_out_3.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/accuPopup_memory_in_0.png", "assets/images/accuPopup_memory_in_0.png");
			type.set ("assets/images/accuPopup_memory_in_0.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/accuPopup_memory_in_1.png", "assets/images/accuPopup_memory_in_1.png");
			type.set ("assets/images/accuPopup_memory_in_1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/accuPopup_memory_in_2.png", "assets/images/accuPopup_memory_in_2.png");
			type.set ("assets/images/accuPopup_memory_in_2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/accuPopup_memory_in_3.png", "assets/images/accuPopup_memory_in_3.png");
			type.set ("assets/images/accuPopup_memory_in_3.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/accuPopup_memory_out_0.png", "assets/images/accuPopup_memory_out_0.png");
			type.set ("assets/images/accuPopup_memory_out_0.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/accuPopup_memory_out_1.png", "assets/images/accuPopup_memory_out_1.png");
			type.set ("assets/images/accuPopup_memory_out_1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/accuPopup_memory_out_2.png", "assets/images/accuPopup_memory_out_2.png");
			type.set ("assets/images/accuPopup_memory_out_2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/accuPopup_memory_out_3.png", "assets/images/accuPopup_memory_out_3.png");
			type.set ("assets/images/accuPopup_memory_out_3.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/accuPopup_memory_set.png", "assets/images/accuPopup_memory_set.png");
			type.set ("assets/images/accuPopup_memory_set.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/ALU-out-0.png", "assets/images/ALU-out-0.png");
			type.set ("assets/images/ALU-out-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/ALU-out-1.png", "assets/images/ALU-out-1.png");
			type.set ("assets/images/ALU-out-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/ALU-out-2.png", "assets/images/ALU-out-2.png");
			type.set ("assets/images/ALU-out-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/ALU-out-3.png", "assets/images/ALU-out-3.png");
			type.set ("assets/images/ALU-out-3.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/ALU-out-equal.png", "assets/images/ALU-out-equal.png");
			type.set ("assets/images/ALU-out-equal.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/ALU-out.png", "assets/images/ALU-out.png");
			type.set ("assets/images/ALU-out.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/architecture.png", "assets/images/architecture.png");
			type.set ("assets/images/architecture.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/bottom_layer.png", "assets/images/bottom_layer.png");
			type.set ("assets/images/bottom_layer.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/busline0.png", "assets/images/busline0.png");
			type.set ("assets/images/busline0.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/busline1.png", "assets/images/busline1.png");
			type.set ("assets/images/busline1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/busline2.png", "assets/images/busline2.png");
			type.set ("assets/images/busline2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/busline3.png", "assets/images/busline3.png");
			type.set ("assets/images/busline3.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/busline4.png", "assets/images/busline4.png");
			type.set ("assets/images/busline4.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/busline5.png", "assets/images/busline5.png");
			type.set ("assets/images/busline5.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/busline6.png", "assets/images/busline6.png");
			type.set ("assets/images/busline6.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/busline7.png", "assets/images/busline7.png");
			type.set ("assets/images/busline7.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Clock.png", "assets/images/Clock.png");
			type.set ("assets/images/Clock.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/clockGlow.png", "assets/images/clockGlow.png");
			type.set ("assets/images/clockGlow.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/comp_static_lines.png", "assets/images/comp_static_lines.png");
			type.set ("assets/images/comp_static_lines.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/coverAlu2048.png", "assets/images/coverAlu2048.png");
			type.set ("assets/images/coverAlu2048.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/coverDecoder2048.png", "assets/images/coverDecoder2048.png");
			type.set ("assets/images/coverDecoder2048.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/coverMultiplexer2048.png", "assets/images/coverMultiplexer2048.png");
			type.set ("assets/images/coverMultiplexer2048.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Decoder-out-1.png", "assets/images/Decoder-out-1.png");
			type.set ("assets/images/Decoder-out-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Decoder-out-2.png", "assets/images/Decoder-out-2.png");
			type.set ("assets/images/Decoder-out-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Decoder-out-3.png", "assets/images/Decoder-out-3.png");
			type.set ("assets/images/Decoder-out-3.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/EditRomPopup2048.png", "assets/images/EditRomPopup2048.png");
			type.set ("assets/images/EditRomPopup2048.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Enabler1-out-0.png", "assets/images/Enabler1-out-0.png");
			type.set ("assets/images/Enabler1-out-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Enabler1-out-1.png", "assets/images/Enabler1-out-1.png");
			type.set ("assets/images/Enabler1-out-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Enabler1-out-2.png", "assets/images/Enabler1-out-2.png");
			type.set ("assets/images/Enabler1-out-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Enabler1-out-3.png", "assets/images/Enabler1-out-3.png");
			type.set ("assets/images/Enabler1-out-3.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Enabler2-out-0.png", "assets/images/Enabler2-out-0.png");
			type.set ("assets/images/Enabler2-out-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Enabler2-out-1.png", "assets/images/Enabler2-out-1.png");
			type.set ("assets/images/Enabler2-out-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Enabler2-out-2.png", "assets/images/Enabler2-out-2.png");
			type.set ("assets/images/Enabler2-out-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Enabler2-out-3.png", "assets/images/Enabler2-out-3.png");
			type.set ("assets/images/Enabler2-out-3.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/enterInstruction_BG.png", "assets/images/enterInstruction_BG.png");
			type.set ("assets/images/enterInstruction_BG.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/enterInstruction_line0.png", "assets/images/enterInstruction_line0.png");
			type.set ("assets/images/enterInstruction_line0.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/enterInstruction_line1.png", "assets/images/enterInstruction_line1.png");
			type.set ("assets/images/enterInstruction_line1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/enterInstruction_line2.png", "assets/images/enterInstruction_line2.png");
			type.set ("assets/images/enterInstruction_line2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/enterInstruction_line3.png", "assets/images/enterInstruction_line3.png");
			type.set ("assets/images/enterInstruction_line3.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/enterInstruction_line4.png", "assets/images/enterInstruction_line4.png");
			type.set ("assets/images/enterInstruction_line4.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/enterInstruction_line5.png", "assets/images/enterInstruction_line5.png");
			type.set ("assets/images/enterInstruction_line5.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/enterInstruction_line6.png", "assets/images/enterInstruction_line6.png");
			type.set ("assets/images/enterInstruction_line6.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/enterInstruction_line7.png", "assets/images/enterInstruction_line7.png");
			type.set ("assets/images/enterInstruction_line7.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/FlowArrows2048.png", "assets/images/FlowArrows2048.png");
			type.set ("assets/images/FlowArrows2048.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/G1-out-0.png", "assets/images/G1-out-0.png");
			type.set ("assets/images/G1-out-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/G1-out-1.png", "assets/images/G1-out-1.png");
			type.set ("assets/images/G1-out-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/G1-out-2.png", "assets/images/G1-out-2.png");
			type.set ("assets/images/G1-out-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/G1-out-3.png", "assets/images/G1-out-3.png");
			type.set ("assets/images/G1-out-3.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/G2-out.png", "assets/images/G2-out.png");
			type.set ("assets/images/G2-out.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/G3-out.png", "assets/images/G3-out.png");
			type.set ("assets/images/G3-out.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/G4-out.png", "assets/images/G4-out.png");
			type.set ("assets/images/G4-out.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/G5-out.png", "assets/images/G5-out.png");
			type.set ("assets/images/G5-out.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/G6-out.png", "assets/images/G6-out.png");
			type.set ("assets/images/G6-out.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/G7-out.png", "assets/images/G7-out.png");
			type.set ("assets/images/G7-out.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/G8-out.png", "assets/images/G8-out.png");
			type.set ("assets/images/G8-out.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/G9-out.png", "assets/images/G9-out.png");
			type.set ("assets/images/G9-out.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/INP-out.png", "assets/images/INP-out.png");
			type.set ("assets/images/INP-out.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/instructionTable.png", "assets/images/instructionTable.png");
			type.set ("assets/images/instructionTable.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/instructionTable2048.png", "assets/images/instructionTable2048.png");
			type.set ("assets/images/instructionTable2048.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/JE-out.png", "assets/images/JE-out.png");
			type.set ("assets/images/JE-out.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/JMP-out.png", "assets/images/JMP-out.png");
			type.set ("assets/images/JMP-out.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/JNE-out.png", "assets/images/JNE-out.png");
			type.set ("assets/images/JNE-out.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Key-out-0.png", "assets/images/Key-out-0.png");
			type.set ("assets/images/Key-out-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Key-out-1.png", "assets/images/Key-out-1.png");
			type.set ("assets/images/Key-out-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Key-out-2.png", "assets/images/Key-out-2.png");
			type.set ("assets/images/Key-out-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Key-out-3.png", "assets/images/Key-out-3.png");
			type.set ("assets/images/Key-out-3.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/LDA-out.png", "assets/images/LDA-out.png");
			type.set ("assets/images/LDA-out.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/LDI-out.png", "assets/images/LDI-out.png");
			type.set ("assets/images/LDI-out.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/MarkUnits.png", "assets/images/MarkUnits.png");
			type.set ("assets/images/MarkUnits.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/MarkUnits2048.png", "assets/images/MarkUnits2048.png");
			type.set ("assets/images/MarkUnits2048.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/MOV-out.png", "assets/images/MOV-out.png");
			type.set ("assets/images/MOV-out.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/MUX-out-0.png", "assets/images/MUX-out-0.png");
			type.set ("assets/images/MUX-out-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/MUX-out-1.png", "assets/images/MUX-out-1.png");
			type.set ("assets/images/MUX-out-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/MUX-out-2.png", "assets/images/MUX-out-2.png");
			type.set ("assets/images/MUX-out-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/MUX-out-3.png", "assets/images/MUX-out-3.png");
			type.set ("assets/images/MUX-out-3.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/OUT-out.png", "assets/images/OUT-out.png");
			type.set ("assets/images/OUT-out.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/pc-out-0.png", "assets/images/pc-out-0.png");
			type.set ("assets/images/pc-out-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/pc-out-1.png", "assets/images/pc-out-1.png");
			type.set ("assets/images/pc-out-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/pc-out-2.png", "assets/images/pc-out-2.png");
			type.set ("assets/images/pc-out-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/pc-out-3.png", "assets/images/pc-out-3.png");
			type.set ("assets/images/pc-out-3.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/PowerOffCover.png", "assets/images/PowerOffCover.png");
			type.set ("assets/images/PowerOffCover.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/PowerOffCover2048.png", "assets/images/PowerOffCover2048.png");
			type.set ("assets/images/PowerOffCover2048.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/R1-out-0.png", "assets/images/R1-out-0.png");
			type.set ("assets/images/R1-out-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/R1-out-1.png", "assets/images/R1-out-1.png");
			type.set ("assets/images/R1-out-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/R1-out-2.png", "assets/images/R1-out-2.png");
			type.set ("assets/images/R1-out-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/R1-out-3.png", "assets/images/R1-out-3.png");
			type.set ("assets/images/R1-out-3.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/R2-out-0.png", "assets/images/R2-out-0.png");
			type.set ("assets/images/R2-out-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/R2-out-1.png", "assets/images/R2-out-1.png");
			type.set ("assets/images/R2-out-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/R2-out-2.png", "assets/images/R2-out-2.png");
			type.set ("assets/images/R2-out-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/R2-out-3.png", "assets/images/R2-out-3.png");
			type.set ("assets/images/R2-out-3.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/RAM-out-0.png", "assets/images/RAM-out-0.png");
			type.set ("assets/images/RAM-out-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/RAM-out-1.png", "assets/images/RAM-out-1.png");
			type.set ("assets/images/RAM-out-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/RAM-out-2.png", "assets/images/RAM-out-2.png");
			type.set ("assets/images/RAM-out-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/RAM-out-3.png", "assets/images/RAM-out-3.png");
			type.set ("assets/images/RAM-out-3.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/SDA-out.png", "assets/images/SDA-out.png");
			type.set ("assets/images/SDA-out.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/tfFrame.png", "assets/images/tfFrame.png");
			type.set ("assets/images/tfFrame.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/top_layer.png", "assets/images/top_layer.png");
			type.set ("assets/images/top_layer.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/top_layer2048.png", "assets/images/top_layer2048.png");
			type.set ("assets/images/top_layer2048.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/top_layer_colored.png", "assets/images/top_layer_colored.png");
			type.set ("assets/images/top_layer_colored.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/tbsimlogo.svg", "assets/tbsimlogo.svg");
			type.set ("assets/tbsimlogo.svg", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/tbsimlogo2.svg", "assets/tbsimlogo2.svg");
			type.set ("assets/tbsimlogo2.svg", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/tbsimlogo3.svg", "assets/tbsimlogo3.svg");
			type.set ("assets/tbsimlogo3.svg", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("fonts/Consolas Bold.eot", "fonts/Consolas Bold.eot");
			type.set ("fonts/Consolas Bold.eot", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("fonts/Consolas Bold.svg", "fonts/Consolas Bold.svg");
			type.set ("fonts/Consolas Bold.svg", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("fonts/Consolas Bold.ttf", "fonts/Consolas Bold.ttf");
			type.set ("fonts/Consolas Bold.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("fonts/Consolas Bold.woff", "fonts/Consolas Bold.woff");
			type.set ("fonts/Consolas Bold.woff", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("fonts/MyriadPro-Bold.eot", "fonts/MyriadPro-Bold.eot");
			type.set ("fonts/MyriadPro-Bold.eot", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("fonts/MyriadPro-Bold.otf", "fonts/MyriadPro-Bold.otf");
			type.set ("fonts/MyriadPro-Bold.otf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("fonts/MyriadPro-Bold.woff", "fonts/MyriadPro-Bold.woff");
			type.set ("fonts/MyriadPro-Bold.woff", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("fonts/MyriadPro-Regular.eot", "fonts/MyriadPro-Regular.eot");
			type.set ("fonts/MyriadPro-Regular.eot", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("fonts/MyriadPro-Regular.otf", "fonts/MyriadPro-Regular.otf");
			type.set ("fonts/MyriadPro-Regular.otf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("fonts/MyriadPro-Regular.woff", "fonts/MyriadPro-Regular.woff");
			type.set ("fonts/MyriadPro-Regular.woff", Reflect.field (AssetType, "binary".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
