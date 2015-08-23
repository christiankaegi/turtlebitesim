package view.component;
import openfl.text.TextFormatAlign;
import openfl.text.TextFormat;
import openfl.text.TextField;
import view.elements.DetailAccumulatorLines;
import view.elements.OneBitMemory;
import view.elements.SimpleRectangle;
import view.elements.LabelButton;
import events.AppEvent;
import openfl.display.BitmapData;
import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.Assets;
import openfl.events.Event;
import openfl.events.MouseEvent;

class DetailAccumulator extends Sprite {

    private var accuBottomLayer:Bitmap;
    private var accuBottomLayerBmpData:BitmapData;

    private var oneBitMemory:OneBitMemory;
    private var oneBitMemoryContainer:Sprite;
    private var oneBitMemoryInputActive:Bool;
    private var oneBitMemorySetActive:Bool;

    private var accuLinesContainer:Sprite;
    private var accuLines:DetailAccumulatorLines;

    private var closeButton:LabelButton;
    private var oneBitButton:Sprite;


    private var tfOutput:TextField;


    public function new() {
        super();
        addEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
    }

    private function addedToStageHandler(event:Event):Void {
        removeEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/accuPopup_bottomLayer2048.png", accuBottomLayerLoadCompleteHandler);
    }

    private function accuBottomLayerLoadCompleteHandler(bmd:BitmapData):Void {
        accuBottomLayerBmpData = bmd;
        accuBottomLayer = new Bitmap(accuBottomLayerBmpData);
        accuBottomLayer.name = "accuBottomLayer";
#if ios
#else
        accuBottomLayer.scaleX = accuBottomLayer.scaleY = 0.5;
#end
        addChild(accuBottomLayer);
        accuLines = new DetailAccumulatorLines();
        addChild(accuLines);
        oneBitMemoryContainer = new Sprite();
        addChild(oneBitMemoryContainer);
        createOutputText();
        createCloseButton();
        createOneBitButton();
        dispatchEvent(new AppEvent(AppEvent.VIEW_READY));
    }

    private function createCloseButton():Void {
        closeButton = new LabelButton(100, "Schliessen");
        closeButton.name = "closeButton";
        closeButton.x = 880 * AppConstants.SCALE_FACTOR;
        closeButton.y = 565 * AppConstants.SCALE_FACTOR;
        closeButton.addEventListener(AppEvent.DATA, dataEventHandler);
        addChild(closeButton);
    }

    private function createOneBitButton():Void {
        var s:SimpleRectangle = new SimpleRectangle(60 * AppConstants.SCALE_FACTOR, 33 * AppConstants.SCALE_FACTOR, 0xFF00FF, 0);
        oneBitButton = new Sprite();
        oneBitButton.addChild(s);
        oneBitButton.buttonMode = true;
        oneBitButton.x = 415 * AppConstants.SCALE_FACTOR;
        oneBitButton.y = 325 * AppConstants.SCALE_FACTOR;
        oneBitButton.addEventListener(MouseEvent.MOUSE_DOWN, oneBitButtonEventHandler);
        addChild(oneBitButton);
    }

    private function createOutputText():Void {
        tfOutput = new TextField();
        tfOutput.defaultTextFormat = new TextFormat("Consolas Bold", 80 * AppConstants.SCALE_FACTOR, 0x00FF00, null, null, null, null, null, TextFormatAlign.CENTER);
        tfOutput.embedFonts = true;
        tfOutput.selectable = false;
        tfOutput.border = true;
        tfOutput.borderColor = 0xA0A0A0;
        tfOutput.background = true;
        tfOutput.backgroundColor = 0x000000;
        tfOutput.width = 100 * AppConstants.SCALE_FACTOR;
        tfOutput.height = 80 * AppConstants.SCALE_FACTOR;
        tfOutput.x = 465 * AppConstants.SCALE_FACTOR;
        tfOutput.y = 125 * AppConstants.SCALE_FACTOR;
        tfOutput.text = "";
        addChild(tfOutput);
    }

    private function oneBitButtonEventHandler(event:MouseEvent):Void {
        if (oneBitMemory != null) {
            oneBitMemory.destroy();
            oneBitMemoryContainer.removeChild(oneBitMemory);
            oneBitMemory = null;
        } else {
            oneBitMemory = new OneBitMemory(oneBitMemoryInputActive, oneBitMemorySetActive);
            oneBitMemory.addEventListener(AppEvent.DATA, dataEventHandler);
            oneBitMemory.name = "oneBitMemory";
            oneBitMemoryContainer.addChild(oneBitMemory);
        }
    }

    private function dataEventHandler(event:AppEvent):Void {
        dispatchEvent(new AppEvent(AppEvent.DATA, {id:event.data.id}));
    }

/**
    Public Methods
**/

    public function setOutputText(value:String):Void {
        tfOutput.text = value;
    }

    public function showInputLines(codeArr:Array<Bool>):Void {
        accuLines.showInputLines(codeArr);
        oneBitMemoryInputActive = codeArr[4];
        if (oneBitMemory != null) {
            oneBitMemory.setStatus(oneBitMemoryInputActive, oneBitMemorySetActive);
        }
    }

    public function showEnableLine():Void {
// Clock
        accuLines.showEnableLine();
    }

    public function showEnablerOutLines(codeArr:Array<Bool>):Void {
        accuLines.showEnablerOutLines(codeArr);
    }

    public function hideEnablerOutLines():Void {
        accuLines.hideEnablerOutLines();
    }

    public function hideEnableLine():Void {
        accuLines.hideEnableLine();
    }

    public function showSetLine():Void {
        oneBitMemorySetActive = true;
        accuLines.showSetLine();
        if (oneBitMemory != null) {
            oneBitMemory.setStatus(oneBitMemoryInputActive, oneBitMemorySetActive);
        }
    }

    public function hideSetLine():Void {
        oneBitMemorySetActive = false;
        accuLines.hideSetLine();
        if (oneBitMemory != null) {
            oneBitMemory.setStatus(oneBitMemoryInputActive, oneBitMemorySetActive);
        }
    }

    public function destroy():Void {
        accuBottomLayerBmpData.dispose();
        removeChild(accuBottomLayer);
        removeChild(closeButton);
        accuLines.destroy();
        removeChild(accuLines);
        if (oneBitMemory != null) {
            oneBitMemory.removeEventListener(AppEvent.DATA, dataEventHandler);
            oneBitMemory.destroy();
            oneBitMemoryContainer.removeChild(oneBitMemory);
            oneBitMemory = null;
        }
        removeChild(oneBitMemoryContainer);
        removeChild(tfOutput);
    }
}
