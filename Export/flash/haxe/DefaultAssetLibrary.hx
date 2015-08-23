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
		
		className.set ("assets/fonts/Consolas Bold.eot", __ASSET__assets_fonts_consolas_bold_eot);
		type.set ("assets/fonts/Consolas Bold.eot", AssetType.BINARY);
		className.set ("assets/fonts/Consolas Bold.svg", __ASSET__assets_fonts_consolas_bold_svg);
		type.set ("assets/fonts/Consolas Bold.svg", AssetType.TEXT);
		className.set ("assets/fonts/Consolas Bold.ttf", __ASSET__assets_fonts_consolas_bold_ttf);
		type.set ("assets/fonts/Consolas Bold.ttf", AssetType.FONT);
		className.set ("assets/fonts/Consolas Bold.woff", __ASSET__assets_fonts_consolas_bold_woff);
		type.set ("assets/fonts/Consolas Bold.woff", AssetType.BINARY);
		className.set ("assets/fonts/MyriadPro-Bold.eot", __ASSET__assets_fonts_myriadpro_bold_eot);
		type.set ("assets/fonts/MyriadPro-Bold.eot", AssetType.BINARY);
		className.set ("assets/fonts/MyriadPro-Bold.otf", __ASSET__assets_fonts_myriadpro_bold_otf);
		type.set ("assets/fonts/MyriadPro-Bold.otf", AssetType.FONT);
		className.set ("assets/fonts/MyriadPro-Bold.woff", __ASSET__assets_fonts_myriadpro_bold_woff);
		type.set ("assets/fonts/MyriadPro-Bold.woff", AssetType.BINARY);
		className.set ("assets/fonts/MyriadPro-Regular.eot", __ASSET__assets_fonts_myriadpro_regular_eot);
		type.set ("assets/fonts/MyriadPro-Regular.eot", AssetType.BINARY);
		className.set ("assets/fonts/MyriadPro-Regular.otf", __ASSET__assets_fonts_myriadpro_regular_otf);
		type.set ("assets/fonts/MyriadPro-Regular.otf", AssetType.FONT);
		className.set ("assets/fonts/MyriadPro-Regular.woff", __ASSET__assets_fonts_myriadpro_regular_woff);
		type.set ("assets/fonts/MyriadPro-Regular.woff", AssetType.BINARY);
		className.set ("assets/images/Accu-out-0.png", __ASSET__assets_images_accu_out_0_png);
		type.set ("assets/images/Accu-out-0.png", AssetType.IMAGE);
		className.set ("assets/images/Accu-out-1.png", __ASSET__assets_images_accu_out_1_png);
		type.set ("assets/images/Accu-out-1.png", AssetType.IMAGE);
		className.set ("assets/images/Accu-out-2.png", __ASSET__assets_images_accu_out_2_png);
		type.set ("assets/images/Accu-out-2.png", AssetType.IMAGE);
		className.set ("assets/images/Accu-out-3.png", __ASSET__assets_images_accu_out_3_png);
		type.set ("assets/images/Accu-out-3.png", AssetType.IMAGE);
		className.set ("assets/images/accuPopup_1Bit_bottomLayer2048.png", __ASSET__assets_images_accupopup_1bit_bottomlayer2048_png);
		type.set ("assets/images/accuPopup_1Bit_bottomLayer2048.png", AssetType.IMAGE);
		className.set ("assets/images/accuPopup_1Bit_gate1_out.png", __ASSET__assets_images_accupopup_1bit_gate1_out_png);
		type.set ("assets/images/accuPopup_1Bit_gate1_out.png", AssetType.IMAGE);
		className.set ("assets/images/accuPopup_1Bit_gate2_out.png", __ASSET__assets_images_accupopup_1bit_gate2_out_png);
		type.set ("assets/images/accuPopup_1Bit_gate2_out.png", AssetType.IMAGE);
		className.set ("assets/images/accuPopup_1Bit_gate3_out.png", __ASSET__assets_images_accupopup_1bit_gate3_out_png);
		type.set ("assets/images/accuPopup_1Bit_gate3_out.png", AssetType.IMAGE);
		className.set ("assets/images/accuPopup_1Bit_gate4_out.png", __ASSET__assets_images_accupopup_1bit_gate4_out_png);
		type.set ("assets/images/accuPopup_1Bit_gate4_out.png", AssetType.IMAGE);
		className.set ("assets/images/accuPopup_1Bit_input.png", __ASSET__assets_images_accupopup_1bit_input_png);
		type.set ("assets/images/accuPopup_1Bit_input.png", AssetType.IMAGE);
		className.set ("assets/images/accuPopup_1Bit_set.png", __ASSET__assets_images_accupopup_1bit_set_png);
		type.set ("assets/images/accuPopup_1Bit_set.png", AssetType.IMAGE);
		className.set ("assets/images/accuPopup_bottomLayer2048.png", __ASSET__assets_images_accupopup_bottomlayer2048_png);
		type.set ("assets/images/accuPopup_bottomLayer2048.png", AssetType.IMAGE);
		className.set ("assets/images/accuPopup_enabler_enable.png", __ASSET__assets_images_accupopup_enabler_enable_png);
		type.set ("assets/images/accuPopup_enabler_enable.png", AssetType.IMAGE);
		className.set ("assets/images/accuPopup_enabler_out_0.png", __ASSET__assets_images_accupopup_enabler_out_0_png);
		type.set ("assets/images/accuPopup_enabler_out_0.png", AssetType.IMAGE);
		className.set ("assets/images/accuPopup_enabler_out_1.png", __ASSET__assets_images_accupopup_enabler_out_1_png);
		type.set ("assets/images/accuPopup_enabler_out_1.png", AssetType.IMAGE);
		className.set ("assets/images/accuPopup_enabler_out_2.png", __ASSET__assets_images_accupopup_enabler_out_2_png);
		type.set ("assets/images/accuPopup_enabler_out_2.png", AssetType.IMAGE);
		className.set ("assets/images/accuPopup_enabler_out_3.png", __ASSET__assets_images_accupopup_enabler_out_3_png);
		type.set ("assets/images/accuPopup_enabler_out_3.png", AssetType.IMAGE);
		className.set ("assets/images/accuPopup_memory_in_0.png", __ASSET__assets_images_accupopup_memory_in_0_png);
		type.set ("assets/images/accuPopup_memory_in_0.png", AssetType.IMAGE);
		className.set ("assets/images/accuPopup_memory_in_1.png", __ASSET__assets_images_accupopup_memory_in_1_png);
		type.set ("assets/images/accuPopup_memory_in_1.png", AssetType.IMAGE);
		className.set ("assets/images/accuPopup_memory_in_2.png", __ASSET__assets_images_accupopup_memory_in_2_png);
		type.set ("assets/images/accuPopup_memory_in_2.png", AssetType.IMAGE);
		className.set ("assets/images/accuPopup_memory_in_3.png", __ASSET__assets_images_accupopup_memory_in_3_png);
		type.set ("assets/images/accuPopup_memory_in_3.png", AssetType.IMAGE);
		className.set ("assets/images/accuPopup_memory_out_0.png", __ASSET__assets_images_accupopup_memory_out_0_png);
		type.set ("assets/images/accuPopup_memory_out_0.png", AssetType.IMAGE);
		className.set ("assets/images/accuPopup_memory_out_1.png", __ASSET__assets_images_accupopup_memory_out_1_png);
		type.set ("assets/images/accuPopup_memory_out_1.png", AssetType.IMAGE);
		className.set ("assets/images/accuPopup_memory_out_2.png", __ASSET__assets_images_accupopup_memory_out_2_png);
		type.set ("assets/images/accuPopup_memory_out_2.png", AssetType.IMAGE);
		className.set ("assets/images/accuPopup_memory_out_3.png", __ASSET__assets_images_accupopup_memory_out_3_png);
		type.set ("assets/images/accuPopup_memory_out_3.png", AssetType.IMAGE);
		className.set ("assets/images/accuPopup_memory_set.png", __ASSET__assets_images_accupopup_memory_set_png);
		type.set ("assets/images/accuPopup_memory_set.png", AssetType.IMAGE);
		className.set ("assets/images/ALU-out-0.png", __ASSET__assets_images_alu_out_0_png);
		type.set ("assets/images/ALU-out-0.png", AssetType.IMAGE);
		className.set ("assets/images/ALU-out-1.png", __ASSET__assets_images_alu_out_1_png);
		type.set ("assets/images/ALU-out-1.png", AssetType.IMAGE);
		className.set ("assets/images/ALU-out-2.png", __ASSET__assets_images_alu_out_2_png);
		type.set ("assets/images/ALU-out-2.png", AssetType.IMAGE);
		className.set ("assets/images/ALU-out-3.png", __ASSET__assets_images_alu_out_3_png);
		type.set ("assets/images/ALU-out-3.png", AssetType.IMAGE);
		className.set ("assets/images/ALU-out-equal.png", __ASSET__assets_images_alu_out_equal_png);
		type.set ("assets/images/ALU-out-equal.png", AssetType.IMAGE);
		className.set ("assets/images/ALU-out.png", __ASSET__assets_images_alu_out_png);
		type.set ("assets/images/ALU-out.png", AssetType.IMAGE);
		className.set ("assets/images/architecture.png", __ASSET__assets_images_architecture_png);
		type.set ("assets/images/architecture.png", AssetType.IMAGE);
		className.set ("assets/images/bottom_layer.png", __ASSET__assets_images_bottom_layer_png);
		type.set ("assets/images/bottom_layer.png", AssetType.IMAGE);
		className.set ("assets/images/busline0.png", __ASSET__assets_images_busline0_png);
		type.set ("assets/images/busline0.png", AssetType.IMAGE);
		className.set ("assets/images/busline1.png", __ASSET__assets_images_busline1_png);
		type.set ("assets/images/busline1.png", AssetType.IMAGE);
		className.set ("assets/images/busline2.png", __ASSET__assets_images_busline2_png);
		type.set ("assets/images/busline2.png", AssetType.IMAGE);
		className.set ("assets/images/busline3.png", __ASSET__assets_images_busline3_png);
		type.set ("assets/images/busline3.png", AssetType.IMAGE);
		className.set ("assets/images/busline4.png", __ASSET__assets_images_busline4_png);
		type.set ("assets/images/busline4.png", AssetType.IMAGE);
		className.set ("assets/images/busline5.png", __ASSET__assets_images_busline5_png);
		type.set ("assets/images/busline5.png", AssetType.IMAGE);
		className.set ("assets/images/busline6.png", __ASSET__assets_images_busline6_png);
		type.set ("assets/images/busline6.png", AssetType.IMAGE);
		className.set ("assets/images/busline7.png", __ASSET__assets_images_busline7_png);
		type.set ("assets/images/busline7.png", AssetType.IMAGE);
		className.set ("assets/images/Clock.png", __ASSET__assets_images_clock_png);
		type.set ("assets/images/Clock.png", AssetType.IMAGE);
		className.set ("assets/images/clockGlow.png", __ASSET__assets_images_clockglow_png);
		type.set ("assets/images/clockGlow.png", AssetType.IMAGE);
		className.set ("assets/images/comp_static_lines.png", __ASSET__assets_images_comp_static_lines_png);
		type.set ("assets/images/comp_static_lines.png", AssetType.IMAGE);
		className.set ("assets/images/coverAlu2048.png", __ASSET__assets_images_coveralu2048_png);
		type.set ("assets/images/coverAlu2048.png", AssetType.IMAGE);
		className.set ("assets/images/coverDecoder2048.png", __ASSET__assets_images_coverdecoder2048_png);
		type.set ("assets/images/coverDecoder2048.png", AssetType.IMAGE);
		className.set ("assets/images/coverMultiplexer2048.png", __ASSET__assets_images_covermultiplexer2048_png);
		type.set ("assets/images/coverMultiplexer2048.png", AssetType.IMAGE);
		className.set ("assets/images/Decoder-out-1.png", __ASSET__assets_images_decoder_out_1_png);
		type.set ("assets/images/Decoder-out-1.png", AssetType.IMAGE);
		className.set ("assets/images/Decoder-out-2.png", __ASSET__assets_images_decoder_out_2_png);
		type.set ("assets/images/Decoder-out-2.png", AssetType.IMAGE);
		className.set ("assets/images/Decoder-out-3.png", __ASSET__assets_images_decoder_out_3_png);
		type.set ("assets/images/Decoder-out-3.png", AssetType.IMAGE);
		className.set ("assets/images/EditRomPopup2048.png", __ASSET__assets_images_editrompopup2048_png);
		type.set ("assets/images/EditRomPopup2048.png", AssetType.IMAGE);
		className.set ("assets/images/Enabler1-out-0.png", __ASSET__assets_images_enabler1_out_0_png);
		type.set ("assets/images/Enabler1-out-0.png", AssetType.IMAGE);
		className.set ("assets/images/Enabler1-out-1.png", __ASSET__assets_images_enabler1_out_1_png);
		type.set ("assets/images/Enabler1-out-1.png", AssetType.IMAGE);
		className.set ("assets/images/Enabler1-out-2.png", __ASSET__assets_images_enabler1_out_2_png);
		type.set ("assets/images/Enabler1-out-2.png", AssetType.IMAGE);
		className.set ("assets/images/Enabler1-out-3.png", __ASSET__assets_images_enabler1_out_3_png);
		type.set ("assets/images/Enabler1-out-3.png", AssetType.IMAGE);
		className.set ("assets/images/Enabler2-out-0.png", __ASSET__assets_images_enabler2_out_0_png);
		type.set ("assets/images/Enabler2-out-0.png", AssetType.IMAGE);
		className.set ("assets/images/Enabler2-out-1.png", __ASSET__assets_images_enabler2_out_1_png);
		type.set ("assets/images/Enabler2-out-1.png", AssetType.IMAGE);
		className.set ("assets/images/Enabler2-out-2.png", __ASSET__assets_images_enabler2_out_2_png);
		type.set ("assets/images/Enabler2-out-2.png", AssetType.IMAGE);
		className.set ("assets/images/Enabler2-out-3.png", __ASSET__assets_images_enabler2_out_3_png);
		type.set ("assets/images/Enabler2-out-3.png", AssetType.IMAGE);
		className.set ("assets/images/enterInstruction_BG.png", __ASSET__assets_images_enterinstruction_bg_png);
		type.set ("assets/images/enterInstruction_BG.png", AssetType.IMAGE);
		className.set ("assets/images/enterInstruction_line0.png", __ASSET__assets_images_enterinstruction_line0_png);
		type.set ("assets/images/enterInstruction_line0.png", AssetType.IMAGE);
		className.set ("assets/images/enterInstruction_line1.png", __ASSET__assets_images_enterinstruction_line1_png);
		type.set ("assets/images/enterInstruction_line1.png", AssetType.IMAGE);
		className.set ("assets/images/enterInstruction_line2.png", __ASSET__assets_images_enterinstruction_line2_png);
		type.set ("assets/images/enterInstruction_line2.png", AssetType.IMAGE);
		className.set ("assets/images/enterInstruction_line3.png", __ASSET__assets_images_enterinstruction_line3_png);
		type.set ("assets/images/enterInstruction_line3.png", AssetType.IMAGE);
		className.set ("assets/images/enterInstruction_line4.png", __ASSET__assets_images_enterinstruction_line4_png);
		type.set ("assets/images/enterInstruction_line4.png", AssetType.IMAGE);
		className.set ("assets/images/enterInstruction_line5.png", __ASSET__assets_images_enterinstruction_line5_png);
		type.set ("assets/images/enterInstruction_line5.png", AssetType.IMAGE);
		className.set ("assets/images/enterInstruction_line6.png", __ASSET__assets_images_enterinstruction_line6_png);
		type.set ("assets/images/enterInstruction_line6.png", AssetType.IMAGE);
		className.set ("assets/images/enterInstruction_line7.png", __ASSET__assets_images_enterinstruction_line7_png);
		type.set ("assets/images/enterInstruction_line7.png", AssetType.IMAGE);
		className.set ("assets/images/FlowArrows2048.png", __ASSET__assets_images_flowarrows2048_png);
		type.set ("assets/images/FlowArrows2048.png", AssetType.IMAGE);
		className.set ("assets/images/G1-out-0.png", __ASSET__assets_images_g1_out_0_png);
		type.set ("assets/images/G1-out-0.png", AssetType.IMAGE);
		className.set ("assets/images/G1-out-1.png", __ASSET__assets_images_g1_out_1_png);
		type.set ("assets/images/G1-out-1.png", AssetType.IMAGE);
		className.set ("assets/images/G1-out-2.png", __ASSET__assets_images_g1_out_2_png);
		type.set ("assets/images/G1-out-2.png", AssetType.IMAGE);
		className.set ("assets/images/G1-out-3.png", __ASSET__assets_images_g1_out_3_png);
		type.set ("assets/images/G1-out-3.png", AssetType.IMAGE);
		className.set ("assets/images/G2-out.png", __ASSET__assets_images_g2_out_png);
		type.set ("assets/images/G2-out.png", AssetType.IMAGE);
		className.set ("assets/images/G3-out.png", __ASSET__assets_images_g3_out_png);
		type.set ("assets/images/G3-out.png", AssetType.IMAGE);
		className.set ("assets/images/G4-out.png", __ASSET__assets_images_g4_out_png);
		type.set ("assets/images/G4-out.png", AssetType.IMAGE);
		className.set ("assets/images/G5-out.png", __ASSET__assets_images_g5_out_png);
		type.set ("assets/images/G5-out.png", AssetType.IMAGE);
		className.set ("assets/images/G6-out.png", __ASSET__assets_images_g6_out_png);
		type.set ("assets/images/G6-out.png", AssetType.IMAGE);
		className.set ("assets/images/G7-out.png", __ASSET__assets_images_g7_out_png);
		type.set ("assets/images/G7-out.png", AssetType.IMAGE);
		className.set ("assets/images/G8-out.png", __ASSET__assets_images_g8_out_png);
		type.set ("assets/images/G8-out.png", AssetType.IMAGE);
		className.set ("assets/images/G9-out.png", __ASSET__assets_images_g9_out_png);
		type.set ("assets/images/G9-out.png", AssetType.IMAGE);
		className.set ("assets/images/INP-out.png", __ASSET__assets_images_inp_out_png);
		type.set ("assets/images/INP-out.png", AssetType.IMAGE);
		className.set ("assets/images/instructionTable.png", __ASSET__assets_images_instructiontable_png);
		type.set ("assets/images/instructionTable.png", AssetType.IMAGE);
		className.set ("assets/images/instructionTable2048.png", __ASSET__assets_images_instructiontable2048_png);
		type.set ("assets/images/instructionTable2048.png", AssetType.IMAGE);
		className.set ("assets/images/JE-out.png", __ASSET__assets_images_je_out_png);
		type.set ("assets/images/JE-out.png", AssetType.IMAGE);
		className.set ("assets/images/JMP-out.png", __ASSET__assets_images_jmp_out_png);
		type.set ("assets/images/JMP-out.png", AssetType.IMAGE);
		className.set ("assets/images/JNE-out.png", __ASSET__assets_images_jne_out_png);
		type.set ("assets/images/JNE-out.png", AssetType.IMAGE);
		className.set ("assets/images/Key-out-0.png", __ASSET__assets_images_key_out_0_png);
		type.set ("assets/images/Key-out-0.png", AssetType.IMAGE);
		className.set ("assets/images/Key-out-1.png", __ASSET__assets_images_key_out_1_png);
		type.set ("assets/images/Key-out-1.png", AssetType.IMAGE);
		className.set ("assets/images/Key-out-2.png", __ASSET__assets_images_key_out_2_png);
		type.set ("assets/images/Key-out-2.png", AssetType.IMAGE);
		className.set ("assets/images/Key-out-3.png", __ASSET__assets_images_key_out_3_png);
		type.set ("assets/images/Key-out-3.png", AssetType.IMAGE);
		className.set ("assets/images/LDA-out.png", __ASSET__assets_images_lda_out_png);
		type.set ("assets/images/LDA-out.png", AssetType.IMAGE);
		className.set ("assets/images/LDI-out.png", __ASSET__assets_images_ldi_out_png);
		type.set ("assets/images/LDI-out.png", AssetType.IMAGE);
		className.set ("assets/images/MarkUnits.png", __ASSET__assets_images_markunits_png);
		type.set ("assets/images/MarkUnits.png", AssetType.IMAGE);
		className.set ("assets/images/MarkUnits2048.png", __ASSET__assets_images_markunits2048_png);
		type.set ("assets/images/MarkUnits2048.png", AssetType.IMAGE);
		className.set ("assets/images/MOV-out.png", __ASSET__assets_images_mov_out_png);
		type.set ("assets/images/MOV-out.png", AssetType.IMAGE);
		className.set ("assets/images/MUX-out-0.png", __ASSET__assets_images_mux_out_0_png);
		type.set ("assets/images/MUX-out-0.png", AssetType.IMAGE);
		className.set ("assets/images/MUX-out-1.png", __ASSET__assets_images_mux_out_1_png);
		type.set ("assets/images/MUX-out-1.png", AssetType.IMAGE);
		className.set ("assets/images/MUX-out-2.png", __ASSET__assets_images_mux_out_2_png);
		type.set ("assets/images/MUX-out-2.png", AssetType.IMAGE);
		className.set ("assets/images/MUX-out-3.png", __ASSET__assets_images_mux_out_3_png);
		type.set ("assets/images/MUX-out-3.png", AssetType.IMAGE);
		className.set ("assets/images/OUT-out.png", __ASSET__assets_images_out_out_png);
		type.set ("assets/images/OUT-out.png", AssetType.IMAGE);
		className.set ("assets/images/pc-out-0.png", __ASSET__assets_images_pc_out_0_png);
		type.set ("assets/images/pc-out-0.png", AssetType.IMAGE);
		className.set ("assets/images/pc-out-1.png", __ASSET__assets_images_pc_out_1_png);
		type.set ("assets/images/pc-out-1.png", AssetType.IMAGE);
		className.set ("assets/images/pc-out-2.png", __ASSET__assets_images_pc_out_2_png);
		type.set ("assets/images/pc-out-2.png", AssetType.IMAGE);
		className.set ("assets/images/pc-out-3.png", __ASSET__assets_images_pc_out_3_png);
		type.set ("assets/images/pc-out-3.png", AssetType.IMAGE);
		className.set ("assets/images/PowerOffCover.png", __ASSET__assets_images_poweroffcover_png);
		type.set ("assets/images/PowerOffCover.png", AssetType.IMAGE);
		className.set ("assets/images/PowerOffCover2048.png", __ASSET__assets_images_poweroffcover2048_png);
		type.set ("assets/images/PowerOffCover2048.png", AssetType.IMAGE);
		className.set ("assets/images/R1-out-0.png", __ASSET__assets_images_r1_out_0_png);
		type.set ("assets/images/R1-out-0.png", AssetType.IMAGE);
		className.set ("assets/images/R1-out-1.png", __ASSET__assets_images_r1_out_1_png);
		type.set ("assets/images/R1-out-1.png", AssetType.IMAGE);
		className.set ("assets/images/R1-out-2.png", __ASSET__assets_images_r1_out_2_png);
		type.set ("assets/images/R1-out-2.png", AssetType.IMAGE);
		className.set ("assets/images/R1-out-3.png", __ASSET__assets_images_r1_out_3_png);
		type.set ("assets/images/R1-out-3.png", AssetType.IMAGE);
		className.set ("assets/images/R2-out-0.png", __ASSET__assets_images_r2_out_0_png);
		type.set ("assets/images/R2-out-0.png", AssetType.IMAGE);
		className.set ("assets/images/R2-out-1.png", __ASSET__assets_images_r2_out_1_png);
		type.set ("assets/images/R2-out-1.png", AssetType.IMAGE);
		className.set ("assets/images/R2-out-2.png", __ASSET__assets_images_r2_out_2_png);
		type.set ("assets/images/R2-out-2.png", AssetType.IMAGE);
		className.set ("assets/images/R2-out-3.png", __ASSET__assets_images_r2_out_3_png);
		type.set ("assets/images/R2-out-3.png", AssetType.IMAGE);
		className.set ("assets/images/RAM-out-0.png", __ASSET__assets_images_ram_out_0_png);
		type.set ("assets/images/RAM-out-0.png", AssetType.IMAGE);
		className.set ("assets/images/RAM-out-1.png", __ASSET__assets_images_ram_out_1_png);
		type.set ("assets/images/RAM-out-1.png", AssetType.IMAGE);
		className.set ("assets/images/RAM-out-2.png", __ASSET__assets_images_ram_out_2_png);
		type.set ("assets/images/RAM-out-2.png", AssetType.IMAGE);
		className.set ("assets/images/RAM-out-3.png", __ASSET__assets_images_ram_out_3_png);
		type.set ("assets/images/RAM-out-3.png", AssetType.IMAGE);
		className.set ("assets/images/SDA-out.png", __ASSET__assets_images_sda_out_png);
		type.set ("assets/images/SDA-out.png", AssetType.IMAGE);
		className.set ("assets/images/tfFrame.png", __ASSET__assets_images_tfframe_png);
		type.set ("assets/images/tfFrame.png", AssetType.IMAGE);
		className.set ("assets/images/top_layer.png", __ASSET__assets_images_top_layer_png);
		type.set ("assets/images/top_layer.png", AssetType.IMAGE);
		className.set ("assets/images/top_layer2048.png", __ASSET__assets_images_top_layer2048_png);
		type.set ("assets/images/top_layer2048.png", AssetType.IMAGE);
		className.set ("assets/images/top_layer_colored.png", __ASSET__assets_images_top_layer_colored_png);
		type.set ("assets/images/top_layer_colored.png", AssetType.IMAGE);
		className.set ("assets/tbsimlogo.svg", __ASSET__assets_tbsimlogo_svg);
		type.set ("assets/tbsimlogo.svg", AssetType.TEXT);
		className.set ("assets/tbsimlogo2.svg", __ASSET__assets_tbsimlogo2_svg);
		type.set ("assets/tbsimlogo2.svg", AssetType.TEXT);
		className.set ("assets/tbsimlogo3.svg", __ASSET__assets_tbsimlogo3_svg);
		type.set ("assets/tbsimlogo3.svg", AssetType.TEXT);
		className.set ("fonts/Consolas Bold.eot", __ASSET__fonts_consolas_bold_eot);
		type.set ("fonts/Consolas Bold.eot", AssetType.BINARY);
		className.set ("fonts/Consolas Bold.svg", __ASSET__fonts_consolas_bold_svg);
		type.set ("fonts/Consolas Bold.svg", AssetType.TEXT);
		className.set ("fonts/Consolas Bold.ttf", __ASSET__fonts_consolas_bold_ttf);
		type.set ("fonts/Consolas Bold.ttf", AssetType.FONT);
		className.set ("fonts/Consolas Bold.woff", __ASSET__fonts_consolas_bold_woff);
		type.set ("fonts/Consolas Bold.woff", AssetType.BINARY);
		className.set ("fonts/MyriadPro-Bold.eot", __ASSET__fonts_myriadpro_bold_eot);
		type.set ("fonts/MyriadPro-Bold.eot", AssetType.BINARY);
		className.set ("fonts/MyriadPro-Bold.otf", __ASSET__fonts_myriadpro_bold_otf);
		type.set ("fonts/MyriadPro-Bold.otf", AssetType.FONT);
		className.set ("fonts/MyriadPro-Bold.woff", __ASSET__fonts_myriadpro_bold_woff);
		type.set ("fonts/MyriadPro-Bold.woff", AssetType.BINARY);
		className.set ("fonts/MyriadPro-Regular.eot", __ASSET__fonts_myriadpro_regular_eot);
		type.set ("fonts/MyriadPro-Regular.eot", AssetType.BINARY);
		className.set ("fonts/MyriadPro-Regular.otf", __ASSET__fonts_myriadpro_regular_otf);
		type.set ("fonts/MyriadPro-Regular.otf", AssetType.FONT);
		className.set ("fonts/MyriadPro-Regular.woff", __ASSET__fonts_myriadpro_regular_woff);
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
		className.set (id, __ASSET__assets_fonts_consolas_bold_ttf);
		
		type.set (id, AssetType.FONT);
		id = "assets/fonts/Consolas Bold.woff";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "assets/fonts/MyriadPro-Bold.eot";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "assets/fonts/MyriadPro-Bold.otf";
		className.set (id, __ASSET__assets_fonts_myriadpro_bold_otf);
		
		type.set (id, AssetType.FONT);
		id = "assets/fonts/MyriadPro-Bold.woff";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "assets/fonts/MyriadPro-Regular.eot";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "assets/fonts/MyriadPro-Regular.otf";
		className.set (id, __ASSET__assets_fonts_myriadpro_regular_otf);
		
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
		className.set (id, __ASSET__fonts_consolas_bold_ttf);
		
		type.set (id, AssetType.FONT);
		id = "fonts/Consolas Bold.woff";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "fonts/MyriadPro-Bold.eot";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "fonts/MyriadPro-Bold.otf";
		className.set (id, __ASSET__fonts_myriadpro_bold_otf);
		
		type.set (id, AssetType.FONT);
		id = "fonts/MyriadPro-Bold.woff";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "fonts/MyriadPro-Regular.eot";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "fonts/MyriadPro-Regular.otf";
		className.set (id, __ASSET__fonts_myriadpro_regular_otf);
		
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
		
		className.set ("assets/fonts/Consolas Bold.eot", __ASSET__assets_fonts_consolas_bold_eot);
		type.set ("assets/fonts/Consolas Bold.eot", AssetType.BINARY);
		
		className.set ("assets/fonts/Consolas Bold.svg", __ASSET__assets_fonts_consolas_bold_svg);
		type.set ("assets/fonts/Consolas Bold.svg", AssetType.TEXT);
		
		className.set ("assets/fonts/Consolas Bold.ttf", __ASSET__assets_fonts_consolas_bold_ttf);
		type.set ("assets/fonts/Consolas Bold.ttf", AssetType.FONT);
		
		className.set ("assets/fonts/Consolas Bold.woff", __ASSET__assets_fonts_consolas_bold_woff);
		type.set ("assets/fonts/Consolas Bold.woff", AssetType.BINARY);
		
		className.set ("assets/fonts/MyriadPro-Bold.eot", __ASSET__assets_fonts_myriadpro_bold_eot);
		type.set ("assets/fonts/MyriadPro-Bold.eot", AssetType.BINARY);
		
		className.set ("assets/fonts/MyriadPro-Bold.otf", __ASSET__assets_fonts_myriadpro_bold_otf);
		type.set ("assets/fonts/MyriadPro-Bold.otf", AssetType.FONT);
		
		className.set ("assets/fonts/MyriadPro-Bold.woff", __ASSET__assets_fonts_myriadpro_bold_woff);
		type.set ("assets/fonts/MyriadPro-Bold.woff", AssetType.BINARY);
		
		className.set ("assets/fonts/MyriadPro-Regular.eot", __ASSET__assets_fonts_myriadpro_regular_eot);
		type.set ("assets/fonts/MyriadPro-Regular.eot", AssetType.BINARY);
		
		className.set ("assets/fonts/MyriadPro-Regular.otf", __ASSET__assets_fonts_myriadpro_regular_otf);
		type.set ("assets/fonts/MyriadPro-Regular.otf", AssetType.FONT);
		
		className.set ("assets/fonts/MyriadPro-Regular.woff", __ASSET__assets_fonts_myriadpro_regular_woff);
		type.set ("assets/fonts/MyriadPro-Regular.woff", AssetType.BINARY);
		
		className.set ("assets/images/Accu-out-0.png", __ASSET__assets_images_accu_out_0_png);
		type.set ("assets/images/Accu-out-0.png", AssetType.IMAGE);
		
		className.set ("assets/images/Accu-out-1.png", __ASSET__assets_images_accu_out_1_png);
		type.set ("assets/images/Accu-out-1.png", AssetType.IMAGE);
		
		className.set ("assets/images/Accu-out-2.png", __ASSET__assets_images_accu_out_2_png);
		type.set ("assets/images/Accu-out-2.png", AssetType.IMAGE);
		
		className.set ("assets/images/Accu-out-3.png", __ASSET__assets_images_accu_out_3_png);
		type.set ("assets/images/Accu-out-3.png", AssetType.IMAGE);
		
		className.set ("assets/images/accuPopup_1Bit_bottomLayer2048.png", __ASSET__assets_images_accupopup_1bit_bottomlayer2048_png);
		type.set ("assets/images/accuPopup_1Bit_bottomLayer2048.png", AssetType.IMAGE);
		
		className.set ("assets/images/accuPopup_1Bit_gate1_out.png", __ASSET__assets_images_accupopup_1bit_gate1_out_png);
		type.set ("assets/images/accuPopup_1Bit_gate1_out.png", AssetType.IMAGE);
		
		className.set ("assets/images/accuPopup_1Bit_gate2_out.png", __ASSET__assets_images_accupopup_1bit_gate2_out_png);
		type.set ("assets/images/accuPopup_1Bit_gate2_out.png", AssetType.IMAGE);
		
		className.set ("assets/images/accuPopup_1Bit_gate3_out.png", __ASSET__assets_images_accupopup_1bit_gate3_out_png);
		type.set ("assets/images/accuPopup_1Bit_gate3_out.png", AssetType.IMAGE);
		
		className.set ("assets/images/accuPopup_1Bit_gate4_out.png", __ASSET__assets_images_accupopup_1bit_gate4_out_png);
		type.set ("assets/images/accuPopup_1Bit_gate4_out.png", AssetType.IMAGE);
		
		className.set ("assets/images/accuPopup_1Bit_input.png", __ASSET__assets_images_accupopup_1bit_input_png);
		type.set ("assets/images/accuPopup_1Bit_input.png", AssetType.IMAGE);
		
		className.set ("assets/images/accuPopup_1Bit_set.png", __ASSET__assets_images_accupopup_1bit_set_png);
		type.set ("assets/images/accuPopup_1Bit_set.png", AssetType.IMAGE);
		
		className.set ("assets/images/accuPopup_bottomLayer2048.png", __ASSET__assets_images_accupopup_bottomlayer2048_png);
		type.set ("assets/images/accuPopup_bottomLayer2048.png", AssetType.IMAGE);
		
		className.set ("assets/images/accuPopup_enabler_enable.png", __ASSET__assets_images_accupopup_enabler_enable_png);
		type.set ("assets/images/accuPopup_enabler_enable.png", AssetType.IMAGE);
		
		className.set ("assets/images/accuPopup_enabler_out_0.png", __ASSET__assets_images_accupopup_enabler_out_0_png);
		type.set ("assets/images/accuPopup_enabler_out_0.png", AssetType.IMAGE);
		
		className.set ("assets/images/accuPopup_enabler_out_1.png", __ASSET__assets_images_accupopup_enabler_out_1_png);
		type.set ("assets/images/accuPopup_enabler_out_1.png", AssetType.IMAGE);
		
		className.set ("assets/images/accuPopup_enabler_out_2.png", __ASSET__assets_images_accupopup_enabler_out_2_png);
		type.set ("assets/images/accuPopup_enabler_out_2.png", AssetType.IMAGE);
		
		className.set ("assets/images/accuPopup_enabler_out_3.png", __ASSET__assets_images_accupopup_enabler_out_3_png);
		type.set ("assets/images/accuPopup_enabler_out_3.png", AssetType.IMAGE);
		
		className.set ("assets/images/accuPopup_memory_in_0.png", __ASSET__assets_images_accupopup_memory_in_0_png);
		type.set ("assets/images/accuPopup_memory_in_0.png", AssetType.IMAGE);
		
		className.set ("assets/images/accuPopup_memory_in_1.png", __ASSET__assets_images_accupopup_memory_in_1_png);
		type.set ("assets/images/accuPopup_memory_in_1.png", AssetType.IMAGE);
		
		className.set ("assets/images/accuPopup_memory_in_2.png", __ASSET__assets_images_accupopup_memory_in_2_png);
		type.set ("assets/images/accuPopup_memory_in_2.png", AssetType.IMAGE);
		
		className.set ("assets/images/accuPopup_memory_in_3.png", __ASSET__assets_images_accupopup_memory_in_3_png);
		type.set ("assets/images/accuPopup_memory_in_3.png", AssetType.IMAGE);
		
		className.set ("assets/images/accuPopup_memory_out_0.png", __ASSET__assets_images_accupopup_memory_out_0_png);
		type.set ("assets/images/accuPopup_memory_out_0.png", AssetType.IMAGE);
		
		className.set ("assets/images/accuPopup_memory_out_1.png", __ASSET__assets_images_accupopup_memory_out_1_png);
		type.set ("assets/images/accuPopup_memory_out_1.png", AssetType.IMAGE);
		
		className.set ("assets/images/accuPopup_memory_out_2.png", __ASSET__assets_images_accupopup_memory_out_2_png);
		type.set ("assets/images/accuPopup_memory_out_2.png", AssetType.IMAGE);
		
		className.set ("assets/images/accuPopup_memory_out_3.png", __ASSET__assets_images_accupopup_memory_out_3_png);
		type.set ("assets/images/accuPopup_memory_out_3.png", AssetType.IMAGE);
		
		className.set ("assets/images/accuPopup_memory_set.png", __ASSET__assets_images_accupopup_memory_set_png);
		type.set ("assets/images/accuPopup_memory_set.png", AssetType.IMAGE);
		
		className.set ("assets/images/ALU-out-0.png", __ASSET__assets_images_alu_out_0_png);
		type.set ("assets/images/ALU-out-0.png", AssetType.IMAGE);
		
		className.set ("assets/images/ALU-out-1.png", __ASSET__assets_images_alu_out_1_png);
		type.set ("assets/images/ALU-out-1.png", AssetType.IMAGE);
		
		className.set ("assets/images/ALU-out-2.png", __ASSET__assets_images_alu_out_2_png);
		type.set ("assets/images/ALU-out-2.png", AssetType.IMAGE);
		
		className.set ("assets/images/ALU-out-3.png", __ASSET__assets_images_alu_out_3_png);
		type.set ("assets/images/ALU-out-3.png", AssetType.IMAGE);
		
		className.set ("assets/images/ALU-out-equal.png", __ASSET__assets_images_alu_out_equal_png);
		type.set ("assets/images/ALU-out-equal.png", AssetType.IMAGE);
		
		className.set ("assets/images/ALU-out.png", __ASSET__assets_images_alu_out_png);
		type.set ("assets/images/ALU-out.png", AssetType.IMAGE);
		
		className.set ("assets/images/architecture.png", __ASSET__assets_images_architecture_png);
		type.set ("assets/images/architecture.png", AssetType.IMAGE);
		
		className.set ("assets/images/bottom_layer.png", __ASSET__assets_images_bottom_layer_png);
		type.set ("assets/images/bottom_layer.png", AssetType.IMAGE);
		
		className.set ("assets/images/busline0.png", __ASSET__assets_images_busline0_png);
		type.set ("assets/images/busline0.png", AssetType.IMAGE);
		
		className.set ("assets/images/busline1.png", __ASSET__assets_images_busline1_png);
		type.set ("assets/images/busline1.png", AssetType.IMAGE);
		
		className.set ("assets/images/busline2.png", __ASSET__assets_images_busline2_png);
		type.set ("assets/images/busline2.png", AssetType.IMAGE);
		
		className.set ("assets/images/busline3.png", __ASSET__assets_images_busline3_png);
		type.set ("assets/images/busline3.png", AssetType.IMAGE);
		
		className.set ("assets/images/busline4.png", __ASSET__assets_images_busline4_png);
		type.set ("assets/images/busline4.png", AssetType.IMAGE);
		
		className.set ("assets/images/busline5.png", __ASSET__assets_images_busline5_png);
		type.set ("assets/images/busline5.png", AssetType.IMAGE);
		
		className.set ("assets/images/busline6.png", __ASSET__assets_images_busline6_png);
		type.set ("assets/images/busline6.png", AssetType.IMAGE);
		
		className.set ("assets/images/busline7.png", __ASSET__assets_images_busline7_png);
		type.set ("assets/images/busline7.png", AssetType.IMAGE);
		
		className.set ("assets/images/Clock.png", __ASSET__assets_images_clock_png);
		type.set ("assets/images/Clock.png", AssetType.IMAGE);
		
		className.set ("assets/images/clockGlow.png", __ASSET__assets_images_clockglow_png);
		type.set ("assets/images/clockGlow.png", AssetType.IMAGE);
		
		className.set ("assets/images/comp_static_lines.png", __ASSET__assets_images_comp_static_lines_png);
		type.set ("assets/images/comp_static_lines.png", AssetType.IMAGE);
		
		className.set ("assets/images/coverAlu2048.png", __ASSET__assets_images_coveralu2048_png);
		type.set ("assets/images/coverAlu2048.png", AssetType.IMAGE);
		
		className.set ("assets/images/coverDecoder2048.png", __ASSET__assets_images_coverdecoder2048_png);
		type.set ("assets/images/coverDecoder2048.png", AssetType.IMAGE);
		
		className.set ("assets/images/coverMultiplexer2048.png", __ASSET__assets_images_covermultiplexer2048_png);
		type.set ("assets/images/coverMultiplexer2048.png", AssetType.IMAGE);
		
		className.set ("assets/images/Decoder-out-1.png", __ASSET__assets_images_decoder_out_1_png);
		type.set ("assets/images/Decoder-out-1.png", AssetType.IMAGE);
		
		className.set ("assets/images/Decoder-out-2.png", __ASSET__assets_images_decoder_out_2_png);
		type.set ("assets/images/Decoder-out-2.png", AssetType.IMAGE);
		
		className.set ("assets/images/Decoder-out-3.png", __ASSET__assets_images_decoder_out_3_png);
		type.set ("assets/images/Decoder-out-3.png", AssetType.IMAGE);
		
		className.set ("assets/images/EditRomPopup2048.png", __ASSET__assets_images_editrompopup2048_png);
		type.set ("assets/images/EditRomPopup2048.png", AssetType.IMAGE);
		
		className.set ("assets/images/Enabler1-out-0.png", __ASSET__assets_images_enabler1_out_0_png);
		type.set ("assets/images/Enabler1-out-0.png", AssetType.IMAGE);
		
		className.set ("assets/images/Enabler1-out-1.png", __ASSET__assets_images_enabler1_out_1_png);
		type.set ("assets/images/Enabler1-out-1.png", AssetType.IMAGE);
		
		className.set ("assets/images/Enabler1-out-2.png", __ASSET__assets_images_enabler1_out_2_png);
		type.set ("assets/images/Enabler1-out-2.png", AssetType.IMAGE);
		
		className.set ("assets/images/Enabler1-out-3.png", __ASSET__assets_images_enabler1_out_3_png);
		type.set ("assets/images/Enabler1-out-3.png", AssetType.IMAGE);
		
		className.set ("assets/images/Enabler2-out-0.png", __ASSET__assets_images_enabler2_out_0_png);
		type.set ("assets/images/Enabler2-out-0.png", AssetType.IMAGE);
		
		className.set ("assets/images/Enabler2-out-1.png", __ASSET__assets_images_enabler2_out_1_png);
		type.set ("assets/images/Enabler2-out-1.png", AssetType.IMAGE);
		
		className.set ("assets/images/Enabler2-out-2.png", __ASSET__assets_images_enabler2_out_2_png);
		type.set ("assets/images/Enabler2-out-2.png", AssetType.IMAGE);
		
		className.set ("assets/images/Enabler2-out-3.png", __ASSET__assets_images_enabler2_out_3_png);
		type.set ("assets/images/Enabler2-out-3.png", AssetType.IMAGE);
		
		className.set ("assets/images/enterInstruction_BG.png", __ASSET__assets_images_enterinstruction_bg_png);
		type.set ("assets/images/enterInstruction_BG.png", AssetType.IMAGE);
		
		className.set ("assets/images/enterInstruction_line0.png", __ASSET__assets_images_enterinstruction_line0_png);
		type.set ("assets/images/enterInstruction_line0.png", AssetType.IMAGE);
		
		className.set ("assets/images/enterInstruction_line1.png", __ASSET__assets_images_enterinstruction_line1_png);
		type.set ("assets/images/enterInstruction_line1.png", AssetType.IMAGE);
		
		className.set ("assets/images/enterInstruction_line2.png", __ASSET__assets_images_enterinstruction_line2_png);
		type.set ("assets/images/enterInstruction_line2.png", AssetType.IMAGE);
		
		className.set ("assets/images/enterInstruction_line3.png", __ASSET__assets_images_enterinstruction_line3_png);
		type.set ("assets/images/enterInstruction_line3.png", AssetType.IMAGE);
		
		className.set ("assets/images/enterInstruction_line4.png", __ASSET__assets_images_enterinstruction_line4_png);
		type.set ("assets/images/enterInstruction_line4.png", AssetType.IMAGE);
		
		className.set ("assets/images/enterInstruction_line5.png", __ASSET__assets_images_enterinstruction_line5_png);
		type.set ("assets/images/enterInstruction_line5.png", AssetType.IMAGE);
		
		className.set ("assets/images/enterInstruction_line6.png", __ASSET__assets_images_enterinstruction_line6_png);
		type.set ("assets/images/enterInstruction_line6.png", AssetType.IMAGE);
		
		className.set ("assets/images/enterInstruction_line7.png", __ASSET__assets_images_enterinstruction_line7_png);
		type.set ("assets/images/enterInstruction_line7.png", AssetType.IMAGE);
		
		className.set ("assets/images/FlowArrows2048.png", __ASSET__assets_images_flowarrows2048_png);
		type.set ("assets/images/FlowArrows2048.png", AssetType.IMAGE);
		
		className.set ("assets/images/G1-out-0.png", __ASSET__assets_images_g1_out_0_png);
		type.set ("assets/images/G1-out-0.png", AssetType.IMAGE);
		
		className.set ("assets/images/G1-out-1.png", __ASSET__assets_images_g1_out_1_png);
		type.set ("assets/images/G1-out-1.png", AssetType.IMAGE);
		
		className.set ("assets/images/G1-out-2.png", __ASSET__assets_images_g1_out_2_png);
		type.set ("assets/images/G1-out-2.png", AssetType.IMAGE);
		
		className.set ("assets/images/G1-out-3.png", __ASSET__assets_images_g1_out_3_png);
		type.set ("assets/images/G1-out-3.png", AssetType.IMAGE);
		
		className.set ("assets/images/G2-out.png", __ASSET__assets_images_g2_out_png);
		type.set ("assets/images/G2-out.png", AssetType.IMAGE);
		
		className.set ("assets/images/G3-out.png", __ASSET__assets_images_g3_out_png);
		type.set ("assets/images/G3-out.png", AssetType.IMAGE);
		
		className.set ("assets/images/G4-out.png", __ASSET__assets_images_g4_out_png);
		type.set ("assets/images/G4-out.png", AssetType.IMAGE);
		
		className.set ("assets/images/G5-out.png", __ASSET__assets_images_g5_out_png);
		type.set ("assets/images/G5-out.png", AssetType.IMAGE);
		
		className.set ("assets/images/G6-out.png", __ASSET__assets_images_g6_out_png);
		type.set ("assets/images/G6-out.png", AssetType.IMAGE);
		
		className.set ("assets/images/G7-out.png", __ASSET__assets_images_g7_out_png);
		type.set ("assets/images/G7-out.png", AssetType.IMAGE);
		
		className.set ("assets/images/G8-out.png", __ASSET__assets_images_g8_out_png);
		type.set ("assets/images/G8-out.png", AssetType.IMAGE);
		
		className.set ("assets/images/G9-out.png", __ASSET__assets_images_g9_out_png);
		type.set ("assets/images/G9-out.png", AssetType.IMAGE);
		
		className.set ("assets/images/INP-out.png", __ASSET__assets_images_inp_out_png);
		type.set ("assets/images/INP-out.png", AssetType.IMAGE);
		
		className.set ("assets/images/instructionTable.png", __ASSET__assets_images_instructiontable_png);
		type.set ("assets/images/instructionTable.png", AssetType.IMAGE);
		
		className.set ("assets/images/instructionTable2048.png", __ASSET__assets_images_instructiontable2048_png);
		type.set ("assets/images/instructionTable2048.png", AssetType.IMAGE);
		
		className.set ("assets/images/JE-out.png", __ASSET__assets_images_je_out_png);
		type.set ("assets/images/JE-out.png", AssetType.IMAGE);
		
		className.set ("assets/images/JMP-out.png", __ASSET__assets_images_jmp_out_png);
		type.set ("assets/images/JMP-out.png", AssetType.IMAGE);
		
		className.set ("assets/images/JNE-out.png", __ASSET__assets_images_jne_out_png);
		type.set ("assets/images/JNE-out.png", AssetType.IMAGE);
		
		className.set ("assets/images/Key-out-0.png", __ASSET__assets_images_key_out_0_png);
		type.set ("assets/images/Key-out-0.png", AssetType.IMAGE);
		
		className.set ("assets/images/Key-out-1.png", __ASSET__assets_images_key_out_1_png);
		type.set ("assets/images/Key-out-1.png", AssetType.IMAGE);
		
		className.set ("assets/images/Key-out-2.png", __ASSET__assets_images_key_out_2_png);
		type.set ("assets/images/Key-out-2.png", AssetType.IMAGE);
		
		className.set ("assets/images/Key-out-3.png", __ASSET__assets_images_key_out_3_png);
		type.set ("assets/images/Key-out-3.png", AssetType.IMAGE);
		
		className.set ("assets/images/LDA-out.png", __ASSET__assets_images_lda_out_png);
		type.set ("assets/images/LDA-out.png", AssetType.IMAGE);
		
		className.set ("assets/images/LDI-out.png", __ASSET__assets_images_ldi_out_png);
		type.set ("assets/images/LDI-out.png", AssetType.IMAGE);
		
		className.set ("assets/images/MarkUnits.png", __ASSET__assets_images_markunits_png);
		type.set ("assets/images/MarkUnits.png", AssetType.IMAGE);
		
		className.set ("assets/images/MarkUnits2048.png", __ASSET__assets_images_markunits2048_png);
		type.set ("assets/images/MarkUnits2048.png", AssetType.IMAGE);
		
		className.set ("assets/images/MOV-out.png", __ASSET__assets_images_mov_out_png);
		type.set ("assets/images/MOV-out.png", AssetType.IMAGE);
		
		className.set ("assets/images/MUX-out-0.png", __ASSET__assets_images_mux_out_0_png);
		type.set ("assets/images/MUX-out-0.png", AssetType.IMAGE);
		
		className.set ("assets/images/MUX-out-1.png", __ASSET__assets_images_mux_out_1_png);
		type.set ("assets/images/MUX-out-1.png", AssetType.IMAGE);
		
		className.set ("assets/images/MUX-out-2.png", __ASSET__assets_images_mux_out_2_png);
		type.set ("assets/images/MUX-out-2.png", AssetType.IMAGE);
		
		className.set ("assets/images/MUX-out-3.png", __ASSET__assets_images_mux_out_3_png);
		type.set ("assets/images/MUX-out-3.png", AssetType.IMAGE);
		
		className.set ("assets/images/OUT-out.png", __ASSET__assets_images_out_out_png);
		type.set ("assets/images/OUT-out.png", AssetType.IMAGE);
		
		className.set ("assets/images/pc-out-0.png", __ASSET__assets_images_pc_out_0_png);
		type.set ("assets/images/pc-out-0.png", AssetType.IMAGE);
		
		className.set ("assets/images/pc-out-1.png", __ASSET__assets_images_pc_out_1_png);
		type.set ("assets/images/pc-out-1.png", AssetType.IMAGE);
		
		className.set ("assets/images/pc-out-2.png", __ASSET__assets_images_pc_out_2_png);
		type.set ("assets/images/pc-out-2.png", AssetType.IMAGE);
		
		className.set ("assets/images/pc-out-3.png", __ASSET__assets_images_pc_out_3_png);
		type.set ("assets/images/pc-out-3.png", AssetType.IMAGE);
		
		className.set ("assets/images/PowerOffCover.png", __ASSET__assets_images_poweroffcover_png);
		type.set ("assets/images/PowerOffCover.png", AssetType.IMAGE);
		
		className.set ("assets/images/PowerOffCover2048.png", __ASSET__assets_images_poweroffcover2048_png);
		type.set ("assets/images/PowerOffCover2048.png", AssetType.IMAGE);
		
		className.set ("assets/images/R1-out-0.png", __ASSET__assets_images_r1_out_0_png);
		type.set ("assets/images/R1-out-0.png", AssetType.IMAGE);
		
		className.set ("assets/images/R1-out-1.png", __ASSET__assets_images_r1_out_1_png);
		type.set ("assets/images/R1-out-1.png", AssetType.IMAGE);
		
		className.set ("assets/images/R1-out-2.png", __ASSET__assets_images_r1_out_2_png);
		type.set ("assets/images/R1-out-2.png", AssetType.IMAGE);
		
		className.set ("assets/images/R1-out-3.png", __ASSET__assets_images_r1_out_3_png);
		type.set ("assets/images/R1-out-3.png", AssetType.IMAGE);
		
		className.set ("assets/images/R2-out-0.png", __ASSET__assets_images_r2_out_0_png);
		type.set ("assets/images/R2-out-0.png", AssetType.IMAGE);
		
		className.set ("assets/images/R2-out-1.png", __ASSET__assets_images_r2_out_1_png);
		type.set ("assets/images/R2-out-1.png", AssetType.IMAGE);
		
		className.set ("assets/images/R2-out-2.png", __ASSET__assets_images_r2_out_2_png);
		type.set ("assets/images/R2-out-2.png", AssetType.IMAGE);
		
		className.set ("assets/images/R2-out-3.png", __ASSET__assets_images_r2_out_3_png);
		type.set ("assets/images/R2-out-3.png", AssetType.IMAGE);
		
		className.set ("assets/images/RAM-out-0.png", __ASSET__assets_images_ram_out_0_png);
		type.set ("assets/images/RAM-out-0.png", AssetType.IMAGE);
		
		className.set ("assets/images/RAM-out-1.png", __ASSET__assets_images_ram_out_1_png);
		type.set ("assets/images/RAM-out-1.png", AssetType.IMAGE);
		
		className.set ("assets/images/RAM-out-2.png", __ASSET__assets_images_ram_out_2_png);
		type.set ("assets/images/RAM-out-2.png", AssetType.IMAGE);
		
		className.set ("assets/images/RAM-out-3.png", __ASSET__assets_images_ram_out_3_png);
		type.set ("assets/images/RAM-out-3.png", AssetType.IMAGE);
		
		className.set ("assets/images/SDA-out.png", __ASSET__assets_images_sda_out_png);
		type.set ("assets/images/SDA-out.png", AssetType.IMAGE);
		
		className.set ("assets/images/tfFrame.png", __ASSET__assets_images_tfframe_png);
		type.set ("assets/images/tfFrame.png", AssetType.IMAGE);
		
		className.set ("assets/images/top_layer.png", __ASSET__assets_images_top_layer_png);
		type.set ("assets/images/top_layer.png", AssetType.IMAGE);
		
		className.set ("assets/images/top_layer2048.png", __ASSET__assets_images_top_layer2048_png);
		type.set ("assets/images/top_layer2048.png", AssetType.IMAGE);
		
		className.set ("assets/images/top_layer_colored.png", __ASSET__assets_images_top_layer_colored_png);
		type.set ("assets/images/top_layer_colored.png", AssetType.IMAGE);
		
		className.set ("assets/tbsimlogo.svg", __ASSET__assets_tbsimlogo_svg);
		type.set ("assets/tbsimlogo.svg", AssetType.TEXT);
		
		className.set ("assets/tbsimlogo2.svg", __ASSET__assets_tbsimlogo2_svg);
		type.set ("assets/tbsimlogo2.svg", AssetType.TEXT);
		
		className.set ("assets/tbsimlogo3.svg", __ASSET__assets_tbsimlogo3_svg);
		type.set ("assets/tbsimlogo3.svg", AssetType.TEXT);
		
		className.set ("fonts/Consolas Bold.eot", __ASSET__fonts_consolas_bold_eot);
		type.set ("fonts/Consolas Bold.eot", AssetType.BINARY);
		
		className.set ("fonts/Consolas Bold.svg", __ASSET__fonts_consolas_bold_svg);
		type.set ("fonts/Consolas Bold.svg", AssetType.TEXT);
		
		className.set ("fonts/Consolas Bold.ttf", __ASSET__fonts_consolas_bold_ttf);
		type.set ("fonts/Consolas Bold.ttf", AssetType.FONT);
		
		className.set ("fonts/Consolas Bold.woff", __ASSET__fonts_consolas_bold_woff);
		type.set ("fonts/Consolas Bold.woff", AssetType.BINARY);
		
		className.set ("fonts/MyriadPro-Bold.eot", __ASSET__fonts_myriadpro_bold_eot);
		type.set ("fonts/MyriadPro-Bold.eot", AssetType.BINARY);
		
		className.set ("fonts/MyriadPro-Bold.otf", __ASSET__fonts_myriadpro_bold_otf);
		type.set ("fonts/MyriadPro-Bold.otf", AssetType.FONT);
		
		className.set ("fonts/MyriadPro-Bold.woff", __ASSET__fonts_myriadpro_bold_woff);
		type.set ("fonts/MyriadPro-Bold.woff", AssetType.BINARY);
		
		className.set ("fonts/MyriadPro-Regular.eot", __ASSET__fonts_myriadpro_regular_eot);
		type.set ("fonts/MyriadPro-Regular.eot", AssetType.BINARY);
		
		className.set ("fonts/MyriadPro-Regular.otf", __ASSET__fonts_myriadpro_regular_otf);
		type.set ("fonts/MyriadPro-Regular.otf", AssetType.FONT);
		
		className.set ("fonts/MyriadPro-Regular.woff", __ASSET__fonts_myriadpro_regular_woff);
		type.set ("fonts/MyriadPro-Regular.woff", AssetType.BINARY);
		
		
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

@:keep @:bind #if display private #end class __ASSET__assets_fonts_consolas_bold_eot extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_fonts_consolas_bold_svg extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_fonts_consolas_bold_ttf extends flash.text.Font { }
@:keep @:bind #if display private #end class __ASSET__assets_fonts_consolas_bold_woff extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_fonts_myriadpro_bold_eot extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_fonts_myriadpro_bold_otf extends flash.text.Font { }
@:keep @:bind #if display private #end class __ASSET__assets_fonts_myriadpro_bold_woff extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_fonts_myriadpro_regular_eot extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_fonts_myriadpro_regular_otf extends flash.text.Font { }
@:keep @:bind #if display private #end class __ASSET__assets_fonts_myriadpro_regular_woff extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_images_accu_out_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_accu_out_1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_accu_out_2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_accu_out_3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_accupopup_1bit_bottomlayer2048_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_accupopup_1bit_gate1_out_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_accupopup_1bit_gate2_out_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_accupopup_1bit_gate3_out_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_accupopup_1bit_gate4_out_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_accupopup_1bit_input_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_accupopup_1bit_set_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_accupopup_bottomlayer2048_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_accupopup_enabler_enable_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_accupopup_enabler_out_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_accupopup_enabler_out_1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_accupopup_enabler_out_2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_accupopup_enabler_out_3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_accupopup_memory_in_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_accupopup_memory_in_1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_accupopup_memory_in_2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_accupopup_memory_in_3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_accupopup_memory_out_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_accupopup_memory_out_1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_accupopup_memory_out_2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_accupopup_memory_out_3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_accupopup_memory_set_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_alu_out_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_alu_out_1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_alu_out_2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_alu_out_3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_alu_out_equal_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_alu_out_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_architecture_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_bottom_layer_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_busline0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_busline1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_busline2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_busline3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_busline4_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_busline5_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_busline6_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_busline7_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_clock_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_clockglow_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_comp_static_lines_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_coveralu2048_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_coverdecoder2048_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_covermultiplexer2048_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_decoder_out_1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_decoder_out_2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_decoder_out_3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_editrompopup2048_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_enabler1_out_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_enabler1_out_1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_enabler1_out_2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_enabler1_out_3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_enabler2_out_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_enabler2_out_1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_enabler2_out_2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_enabler2_out_3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_enterinstruction_bg_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_enterinstruction_line0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_enterinstruction_line1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_enterinstruction_line2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_enterinstruction_line3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_enterinstruction_line4_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_enterinstruction_line5_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_enterinstruction_line6_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_enterinstruction_line7_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_flowarrows2048_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_g1_out_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_g1_out_1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_g1_out_2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_g1_out_3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_g2_out_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_g3_out_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_g4_out_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_g5_out_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_g6_out_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_g7_out_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_g8_out_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_g9_out_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_inp_out_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_instructiontable_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_instructiontable2048_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_je_out_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_jmp_out_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_jne_out_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_key_out_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_key_out_1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_key_out_2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_key_out_3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_lda_out_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_ldi_out_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_markunits_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_markunits2048_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_mov_out_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_mux_out_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_mux_out_1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_mux_out_2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_mux_out_3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_out_out_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_pc_out_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_pc_out_1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_pc_out_2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_pc_out_3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_poweroffcover_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_poweroffcover2048_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_r1_out_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_r1_out_1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_r1_out_2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_r1_out_3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_r2_out_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_r2_out_1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_r2_out_2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_r2_out_3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_ram_out_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_ram_out_1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_ram_out_2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_ram_out_3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_sda_out_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_tfframe_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_top_layer_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_top_layer2048_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_top_layer_colored_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_tbsimlogo_svg extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_tbsimlogo2_svg extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_tbsimlogo3_svg extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__fonts_consolas_bold_eot extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__fonts_consolas_bold_svg extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__fonts_consolas_bold_ttf extends flash.text.Font { }
@:keep @:bind #if display private #end class __ASSET__fonts_consolas_bold_woff extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__fonts_myriadpro_bold_eot extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__fonts_myriadpro_bold_otf extends flash.text.Font { }
@:keep @:bind #if display private #end class __ASSET__fonts_myriadpro_bold_woff extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__fonts_myriadpro_regular_eot extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__fonts_myriadpro_regular_otf extends flash.text.Font { }
@:keep @:bind #if display private #end class __ASSET__fonts_myriadpro_regular_woff extends flash.utils.ByteArray { }


#elseif html5



@:keep #if display private #end class __ASSET__assets_fonts_consolas_bold_ttf extends lime.text.Font { public function new () { super (); name = "Consolas Bold"; } } 


@:keep #if display private #end class __ASSET__assets_fonts_myriadpro_bold_otf extends lime.text.Font { public function new () { super (); name = "Myriad Pro Bold"; } } 


@:keep #if display private #end class __ASSET__assets_fonts_myriadpro_regular_otf extends lime.text.Font { public function new () { super (); name = "Myriad Pro"; } } 



































































































































@:keep #if display private #end class __ASSET__fonts_consolas_bold_ttf extends lime.text.Font { public function new () { super (); name = "Consolas Bold"; } } 


@:keep #if display private #end class __ASSET__fonts_myriadpro_bold_otf extends lime.text.Font { public function new () { super (); name = "Myriad Pro Bold"; } } 


@:keep #if display private #end class __ASSET__fonts_myriadpro_regular_otf extends lime.text.Font { public function new () { super (); name = "Myriad Pro"; } } 



#else



#if (windows || mac || linux)


@:file("Assets/fonts/Consolas Bold.eot") #if display private #end class __ASSET__assets_fonts_consolas_bold_eot extends lime.utils.ByteArray {}
@:file("Assets/fonts/Consolas Bold.svg") #if display private #end class __ASSET__assets_fonts_consolas_bold_svg extends lime.utils.ByteArray {}
@:font("Assets/fonts/Consolas Bold.ttf") #if display private #end class __ASSET__assets_fonts_consolas_bold_ttf extends lime.text.Font {}
@:file("Assets/fonts/Consolas Bold.woff") #if display private #end class __ASSET__assets_fonts_consolas_bold_woff extends lime.utils.ByteArray {}
@:file("Assets/fonts/MyriadPro-Bold.eot") #if display private #end class __ASSET__assets_fonts_myriadpro_bold_eot extends lime.utils.ByteArray {}
@:font("Assets/fonts/MyriadPro-Bold.otf") #if display private #end class __ASSET__assets_fonts_myriadpro_bold_otf extends lime.text.Font {}
@:file("Assets/fonts/MyriadPro-Bold.woff") #if display private #end class __ASSET__assets_fonts_myriadpro_bold_woff extends lime.utils.ByteArray {}
@:file("Assets/fonts/MyriadPro-Regular.eot") #if display private #end class __ASSET__assets_fonts_myriadpro_regular_eot extends lime.utils.ByteArray {}
@:font("Assets/fonts/MyriadPro-Regular.otf") #if display private #end class __ASSET__assets_fonts_myriadpro_regular_otf extends lime.text.Font {}
@:file("Assets/fonts/MyriadPro-Regular.woff") #if display private #end class __ASSET__assets_fonts_myriadpro_regular_woff extends lime.utils.ByteArray {}
@:image("Assets/images/Accu-out-0.png") #if display private #end class __ASSET__assets_images_accu_out_0_png extends lime.graphics.Image {}
@:image("Assets/images/Accu-out-1.png") #if display private #end class __ASSET__assets_images_accu_out_1_png extends lime.graphics.Image {}
@:image("Assets/images/Accu-out-2.png") #if display private #end class __ASSET__assets_images_accu_out_2_png extends lime.graphics.Image {}
@:image("Assets/images/Accu-out-3.png") #if display private #end class __ASSET__assets_images_accu_out_3_png extends lime.graphics.Image {}
@:image("Assets/images/accuPopup_1Bit_bottomLayer2048.png") #if display private #end class __ASSET__assets_images_accupopup_1bit_bottomlayer2048_png extends lime.graphics.Image {}
@:image("Assets/images/accuPopup_1Bit_gate1_out.png") #if display private #end class __ASSET__assets_images_accupopup_1bit_gate1_out_png extends lime.graphics.Image {}
@:image("Assets/images/accuPopup_1Bit_gate2_out.png") #if display private #end class __ASSET__assets_images_accupopup_1bit_gate2_out_png extends lime.graphics.Image {}
@:image("Assets/images/accuPopup_1Bit_gate3_out.png") #if display private #end class __ASSET__assets_images_accupopup_1bit_gate3_out_png extends lime.graphics.Image {}
@:image("Assets/images/accuPopup_1Bit_gate4_out.png") #if display private #end class __ASSET__assets_images_accupopup_1bit_gate4_out_png extends lime.graphics.Image {}
@:image("Assets/images/accuPopup_1Bit_input.png") #if display private #end class __ASSET__assets_images_accupopup_1bit_input_png extends lime.graphics.Image {}
@:image("Assets/images/accuPopup_1Bit_set.png") #if display private #end class __ASSET__assets_images_accupopup_1bit_set_png extends lime.graphics.Image {}
@:image("Assets/images/accuPopup_bottomLayer2048.png") #if display private #end class __ASSET__assets_images_accupopup_bottomlayer2048_png extends lime.graphics.Image {}
@:image("Assets/images/accuPopup_enabler_enable.png") #if display private #end class __ASSET__assets_images_accupopup_enabler_enable_png extends lime.graphics.Image {}
@:image("Assets/images/accuPopup_enabler_out_0.png") #if display private #end class __ASSET__assets_images_accupopup_enabler_out_0_png extends lime.graphics.Image {}
@:image("Assets/images/accuPopup_enabler_out_1.png") #if display private #end class __ASSET__assets_images_accupopup_enabler_out_1_png extends lime.graphics.Image {}
@:image("Assets/images/accuPopup_enabler_out_2.png") #if display private #end class __ASSET__assets_images_accupopup_enabler_out_2_png extends lime.graphics.Image {}
@:image("Assets/images/accuPopup_enabler_out_3.png") #if display private #end class __ASSET__assets_images_accupopup_enabler_out_3_png extends lime.graphics.Image {}
@:image("Assets/images/accuPopup_memory_in_0.png") #if display private #end class __ASSET__assets_images_accupopup_memory_in_0_png extends lime.graphics.Image {}
@:image("Assets/images/accuPopup_memory_in_1.png") #if display private #end class __ASSET__assets_images_accupopup_memory_in_1_png extends lime.graphics.Image {}
@:image("Assets/images/accuPopup_memory_in_2.png") #if display private #end class __ASSET__assets_images_accupopup_memory_in_2_png extends lime.graphics.Image {}
@:image("Assets/images/accuPopup_memory_in_3.png") #if display private #end class __ASSET__assets_images_accupopup_memory_in_3_png extends lime.graphics.Image {}
@:image("Assets/images/accuPopup_memory_out_0.png") #if display private #end class __ASSET__assets_images_accupopup_memory_out_0_png extends lime.graphics.Image {}
@:image("Assets/images/accuPopup_memory_out_1.png") #if display private #end class __ASSET__assets_images_accupopup_memory_out_1_png extends lime.graphics.Image {}
@:image("Assets/images/accuPopup_memory_out_2.png") #if display private #end class __ASSET__assets_images_accupopup_memory_out_2_png extends lime.graphics.Image {}
@:image("Assets/images/accuPopup_memory_out_3.png") #if display private #end class __ASSET__assets_images_accupopup_memory_out_3_png extends lime.graphics.Image {}
@:image("Assets/images/accuPopup_memory_set.png") #if display private #end class __ASSET__assets_images_accupopup_memory_set_png extends lime.graphics.Image {}
@:image("Assets/images/ALU-out-0.png") #if display private #end class __ASSET__assets_images_alu_out_0_png extends lime.graphics.Image {}
@:image("Assets/images/ALU-out-1.png") #if display private #end class __ASSET__assets_images_alu_out_1_png extends lime.graphics.Image {}
@:image("Assets/images/ALU-out-2.png") #if display private #end class __ASSET__assets_images_alu_out_2_png extends lime.graphics.Image {}
@:image("Assets/images/ALU-out-3.png") #if display private #end class __ASSET__assets_images_alu_out_3_png extends lime.graphics.Image {}
@:image("Assets/images/ALU-out-equal.png") #if display private #end class __ASSET__assets_images_alu_out_equal_png extends lime.graphics.Image {}
@:image("Assets/images/ALU-out.png") #if display private #end class __ASSET__assets_images_alu_out_png extends lime.graphics.Image {}
@:image("Assets/images/architecture.png") #if display private #end class __ASSET__assets_images_architecture_png extends lime.graphics.Image {}
@:image("Assets/images/bottom_layer.png") #if display private #end class __ASSET__assets_images_bottom_layer_png extends lime.graphics.Image {}
@:image("Assets/images/busline0.png") #if display private #end class __ASSET__assets_images_busline0_png extends lime.graphics.Image {}
@:image("Assets/images/busline1.png") #if display private #end class __ASSET__assets_images_busline1_png extends lime.graphics.Image {}
@:image("Assets/images/busline2.png") #if display private #end class __ASSET__assets_images_busline2_png extends lime.graphics.Image {}
@:image("Assets/images/busline3.png") #if display private #end class __ASSET__assets_images_busline3_png extends lime.graphics.Image {}
@:image("Assets/images/busline4.png") #if display private #end class __ASSET__assets_images_busline4_png extends lime.graphics.Image {}
@:image("Assets/images/busline5.png") #if display private #end class __ASSET__assets_images_busline5_png extends lime.graphics.Image {}
@:image("Assets/images/busline6.png") #if display private #end class __ASSET__assets_images_busline6_png extends lime.graphics.Image {}
@:image("Assets/images/busline7.png") #if display private #end class __ASSET__assets_images_busline7_png extends lime.graphics.Image {}
@:image("Assets/images/Clock.png") #if display private #end class __ASSET__assets_images_clock_png extends lime.graphics.Image {}
@:image("Assets/images/clockGlow.png") #if display private #end class __ASSET__assets_images_clockglow_png extends lime.graphics.Image {}
@:image("Assets/images/comp_static_lines.png") #if display private #end class __ASSET__assets_images_comp_static_lines_png extends lime.graphics.Image {}
@:image("Assets/images/coverAlu2048.png") #if display private #end class __ASSET__assets_images_coveralu2048_png extends lime.graphics.Image {}
@:image("Assets/images/coverDecoder2048.png") #if display private #end class __ASSET__assets_images_coverdecoder2048_png extends lime.graphics.Image {}
@:image("Assets/images/coverMultiplexer2048.png") #if display private #end class __ASSET__assets_images_covermultiplexer2048_png extends lime.graphics.Image {}
@:image("Assets/images/Decoder-out-1.png") #if display private #end class __ASSET__assets_images_decoder_out_1_png extends lime.graphics.Image {}
@:image("Assets/images/Decoder-out-2.png") #if display private #end class __ASSET__assets_images_decoder_out_2_png extends lime.graphics.Image {}
@:image("Assets/images/Decoder-out-3.png") #if display private #end class __ASSET__assets_images_decoder_out_3_png extends lime.graphics.Image {}
@:image("Assets/images/EditRomPopup2048.png") #if display private #end class __ASSET__assets_images_editrompopup2048_png extends lime.graphics.Image {}
@:image("Assets/images/Enabler1-out-0.png") #if display private #end class __ASSET__assets_images_enabler1_out_0_png extends lime.graphics.Image {}
@:image("Assets/images/Enabler1-out-1.png") #if display private #end class __ASSET__assets_images_enabler1_out_1_png extends lime.graphics.Image {}
@:image("Assets/images/Enabler1-out-2.png") #if display private #end class __ASSET__assets_images_enabler1_out_2_png extends lime.graphics.Image {}
@:image("Assets/images/Enabler1-out-3.png") #if display private #end class __ASSET__assets_images_enabler1_out_3_png extends lime.graphics.Image {}
@:image("Assets/images/Enabler2-out-0.png") #if display private #end class __ASSET__assets_images_enabler2_out_0_png extends lime.graphics.Image {}
@:image("Assets/images/Enabler2-out-1.png") #if display private #end class __ASSET__assets_images_enabler2_out_1_png extends lime.graphics.Image {}
@:image("Assets/images/Enabler2-out-2.png") #if display private #end class __ASSET__assets_images_enabler2_out_2_png extends lime.graphics.Image {}
@:image("Assets/images/Enabler2-out-3.png") #if display private #end class __ASSET__assets_images_enabler2_out_3_png extends lime.graphics.Image {}
@:image("Assets/images/enterInstruction_BG.png") #if display private #end class __ASSET__assets_images_enterinstruction_bg_png extends lime.graphics.Image {}
@:image("Assets/images/enterInstruction_line0.png") #if display private #end class __ASSET__assets_images_enterinstruction_line0_png extends lime.graphics.Image {}
@:image("Assets/images/enterInstruction_line1.png") #if display private #end class __ASSET__assets_images_enterinstruction_line1_png extends lime.graphics.Image {}
@:image("Assets/images/enterInstruction_line2.png") #if display private #end class __ASSET__assets_images_enterinstruction_line2_png extends lime.graphics.Image {}
@:image("Assets/images/enterInstruction_line3.png") #if display private #end class __ASSET__assets_images_enterinstruction_line3_png extends lime.graphics.Image {}
@:image("Assets/images/enterInstruction_line4.png") #if display private #end class __ASSET__assets_images_enterinstruction_line4_png extends lime.graphics.Image {}
@:image("Assets/images/enterInstruction_line5.png") #if display private #end class __ASSET__assets_images_enterinstruction_line5_png extends lime.graphics.Image {}
@:image("Assets/images/enterInstruction_line6.png") #if display private #end class __ASSET__assets_images_enterinstruction_line6_png extends lime.graphics.Image {}
@:image("Assets/images/enterInstruction_line7.png") #if display private #end class __ASSET__assets_images_enterinstruction_line7_png extends lime.graphics.Image {}
@:image("Assets/images/FlowArrows2048.png") #if display private #end class __ASSET__assets_images_flowarrows2048_png extends lime.graphics.Image {}
@:image("Assets/images/G1-out-0.png") #if display private #end class __ASSET__assets_images_g1_out_0_png extends lime.graphics.Image {}
@:image("Assets/images/G1-out-1.png") #if display private #end class __ASSET__assets_images_g1_out_1_png extends lime.graphics.Image {}
@:image("Assets/images/G1-out-2.png") #if display private #end class __ASSET__assets_images_g1_out_2_png extends lime.graphics.Image {}
@:image("Assets/images/G1-out-3.png") #if display private #end class __ASSET__assets_images_g1_out_3_png extends lime.graphics.Image {}
@:image("Assets/images/G2-out.png") #if display private #end class __ASSET__assets_images_g2_out_png extends lime.graphics.Image {}
@:image("Assets/images/G3-out.png") #if display private #end class __ASSET__assets_images_g3_out_png extends lime.graphics.Image {}
@:image("Assets/images/G4-out.png") #if display private #end class __ASSET__assets_images_g4_out_png extends lime.graphics.Image {}
@:image("Assets/images/G5-out.png") #if display private #end class __ASSET__assets_images_g5_out_png extends lime.graphics.Image {}
@:image("Assets/images/G6-out.png") #if display private #end class __ASSET__assets_images_g6_out_png extends lime.graphics.Image {}
@:image("Assets/images/G7-out.png") #if display private #end class __ASSET__assets_images_g7_out_png extends lime.graphics.Image {}
@:image("Assets/images/G8-out.png") #if display private #end class __ASSET__assets_images_g8_out_png extends lime.graphics.Image {}
@:image("Assets/images/G9-out.png") #if display private #end class __ASSET__assets_images_g9_out_png extends lime.graphics.Image {}
@:image("Assets/images/INP-out.png") #if display private #end class __ASSET__assets_images_inp_out_png extends lime.graphics.Image {}
@:image("Assets/images/instructionTable.png") #if display private #end class __ASSET__assets_images_instructiontable_png extends lime.graphics.Image {}
@:image("Assets/images/instructionTable2048.png") #if display private #end class __ASSET__assets_images_instructiontable2048_png extends lime.graphics.Image {}
@:image("Assets/images/JE-out.png") #if display private #end class __ASSET__assets_images_je_out_png extends lime.graphics.Image {}
@:image("Assets/images/JMP-out.png") #if display private #end class __ASSET__assets_images_jmp_out_png extends lime.graphics.Image {}
@:image("Assets/images/JNE-out.png") #if display private #end class __ASSET__assets_images_jne_out_png extends lime.graphics.Image {}
@:image("Assets/images/Key-out-0.png") #if display private #end class __ASSET__assets_images_key_out_0_png extends lime.graphics.Image {}
@:image("Assets/images/Key-out-1.png") #if display private #end class __ASSET__assets_images_key_out_1_png extends lime.graphics.Image {}
@:image("Assets/images/Key-out-2.png") #if display private #end class __ASSET__assets_images_key_out_2_png extends lime.graphics.Image {}
@:image("Assets/images/Key-out-3.png") #if display private #end class __ASSET__assets_images_key_out_3_png extends lime.graphics.Image {}
@:image("Assets/images/LDA-out.png") #if display private #end class __ASSET__assets_images_lda_out_png extends lime.graphics.Image {}
@:image("Assets/images/LDI-out.png") #if display private #end class __ASSET__assets_images_ldi_out_png extends lime.graphics.Image {}
@:image("Assets/images/MarkUnits.png") #if display private #end class __ASSET__assets_images_markunits_png extends lime.graphics.Image {}
@:image("Assets/images/MarkUnits2048.png") #if display private #end class __ASSET__assets_images_markunits2048_png extends lime.graphics.Image {}
@:image("Assets/images/MOV-out.png") #if display private #end class __ASSET__assets_images_mov_out_png extends lime.graphics.Image {}
@:image("Assets/images/MUX-out-0.png") #if display private #end class __ASSET__assets_images_mux_out_0_png extends lime.graphics.Image {}
@:image("Assets/images/MUX-out-1.png") #if display private #end class __ASSET__assets_images_mux_out_1_png extends lime.graphics.Image {}
@:image("Assets/images/MUX-out-2.png") #if display private #end class __ASSET__assets_images_mux_out_2_png extends lime.graphics.Image {}
@:image("Assets/images/MUX-out-3.png") #if display private #end class __ASSET__assets_images_mux_out_3_png extends lime.graphics.Image {}
@:image("Assets/images/OUT-out.png") #if display private #end class __ASSET__assets_images_out_out_png extends lime.graphics.Image {}
@:image("Assets/images/pc-out-0.png") #if display private #end class __ASSET__assets_images_pc_out_0_png extends lime.graphics.Image {}
@:image("Assets/images/pc-out-1.png") #if display private #end class __ASSET__assets_images_pc_out_1_png extends lime.graphics.Image {}
@:image("Assets/images/pc-out-2.png") #if display private #end class __ASSET__assets_images_pc_out_2_png extends lime.graphics.Image {}
@:image("Assets/images/pc-out-3.png") #if display private #end class __ASSET__assets_images_pc_out_3_png extends lime.graphics.Image {}
@:image("Assets/images/PowerOffCover.png") #if display private #end class __ASSET__assets_images_poweroffcover_png extends lime.graphics.Image {}
@:image("Assets/images/PowerOffCover2048.png") #if display private #end class __ASSET__assets_images_poweroffcover2048_png extends lime.graphics.Image {}
@:image("Assets/images/R1-out-0.png") #if display private #end class __ASSET__assets_images_r1_out_0_png extends lime.graphics.Image {}
@:image("Assets/images/R1-out-1.png") #if display private #end class __ASSET__assets_images_r1_out_1_png extends lime.graphics.Image {}
@:image("Assets/images/R1-out-2.png") #if display private #end class __ASSET__assets_images_r1_out_2_png extends lime.graphics.Image {}
@:image("Assets/images/R1-out-3.png") #if display private #end class __ASSET__assets_images_r1_out_3_png extends lime.graphics.Image {}
@:image("Assets/images/R2-out-0.png") #if display private #end class __ASSET__assets_images_r2_out_0_png extends lime.graphics.Image {}
@:image("Assets/images/R2-out-1.png") #if display private #end class __ASSET__assets_images_r2_out_1_png extends lime.graphics.Image {}
@:image("Assets/images/R2-out-2.png") #if display private #end class __ASSET__assets_images_r2_out_2_png extends lime.graphics.Image {}
@:image("Assets/images/R2-out-3.png") #if display private #end class __ASSET__assets_images_r2_out_3_png extends lime.graphics.Image {}
@:image("Assets/images/RAM-out-0.png") #if display private #end class __ASSET__assets_images_ram_out_0_png extends lime.graphics.Image {}
@:image("Assets/images/RAM-out-1.png") #if display private #end class __ASSET__assets_images_ram_out_1_png extends lime.graphics.Image {}
@:image("Assets/images/RAM-out-2.png") #if display private #end class __ASSET__assets_images_ram_out_2_png extends lime.graphics.Image {}
@:image("Assets/images/RAM-out-3.png") #if display private #end class __ASSET__assets_images_ram_out_3_png extends lime.graphics.Image {}
@:image("Assets/images/SDA-out.png") #if display private #end class __ASSET__assets_images_sda_out_png extends lime.graphics.Image {}
@:image("Assets/images/tfFrame.png") #if display private #end class __ASSET__assets_images_tfframe_png extends lime.graphics.Image {}
@:image("Assets/images/top_layer.png") #if display private #end class __ASSET__assets_images_top_layer_png extends lime.graphics.Image {}
@:image("Assets/images/top_layer2048.png") #if display private #end class __ASSET__assets_images_top_layer2048_png extends lime.graphics.Image {}
@:image("Assets/images/top_layer_colored.png") #if display private #end class __ASSET__assets_images_top_layer_colored_png extends lime.graphics.Image {}
@:file("Assets/tbsimlogo.svg") #if display private #end class __ASSET__assets_tbsimlogo_svg extends lime.utils.ByteArray {}
@:file("Assets/tbsimlogo2.svg") #if display private #end class __ASSET__assets_tbsimlogo2_svg extends lime.utils.ByteArray {}
@:file("Assets/tbsimlogo3.svg") #if display private #end class __ASSET__assets_tbsimlogo3_svg extends lime.utils.ByteArray {}
@:file("assets/fonts/Consolas Bold.eot") #if display private #end class __ASSET__fonts_consolas_bold_eot extends lime.utils.ByteArray {}
@:file("assets/fonts/Consolas Bold.svg") #if display private #end class __ASSET__fonts_consolas_bold_svg extends lime.utils.ByteArray {}
@:font("assets/fonts/Consolas Bold.ttf") #if display private #end class __ASSET__fonts_consolas_bold_ttf extends lime.text.Font {}
@:file("assets/fonts/Consolas Bold.woff") #if display private #end class __ASSET__fonts_consolas_bold_woff extends lime.utils.ByteArray {}
@:file("assets/fonts/MyriadPro-Bold.eot") #if display private #end class __ASSET__fonts_myriadpro_bold_eot extends lime.utils.ByteArray {}
@:font("assets/fonts/MyriadPro-Bold.otf") #if display private #end class __ASSET__fonts_myriadpro_bold_otf extends lime.text.Font {}
@:file("assets/fonts/MyriadPro-Bold.woff") #if display private #end class __ASSET__fonts_myriadpro_bold_woff extends lime.utils.ByteArray {}
@:file("assets/fonts/MyriadPro-Regular.eot") #if display private #end class __ASSET__fonts_myriadpro_regular_eot extends lime.utils.ByteArray {}
@:font("assets/fonts/MyriadPro-Regular.otf") #if display private #end class __ASSET__fonts_myriadpro_regular_otf extends lime.text.Font {}
@:file("assets/fonts/MyriadPro-Regular.woff") #if display private #end class __ASSET__fonts_myriadpro_regular_woff extends lime.utils.ByteArray {}



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

