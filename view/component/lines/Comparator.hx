package view.component.lines;
import model.vo.InstructionVO;
import events.AppEvent;
import openfl.display.BitmapData;
import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.Assets;
import openfl.events.Event;

class Comparator extends Sprite {

    private var MOVLine:Bitmap;
    private var LDILine:Bitmap;
    private var ALULine:Bitmap;
    private var SDALine:Bitmap;
    private var LDALine:Bitmap;
    private var INPLine:Bitmap;
    private var OUTLine:Bitmap;
    private var JELine:Bitmap;
    private var JNELine:Bitmap;
    private var JMPLine:Bitmap;
    private var compStaticLines:Bitmap;

    public function new() {
        super();
        addEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
    }

    private function addedToStageHandler(event:Event):Void {
        removeEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/MOV-out.png", movLoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/LDI-out.png", ldiLoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/ALU-out.png", aluLoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/SDA-out.png", sdaLoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/LDA-out.png", ldaLoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/INP-out.png", inpLoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/OUT-out.png", outLoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/JE-out.png", jeLoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/JNE-out.png", jneLoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/JMP-out.png", jmpLoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/comp_static_lines.png", compStaticLinesLoadCompleteHandler);
    }

/**
    Create Lines
**/

    private function movLoadCompleteHandler(bmd:BitmapData):Void {
        MOVLine = new Bitmap(bmd);
        MOVLine.name = "MOVLine";
        MOVLine.scaleX = MOVLine.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function ldiLoadCompleteHandler(bmd:BitmapData):Void {
        LDILine = new Bitmap(bmd);
        LDILine.name = "LDILine";
        LDILine.scaleX = LDILine.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function aluLoadCompleteHandler(bmd:BitmapData):Void {
        ALULine = new Bitmap(bmd);
        ALULine.name = "ALULine";
        ALULine.scaleX = ALULine.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function sdaLoadCompleteHandler(bmd:BitmapData):Void {
        SDALine = new Bitmap(bmd);
        SDALine.name = "SDALine";
        SDALine.scaleX = SDALine.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function ldaLoadCompleteHandler(bmd:BitmapData):Void {
        LDALine = new Bitmap(bmd);
        LDALine.name = "LDALine";
        LDALine.scaleX = LDALine.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function inpLoadCompleteHandler(bmd:BitmapData):Void {
        INPLine = new Bitmap(bmd);
        INPLine.name = "INPLine";
        INPLine.scaleX = INPLine.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function outLoadCompleteHandler(bmd:BitmapData):Void {
        OUTLine = new Bitmap(bmd);
        OUTLine.name = "OUTLine";
        OUTLine.scaleX = OUTLine.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function jeLoadCompleteHandler(bmd:BitmapData):Void {
        JELine = new Bitmap(bmd);
        JELine.name = "JELine";
        JELine.scaleX = JELine.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function jneLoadCompleteHandler(bmd:BitmapData):Void {
        JNELine = new Bitmap(bmd);
        JNELine.name = "JNELine";
        JNELine.scaleX = JNELine.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function jmpLoadCompleteHandler(bmd:BitmapData):Void {
        JMPLine = new Bitmap(bmd);
        JMPLine.name = "JMPLine";
        JMPLine.scaleX = JMPLine.scaleY = AppConstants.SCALE_FACTOR;
    }

    private function compStaticLinesLoadCompleteHandler(bmd:BitmapData):Void {
        compStaticLines = new Bitmap(bmd);
        compStaticLines.name = "compStaticLines";
        compStaticLines.scaleX = compStaticLines.scaleY = AppConstants.SCALE_FACTOR;
        dispatchEvent(new AppEvent(AppEvent.VIEW_READY));
    }


/**
        Public Methods
**/

    public function showLines(instruction:InstructionVO):Void {
        hideAllLines();
        switch (instruction.code.substr(0, 4)) {
            case AppConstants.OPCODE_MOV :
                addChild(MOVLine);
            case AppConstants.OPCODE_LDI :
                addChild(LDILine);
            case AppConstants.OPCODE_ALU :
                addChild(ALULine);
            case AppConstants.OPCODE_SDA :
                addChild(SDALine);
            case AppConstants.OPCODE_LDA :
                addChild(LDALine);
            case AppConstants.OPCODE_INP :
                addChild(INPLine);
            case AppConstants.OPCODE_OUT :
                addChild(OUTLine);
            case AppConstants.OPCODE_JE :
                addChild(JELine);
            case AppConstants.OPCODE_JNE :
                addChild(JNELine);
            case AppConstants.OPCODE_JMP :
                addChild(JMPLine);
        }
    }

    public function showCompStaticLines():Void {
        addChild(compStaticLines);
    }

    public function hideCompStaticLines():Void {
        if (getChildByName("compStaticLines") != null) {
            removeChild(getChildByName("compStaticLines"));
        }
    }

    public function hideAllLines():Void {
        if (getChildByName("MOVLine") != null) {
            removeChild(getChildByName("MOVLine"));
        }
        if (getChildByName("LDILine") != null) {
            removeChild(getChildByName("LDILine"));
        }
        if (getChildByName("ALULine") != null) {
            removeChild(getChildByName("ALULine"));
        }
        if (getChildByName("SDALine") != null) {
            removeChild(getChildByName("SDALine"));
        }
        if (getChildByName("LDALine") != null) {
            removeChild(getChildByName("LDALine"));
        }
        if (getChildByName("INPLine") != null) {
            removeChild(getChildByName("INPLine"));
        }
        if (getChildByName("OUTLine") != null) {
            removeChild(getChildByName("OUTLine"));
        }
        if (getChildByName("JELine") != null) {
            removeChild(getChildByName("JELine"));
        }
        if (getChildByName("JNELine") != null) {
            removeChild(getChildByName("JNELine"));
        }
        if (getChildByName("JMPLine") != null) {
            removeChild(getChildByName("JMPLine"));
        }
    }

}
