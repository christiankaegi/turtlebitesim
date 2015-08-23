package view.component;

import model.vo.InstructionVO;
import utilities.NumberFormat;
import utilities.NumberFormat;
import view.elements.LabelButton;
import view.elements.OpcodeMenu;
import openfl.text.TextFormatAlign;
import view.elements.SimpleRectangle;
import openfl.text.TextField;
import openfl.text.TextFormat;
import events.AppEvent;
import openfl.events.MouseEvent;
import openfl.display.BitmapData;
import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.Assets;
import openfl.events.Event;

class EnterInstruction extends Sprite {

    private var initialInstruction:InstructionVO;
    private var selectedButtonID:Int;
    private var lineButtons:Array<Sprite>;
    private var lineButtonsContainer:Sprite;
    private var closeButton:LabelButton;
    private var bg:Bitmap;
    private var lines:Array<Bitmap>;
    private var linesContainer:Sprite;
    private var tfAssemblerOpcode:TextField;
    private var opcodeMenuButton:Sprite;
    private var tfAssemblerAddress:TextField;
    private var tfAssemblerContainer:Sprite;
    private var codeArr:Array<Bool>;
    private var posX:Float = 309 * AppConstants.SCALE_FACTOR;
    private var posY:Float = 447 * AppConstants.SCALE_FACTOR;
    private var opcodeMenu:OpcodeMenu;
    private var barriere:SimpleRectangle;

    public function new(initialInstruction:InstructionVO) {
        super();
        this.initialInstruction = initialInstruction;
        addEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
    }

    private function addedToStageHandler(event:Event):Void {
        removeEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
        lines = new Array<Bitmap>();
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/enterInstruction_BG.png", bgLoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/enterInstruction_line0.png", line0LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/enterInstruction_line1.png", line1LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/enterInstruction_line2.png", line2LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/enterInstruction_line3.png", line3LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/enterInstruction_line4.png", line4LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/enterInstruction_line5.png", line5LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/enterInstruction_line6.png", line6LoadCompleteHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/enterInstruction_line7.png", line7LoadCompleteHandler);
        linesContainer = new Sprite();
        addChild(linesContainer);
        createCloseButton();
        createTfAssembler();
        createLineButtons();
        createOpcodeMenu();
        createBarriere();
        setInitialOutput();
    }

    private function bgLoadCompleteHandler(bmd:BitmapData):Void {
        bg = new Bitmap(bmd);
        bg.name = "enterInstructionBg";
        bg.x = posX;
        bg.y = posY;
        bg.scaleX = bg.scaleY = AppConstants.SCALE_FACTOR;
        addChild(bg);
    }

    private function line0LoadCompleteHandler(bmd:BitmapData):Void {
        var i:Int = 0;
        lines[i] = new Bitmap(bmd);
        lines[i].name = "enterInstructionLine" + i;
        lines[i].x = posX;
        lines[i].y = posY;
        lines[i].scaleX = lines[i].scaleY = AppConstants.SCALE_FACTOR;
    }

    private function line1LoadCompleteHandler(bmd:BitmapData):Void {
        var i:Int = 1;
        lines[i] = new Bitmap(bmd);
        lines[i].name = "enterInstructionLine" + i;
        lines[i].x = posX;
        lines[i].y = posY;
        lines[i].scaleX = lines[i].scaleY = AppConstants.SCALE_FACTOR;
    }

    private function line2LoadCompleteHandler(bmd:BitmapData):Void {
        var i:Int = 2;
        lines[i] = new Bitmap(bmd);
        lines[i].name = "enterInstructionLine" + i;
        lines[i].x = posX;
        lines[i].y = posY;
        lines[i].scaleX = lines[i].scaleY = AppConstants.SCALE_FACTOR;
    }

    private function line3LoadCompleteHandler(bmd:BitmapData):Void {
        var i:Int = 3;
        lines[i] = new Bitmap(bmd);
        lines[i].name = "enterInstructionLine" + i;
        lines[i].x = posX;
        lines[i].y = posY;
        lines[i].scaleX = lines[i].scaleY = AppConstants.SCALE_FACTOR;
    }

    private function line4LoadCompleteHandler(bmd:BitmapData):Void {
        var i:Int = 4;
        lines[i] = new Bitmap(bmd);
        lines[i].name = "enterInstructionLine" + i;
        lines[i].x = posX;
        lines[i].y = posY;
        lines[i].scaleX = lines[i].scaleY = AppConstants.SCALE_FACTOR;
    }

    private function line5LoadCompleteHandler(bmd:BitmapData):Void {
        var i:Int = 5;
        lines[i] = new Bitmap(bmd);
        lines[i].name = "enterInstructionLine" + i;
        lines[i].x = posX;
        lines[i].y = posY;
        lines[i].scaleX = lines[i].scaleY = AppConstants.SCALE_FACTOR;
    }

    private function line6LoadCompleteHandler(bmd:BitmapData):Void {
        var i:Int = 6;
        lines[i] = new Bitmap(bmd);
        lines[i].name = "enterInstructionLine" + i;
        lines[i].x = posX;
        lines[i].y = posY;
        lines[i].scaleX = lines[i].scaleY = AppConstants.SCALE_FACTOR;
    }

    private function line7LoadCompleteHandler(bmd:BitmapData):Void {
        var i:Int = 7;
        lines[i] = new Bitmap(bmd);
        lines[i].name = "enterInstructionLine" + i;
        lines[i].x = posX;
        lines[i].y = posY;
        lines[i].scaleX = lines[i].scaleY = AppConstants.SCALE_FACTOR;
        dispatchEvent(new AppEvent(AppEvent.VIEW_READY));
    }

    private function createTfAssembler():Void {
        tfAssemblerContainer = new Sprite();

        tfAssemblerOpcode = getBasicTextField();
        tfAssemblerOpcode.text = "NOP";
        tfAssemblerContainer.addChild(tfAssemblerOpcode);

        tfAssemblerAddress = getBasicTextField();
        tfAssemblerAddress.x = tfAssemblerOpcode.x + tfAssemblerOpcode.width + 4 * AppConstants.SCALE_FACTOR;
        tfAssemblerAddress.text = "";
        tfAssemblerContainer.addChild(tfAssemblerAddress);

        tfAssemblerContainer.x = 312 * AppConstants.SCALE_FACTOR;
        tfAssemblerContainer.y = 455 * AppConstants.SCALE_FACTOR;

        addChild(tfAssemblerContainer);
    }

    private function createLineButtons():Void {
        lineButtonsContainer = new Sprite();
        lineButtons = new Array<Sprite>();
        var id:Int = 7;
        for (i in 0 ... 8) {
            lineButtons[i] = new Sprite();
            var s:SimpleRectangle = new SimpleRectangle(30 * AppConstants.SCALE_FACTOR, 30 * AppConstants.SCALE_FACTOR, 0xff00ff, 0);
            lineButtons[i].addChild(s);
            lineButtons[i].name = "lineButton" + id;
            lineButtons[i].buttonMode = true;
            if (i > 0) {
                lineButtons[i].x = lineButtons[i - 1].x + lineButtons[i - 1].width + 17 * AppConstants.SCALE_FACTOR;
            }
            lineButtonsContainer.addChild(lineButtons[i]);
            id--;
        }
// Hack: Probleme mit HTML und Neko Target!
        lineButtons[0].addEventListener(MouseEvent.MOUSE_DOWN, lineButton0Handler);
        lineButtons[1].addEventListener(MouseEvent.MOUSE_DOWN, lineButton1Handler);
        lineButtons[2].addEventListener(MouseEvent.MOUSE_DOWN, lineButton2Handler);
        lineButtons[3].addEventListener(MouseEvent.MOUSE_DOWN, lineButton3Handler);
        lineButtons[4].addEventListener(MouseEvent.MOUSE_DOWN, lineButton4Handler);
        lineButtons[5].addEventListener(MouseEvent.MOUSE_DOWN, lineButton5Handler);
        lineButtons[6].addEventListener(MouseEvent.MOUSE_DOWN, lineButton6Handler);
        lineButtons[7].addEventListener(MouseEvent.MOUSE_DOWN, lineButton7Handler);
        lineButtonsContainer.x = 325 * AppConstants.SCALE_FACTOR;
        lineButtonsContainer.y = 512 * AppConstants.SCALE_FACTOR;
        addChild(lineButtonsContainer);
    }

    private function createCloseButton():Void {
        closeButton = new LabelButton(100, "Schliessen");
        closeButton.x = bg.x + bg.width - 100 * AppConstants.SCALE_FACTOR;
        closeButton.y = bg.y - LabelButton.BTN_HEIGHT;
        closeButton.addEventListener(AppEvent.DATA, closeButtonHandler);
        addChild(closeButton);
    }

    private function createBarriere():Void {
        barriere = new SimpleRectangle(100 * AppConstants.SCALE_FACTOR, 5 * AppConstants.SCALE_FACTOR, 0xDD0000);
        barriere.x = bg.x + bg.width / 2 - barriere.width / 2;
        barriere.y = bg.y + bg.height - 2 * AppConstants.SCALE_FACTOR;
        barriere.visible = false;
        addChild(barriere);
    }

    private function createOpcodeMenu():Void {
        opcodeMenu = new OpcodeMenu();
        opcodeMenu.x = posX - 110 * AppConstants.SCALE_FACTOR;
        opcodeMenu.y = posY - LabelButton.BTN_HEIGHT;
        opcodeMenu.visible = false;
        opcodeMenu.addEventListener(AppEvent.DATA, opcodeMenuHandler);
        addChild(opcodeMenu);
        opcodeMenuButton = new Sprite();
        var s:SimpleRectangle = new SimpleRectangle(tfAssemblerOpcode.width, 48 * AppConstants.SCALE_FACTOR, 0xff00ff, 0);
        opcodeMenuButton.addChild(s);
        opcodeMenuButton.buttonMode = true;
        opcodeMenuButton.addEventListener(MouseEvent.MOUSE_DOWN, opcodeMenuButtonHandler);
        opcodeMenuButton.x = tfAssemblerContainer.x + tfAssemblerOpcode.x;
        opcodeMenuButton.y = tfAssemblerContainer.y + tfAssemblerOpcode.y - 5 * AppConstants.SCALE_FACTOR;
        addChild(opcodeMenuButton);
    }

    private function opcodeMenuButtonHandler(event:MouseEvent):Void {
        opcodeMenu.visible = !opcodeMenu.visible;
    }

    private function opcodeMenuHandler(event:AppEvent):Void {
        opcodeMenu.visible = false;
        barriere.visible = true;
        dispatchEvent(new AppEvent(AppEvent.DATA, {id:"opcodeMenu", opcode:event.data.opcode, address:event.data.address}));
    }

/**
        Hack! Wegen Problemen mit HTML 5 und Neko Targets
**/
    private function lineButton0Handler(event:MouseEvent):Void {
        lineButtonsHandler(7);
    }
    private function lineButton1Handler(event:MouseEvent):Void {
        lineButtonsHandler(6);
    }
    private function lineButton2Handler(event:MouseEvent):Void {
        lineButtonsHandler(5);
    }
    private function lineButton3Handler(event:MouseEvent):Void {
        lineButtonsHandler(4);
    }
    private function lineButton4Handler(event:MouseEvent):Void {
        lineButtonsHandler(3);
    }
    private function lineButton5Handler(event:MouseEvent):Void {
        lineButtonsHandler(2);
    }
    private function lineButton6Handler(event:MouseEvent):Void {
        lineButtonsHandler(1);
    }
    private function lineButton7Handler(event:MouseEvent):Void {
        lineButtonsHandler(0);
    }

    private function lineButtonsHandler(id:Int):Void {
        var on:Bool = false;
        if (linesContainer.getChildByName("enterInstructionLine" + id) != null) {
            on = true;
        }
        barriere.visible = true;
        dispatchEvent(new AppEvent(AppEvent.DATA, {id:id, on:on}));
    }

    private function closeButtonHandler(event:AppEvent):Void {
        dispatchEvent(new AppEvent(AppEvent.DATA, {id:"closeButton"}));
    }

    private function getBasicTextField():TextField {
        var tf:TextField = new TextField();
        tf.defaultTextFormat = new TextFormat("Consolas Bold", 40 * AppConstants.SCALE_FACTOR, 0xffffff, null, null, null, null, null, TextFormatAlign.CENTER);
        tf.embedFonts = true;
        tf.selectable = false;
        tf.width = 190 * AppConstants.SCALE_FACTOR;
        tf.height = 50 * AppConstants.SCALE_FACTOR;
        return tf;
    }

    private function setInitialOutput():Void {
        setTfOpcode(initialInstruction.asmOpcode);
        setTfAddress(initialInstruction.asmAddress);
        showLines(initialInstruction.codeOpcode, initialInstruction.codeAddress);
    }


/**
    Public Methods
**/

    public function getOpcode():String {
        var t:String = "";
        for (i in 4 ... 8) {
            if (linesContainer.getChildByName("enterInstructionLine" + i) == null) {
                t = "0" + t;
            } else {
                t = "1" + t;
            }
        }
        return t;
    }

    public function getAddress():String {
        var t:String = "";
        for (i in 0 ... 4) {
            if (linesContainer.getChildByName("enterInstructionLine" + i) == null) {
                t = "0" + t;
            } else {
                t = "1" + t;
            }
        }
        return t;
    }

    public function setTfOpcode(value:String):Void {
        tfAssemblerOpcode.text = value;
    }

    public function setTfAddress(value:String):Void {
        tfAssemblerAddress.text = value;
    }

    public function hideBarriere():Void {
        barriere.visible = false;
    }

    public function showLines(opcode:String, address:String):Void {
        var codeArr:Array<Bool> = NumberFormat.binaryToArray(opcode + "" + address);
        var pos:Int = 7;
        for (i in 0 ... 8) {
            if (linesContainer.getChildByName("enterInstructionLine" + pos) == null) {
                if (codeArr[i]) {
                    linesContainer.addChild(lines[pos]);
                }
            } else if (!codeArr[i]) {
                linesContainer.removeChild(lines[pos]);
            }
            pos--;
        }
    }

    public function showLine(id:Int):Void {
        if (linesContainer.getChildByName("enterInstructionLine" + id) == null) {
            linesContainer.addChild(lines[id]);
        }
    }

    public function hideLine(id:Int):Void {
        if (linesContainer.getChildByName("enterInstructionLine" + id) != null) {
            linesContainer.removeChild(lines[id]);
        }
    }

    public function destroy():Void {
        removeChild(bg);
        closeButton.destroy();
        removeChild(closeButton);
        removeChild(barriere);
        lineButtons[0].removeEventListener(MouseEvent.MOUSE_DOWN, lineButton0Handler);
        lineButtons[1].removeEventListener(MouseEvent.MOUSE_DOWN, lineButton1Handler);
        lineButtons[2].removeEventListener(MouseEvent.MOUSE_DOWN, lineButton2Handler);
        lineButtons[3].removeEventListener(MouseEvent.MOUSE_DOWN, lineButton3Handler);
        lineButtons[4].removeEventListener(MouseEvent.MOUSE_DOWN, lineButton4Handler);
        lineButtons[5].removeEventListener(MouseEvent.MOUSE_DOWN, lineButton5Handler);
        lineButtons[6].removeEventListener(MouseEvent.MOUSE_DOWN, lineButton6Handler);
        lineButtons[7].removeEventListener(MouseEvent.MOUSE_DOWN, lineButton7Handler);
        for (i in 0 ... 8) {
            if (linesContainer.getChildByName("enterInstructionLine" + i) != null) {
                linesContainer.removeChild(linesContainer.getChildByName("enterInstructionLine" + i));
            }
            lineButtonsContainer.removeChild(lineButtons[i]);
        }
        removeChild(lineButtonsContainer);
        removeChild(linesContainer);
        tfAssemblerContainer.removeChild(tfAssemblerOpcode);
        tfAssemblerContainer.removeChild(tfAssemblerAddress);
        removeChild(tfAssemblerContainer);
        opcodeMenu.destroy();
        removeChild(opcodeMenu);
    }

}
