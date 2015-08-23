package view.component;

import openfl.text.TextFieldAutoSize;
import model.vo.InstructionVO;
import model.data.ProgramData;
import view.elements.RomRow;
import openfl.text.TextFormat;
import openfl.text.TextField;
import view.elements.LabelButton;
import view.elements.LabelButton;
import view.elements.SimpleRectangle;
import events.AppEvent;
import openfl.display.BitmapData;
import openfl.display.Bitmap;
import openfl.events.MouseEvent;
import openfl.display.Sprite;
import openfl.Assets;
import openfl.events.Event;

class EditRom extends Sprite {

    private var programData:ProgramData;
    private var bmpData:BitmapData;
    private var bmp:Bitmap;
    private var bg:SimpleRectangle;

    private var btnWidth:Float = 125;
    private var buttonGap:Int = 5;

    private var romRows:Array<RomRow>;
    private var romRowsContainer:Sprite;
    private var tfSampleTitle:TextField;
    private var buttonContainer:Sprite;
    private var loadButton:LabelButton;
    private var saveButton:LabelButton;
    private var sample1Button:LabelButton;
    private var sample2Button:LabelButton;
    private var sample3Button:LabelButton;
    private var clearRomButton:LabelButton;
    private var cancelButton:LabelButton;
    private var okButton:LabelButton;


    public function new(programData:ProgramData) {
        super();
        this.programData = programData;
        addEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
    }

    private function addedToStageHandler(event:Event):Void {
        removeEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/EditRomPopup2048.png", bmpLoadCompleteHandler, true);
    }

    private function bmpLoadCompleteHandler(bmd:BitmapData):Void {
        bmpData = bmd;
        bmp = new Bitmap(bmpData);
        bmp.name = "editRomPopup";
#if ios
#else
        bmp.scaleX = bmp.scaleY = 0.5;
#end
        addChild(bmp);
        buttonContainer = new Sprite();
        buttonContainer.x = 855 * AppConstants.SCALE_FACTOR;
        buttonContainer.y = 80 * AppConstants.SCALE_FACTOR;
        addChild(buttonContainer);
        createOkButton();
        createCancelButton();
        createLoadButton();
        createSaveButton();
        createSampleButtons();
        createRomRows();
        dispatchEvent(new AppEvent(AppEvent.VIEW_READY));
    }

    private function createOkButton():Void {
        okButton = new LabelButton(btnWidth, "OK");
        okButton.name = "okButton";
        okButton.y = 610 * AppConstants.SCALE_FACTOR;
        okButton.addEventListener(AppEvent.DATA, dataEventHandler);
        buttonContainer.addChild(okButton);
    }

    private function createCancelButton():Void {
        cancelButton = new LabelButton(btnWidth, "Abbrechen");
        cancelButton.name = "cancelButton";
        cancelButton.y = okButton.y - LabelButton.BTN_HEIGHT - buttonGap * AppConstants.SCALE_FACTOR;
        cancelButton.addEventListener(AppEvent.DATA, dataEventHandler);
        buttonContainer.addChild(cancelButton);
    }

    private function createLoadButton():Void {
        loadButton = new LabelButton(btnWidth, "Laden", false, true);
        buttonContainer.addChild(loadButton);
    }

    private function createSaveButton():Void {
        saveButton = new LabelButton(btnWidth, "Speichern", false, true);
        saveButton.y = loadButton.y + LabelButton.BTN_HEIGHT + buttonGap * AppConstants.SCALE_FACTOR;
        buttonContainer.addChild(saveButton);
    }

    private function createSampleButtons():Void {
        tfSampleTitle = new TextField();
        tfSampleTitle.defaultTextFormat = new TextFormat("Myriad Pro", 14 * AppConstants.SCALE_FACTOR, 0x333333);
        tfSampleTitle.embedFonts = true;
        tfSampleTitle.y = saveButton.y + LabelButton.BTN_HEIGHT + 8 * buttonGap * AppConstants.SCALE_FACTOR;
        tfSampleTitle.autoSize = TextFieldAutoSize.LEFT;
        tfSampleTitle.text = "Lade Beispiele:";
        buttonContainer.addChild(tfSampleTitle);

        sample1Button = new LabelButton(btnWidth, "ADD,SUB,RAM");
        sample1Button.name = "sample1Button";
        sample1Button.y = tfSampleTitle.y + 20 * AppConstants.SCALE_FACTOR;
        sample1Button.addEventListener(AppEvent.DATA, dataEventHandler);
        buttonContainer.addChild(sample1Button);

        sample2Button = new LabelButton(btnWidth, "WELCOME!");
        sample2Button.name = "sample2Button";
        sample2Button.y = sample1Button.y + LabelButton.BTN_HEIGHT + buttonGap * AppConstants.SCALE_FACTOR;
        sample2Button.addEventListener(AppEvent.DATA, dataEventHandler);
        buttonContainer.addChild(sample2Button);

        sample3Button = new LabelButton(btnWidth, "INC,DEC,Jump");
        sample3Button.name = "sample3Button";
        sample3Button.y = sample2Button.y + LabelButton.BTN_HEIGHT + buttonGap * AppConstants.SCALE_FACTOR;
        sample3Button.addEventListener(AppEvent.DATA, dataEventHandler);
        buttonContainer.addChild(sample3Button);
    }

    private function createRomRows():Void {
        romRowsContainer = new Sprite();
        romRowsContainer.x = 38 * AppConstants.SCALE_FACTOR;
        romRowsContainer.y = 92 * AppConstants.SCALE_FACTOR;
        romRows = new Array<RomRow>();
        for (i in 0 ... 16) {
            romRows[i] = new RomRow(programData.getInstruction(i));
            romRows[i].name = "row" + i;
            if (i > 0) {
                romRows[i].y = romRows[i-1].y + 41 * AppConstants.SCALE_FACTOR;
            }
            romRowsContainer.addChild(romRows[i]);
        }
        addChild(romRowsContainer);
    }

    public function populateRomRows(instructions:Array<InstructionVO>):Void {
        for (i in 0 ... 16) {
            romRows[i].clear();
        }
        for (i in 0 ... instructions.length) {
            romRows[i].populate(instructions[i]);
        }
    }

    private function dataEventHandler(event:AppEvent):Void {
        dispatchEvent(new AppEvent(AppEvent.DATA, {id:event.data.id}));
    }

/**
    Public Methods
**/

    public function setActiveSample(sample:UInt):Void {
        sample1Button.setActive(false);
        sample2Button.setActive(false);
        sample3Button.setActive(false);
        switch(sample) {
            case 1 :
                sample1Button.setActive(true);
            case 2 :
                sample2Button.setActive(true);
            case 3 :
                sample3Button.setActive(true);
        }

    }

    public function destroy():Void {
        okButton.removeEventListener(AppEvent.DATA, dataEventHandler);
        cancelButton.removeEventListener(AppEvent.DATA, dataEventHandler);
        sample1Button.removeEventListener(AppEvent.DATA, dataEventHandler);
        sample2Button.removeEventListener(AppEvent.DATA, dataEventHandler);
        sample3Button.removeEventListener(AppEvent.DATA, dataEventHandler);
        okButton.destroy();
        buttonContainer.removeChild(okButton);
        cancelButton.destroy();
        buttonContainer.removeChild(cancelButton);
        loadButton.destroy();
        buttonContainer.removeChild(loadButton);
        saveButton.destroy();
        buttonContainer.removeChild(saveButton);
        buttonContainer.removeChild(tfSampleTitle);
        sample1Button.destroy();
        buttonContainer.removeChild(sample1Button);
        sample2Button.destroy();
        buttonContainer.removeChild(sample2Button);
        sample3Button.destroy();
        buttonContainer.removeChild(sample3Button);
        removeChild(buttonContainer);
        bmpData.dispose();
        removeChild(bmp);
        for (i in 0 ... 16) {
            romRows[i].destroy();
            romRowsContainer.removeChild(romRows[i]);
        }
        removeChild(romRowsContainer);
    }

}
