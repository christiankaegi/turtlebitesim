/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package view.component;

import model.data.AppData;
import model.vo.FrequencyVO;
import AppConstants;
import utilities.TextFieldFactory;
import view.elements.SimpleRectangle;
import openfl.text.TextField;
import view.elements.LabelButton;
import events.AppEvent;
import openfl.display.Shape;
import openfl.display.Sprite;
import openfl.events.Event;

class MainMenu extends Sprite {

#if ios
    private static var NAVIG_BG_HEIGHT:Int = 240;
#else
    private static var NAVIG_BG_HEIGHT:Int = 120;
#end

    private var appData:AppData;

    private var menuContainer:Sprite;
    private var bg:Shape;
    private var stepController:Sprite;

    private var buttonWidth:Float = 60;
    private var buttonGap:Int = 5;
    private var resetButton:LabelButton;
    private var powerButton:LabelButton;
    private var playButton:LabelButton;
    private var manualClockButton:LabelButton;
    private var hertzButton:LabelButton;
    private var hertzSubmenuButtons:Array<LabelButton>;

    private var middleMenuContainer:Sprite;
    private var showUnitsButton:LabelButton;
    private var showFlowButton:LabelButton;
    private var showHighlightButton:LabelButton;
    private var componentsButton:LabelButton;
    private var componentsSubmenuButtons:Array<LabelButton>;

    private var zoomButton:LabelButton;
    private var editRomButton:LabelButton;

    private var architectureButton:LabelButton;

    private var stepCountContainer:Sprite;
    private var hertzSubmenuContainer:Sprite;
    private var componentsSubmenuContainer:Sprite;
    private var tfStepCount:TextField;

    public function new() {
        super();
        addEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
    }

    private function addedToStageHandler(event:Event):Void {
        removeEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
        menuContainer = new Sprite();
        addChild(menuContainer);
        createBG();
        createStepController();
        createZoomButton();
        createEditRomButton();
        createMiddleMenuContainer();
        createMiddleMenuButtons();
        createComponentsSubmenu();
        createArchitectureButton();
        showButtons(false);
        dispatchEvent(new AppEvent(AppEvent.VIEW_READY));
    }

    private function createBG():Void {
        bg = new Shape();
        bg.graphics.beginFill(0x383838, 1);
#if ios
        bg.graphics.drawRect(0, 0, 2048, NAVIG_BG_HEIGHT);
        menuContainer.y = 1300;
#else
        bg.graphics.drawRect(0, 0, stage.stageWidth, NAVIG_BG_HEIGHT);
        menuContainer.y = stage.stageHeight - NAVIG_BG_HEIGHT;
#end
        menuContainer.addChild(bg);
    }

    private function createStepController():Void {
        stepController = new Sprite();

        resetButton = new LabelButton(buttonWidth, "Reset");
        resetButton.name = "resetButton";
        resetButton.addEventListener(AppEvent.DATA, dataEventHandler);
        stepController.addChild(resetButton);

        stepCountContainer = new Sprite();
        var stepCountBG:SimpleRectangle = new SimpleRectangle(buttonWidth * AppConstants.SCALE_FACTOR, LabelButton.BTN_HEIGHT, 0x000000, 1);
        stepCountContainer.x = resetButton.x + buttonWidth * AppConstants.SCALE_FACTOR + buttonGap * AppConstants.SCALE_FACTOR;
        stepCountContainer.addChild(stepCountBG);
        tfStepCount = new TextField();
        tfStepCount.defaultTextFormat = TextFieldFactory.STEP_TEXT_FORMAT;
        tfStepCount.embedFonts = true;
        tfStepCount.textColor = TextFieldFactory.TEXT_ACTIVE_COLOR;
        tfStepCount.width = buttonWidth * AppConstants.SCALE_FACTOR;
        tfStepCount.height = LabelButton.BTN_HEIGHT;
        tfStepCount.y = 15 * AppConstants.SCALE_FACTOR;
        tfStepCount.selectable = false;
        tfStepCount.text = "";
        stepCountContainer.addChild(tfStepCount);
        stepController.addChild(stepCountContainer);

        powerButton = new LabelButton(buttonWidth, "Ein");
        powerButton.name = "powerButton";
        powerButton.addEventListener(AppEvent.DATA, dataEventHandler);
        powerButton.y = resetButton.y + LabelButton.BTN_HEIGHT + buttonGap * AppConstants.SCALE_FACTOR;
        stepController.addChild(powerButton);

        playButton = new LabelButton(buttonWidth, "Play");
        playButton.name = "playButton";
        playButton.addEventListener(AppEvent.DATA, dataEventHandler);
        playButton.y = powerButton.y;
        playButton.x = powerButton.x + buttonWidth * AppConstants.SCALE_FACTOR + buttonGap * AppConstants.SCALE_FACTOR;
        stepController.addChild(playButton);

        manualClockButton = new LabelButton(buttonWidth, "Takt");
        manualClockButton.name = "manualClockButton";
        manualClockButton.addEventListener(AppEvent.DATA, dataEventHandler);
        manualClockButton.y = playButton.y;
        manualClockButton.x = playButton.x + buttonWidth * AppConstants.SCALE_FACTOR + buttonGap * AppConstants.SCALE_FACTOR;
        stepController.addChild(manualClockButton);

        hertzButton = new LabelButton(buttonWidth, "16Hz");
        hertzButton.name = "hertzButton";
        hertzButton.addEventListener(AppEvent.DATA, dataEventHandler);
        hertzButton.y = resetButton.y;
        hertzButton.x = manualClockButton.x;
        stepController.addChild(hertzButton);

        stepController.x = 2 * buttonGap * AppConstants.SCALE_FACTOR;
        stepController.y = 2 * buttonGap * AppConstants.SCALE_FACTOR;
        menuContainer.addChild(stepController);
    }

    private function createZoomButton():Void {
        var w:Float = 96;
        zoomButton = new LabelButton(w, "Zoom", true);
        zoomButton.name = "zoomButton";
        zoomButton.addEventListener(AppEvent.DATA, dataEventHandler);
        zoomButton.y = 2 * buttonGap * AppConstants.SCALE_FACTOR;
#if ios
        zoomButton.x = 2048 - w * AppConstants.SCALE_FACTOR - 2 * buttonGap * AppConstants.SCALE_FACTOR;
#else
        zoomButton.x = stage.stageWidth - w - 2 * buttonGap * AppConstants.SCALE_FACTOR;
#end
        menuContainer.addChild(zoomButton);
    }

    private function createEditRomButton():Void {
        var w:Float = 96;
        editRomButton = new LabelButton(w, "Edit ROM");
        editRomButton.name = "editRomButton";
        editRomButton.addEventListener(AppEvent.DATA, dataEventHandler);
        editRomButton.x = zoomButton.x;
        editRomButton.y = zoomButton.y + LabelButton.BTN_HEIGHT + buttonGap * AppConstants.SCALE_FACTOR;
        menuContainer.addChild(editRomButton);
    }

    public function createHertzSubmenu(vo:Array<FrequencyVO>) {
        hertzSubmenuContainer = new Sprite();
        hertzSubmenuButtons = new Array<LabelButton>();
        for (i in 0 ... vo.length) {
            hertzSubmenuButtons[i] = new LabelButton(buttonWidth, vo[i].label);
            hertzSubmenuButtons[i].name = "hertzSubmenuButton" + i;
            hertzSubmenuButtons[i].addEventListener(AppEvent.DATA, dataEventHandler);
            if (i > 0) {
                hertzSubmenuButtons[i].y = hertzSubmenuButtons[i - 1].y + LabelButton.BTN_HEIGHT - 1;
            }
            hertzSubmenuContainer.addChild(hertzSubmenuButtons[i]);
        }
        hertzSubmenuContainer.x = hertzButton.x;
        hertzSubmenuContainer.y = hertzButton.y - hertzSubmenuContainer.height - 1;
        hertzSubmenuContainer.visible = false;
        stepController.addChild(hertzSubmenuContainer);
    }

    private function createComponentsSubmenu():Void {
        componentsSubmenuContainer = new Sprite();
        componentsSubmenuButtons = new Array<LabelButton>();
        var w:Float = 125;
        var i:UInt = 0;
        componentsSubmenuButtons[i++] = new LabelButton(w, "Bus", false, true);
        componentsSubmenuButtons[i++] = new LabelButton(w, "Gates", false, true);
        componentsSubmenuButtons[i++] = new LabelButton(w, "Comparator", false, true);
        componentsSubmenuButtons[i++] = new LabelButton(w, "Decoder", false, true);
        componentsSubmenuButtons[i++] = new LabelButton(w, "Enabler", false, true);
        componentsSubmenuButtons[i++] = new LabelButton(w, "Register", false, true);
        componentsSubmenuButtons[i++] = new LabelButton(w, "Multiplexer", false, true);
        componentsSubmenuButtons[i++] = new LabelButton(w, "ALU", false, true);

        componentsSubmenuButtons[i] = new LabelButton(w, "Accumulator");
        componentsSubmenuButtons[i].name = "componentsSubmenuButton" + i;
        componentsSubmenuButtons[i++].addEventListener(AppEvent.DATA, dataEventHandler);

        componentsSubmenuButtons[i++] = new LabelButton(w, "Program Counter", false, true);
        componentsSubmenuButtons[i++] = new LabelButton(w, "RAM", false, true);
        componentsSubmenuButtons[i++] = new LabelButton(w, "ROM", false, true);
        componentsSubmenuButtons[i++] = new LabelButton(w, "Clock", false, true);
        componentsSubmenuContainer.addChild(componentsSubmenuButtons[0]);
        for (i in 1 ... componentsSubmenuButtons.length) {
            componentsSubmenuContainer.addChild(componentsSubmenuButtons[i]);
            componentsSubmenuButtons[i].y = componentsSubmenuButtons[i - 1].y + LabelButton.BTN_HEIGHT - 1;
        }
        componentsSubmenuContainer.x = componentsButton.x;
        componentsSubmenuContainer.y = componentsButton.y - componentsSubmenuContainer.height - 1;
        componentsSubmenuContainer.visible = false;
        middleMenuContainer.addChild(componentsSubmenuContainer);
    }

    private function createMiddleMenuContainer():Void {
        middleMenuContainer = new Sprite();
        middleMenuContainer.y = 2 * buttonGap * AppConstants.SCALE_FACTOR;
        middleMenuContainer.x = stepController.x + stepController.width + 4 * buttonGap * AppConstants.SCALE_FACTOR;
        menuContainer.addChild(middleMenuContainer);
    }

    private function createMiddleMenuButtons():Void {
        var w:Float = 125;
        showUnitsButton = new LabelButton(w, "Einheiten", true);
        showUnitsButton.name = "showUnitsButton";
        showUnitsButton.addEventListener(AppEvent.DATA, dataEventHandler);
        middleMenuContainer.addChild(showUnitsButton);

        showFlowButton = new LabelButton(w, "Datenfluss", true);
        showFlowButton.name = "showFlowButton";
        showFlowButton.addEventListener(AppEvent.DATA, dataEventHandler);
        showFlowButton.y = showUnitsButton.height + buttonGap * AppConstants.SCALE_FACTOR;
        middleMenuContainer.addChild(showFlowButton);

        showHighlightButton = new LabelButton(w, "Highlight", true);
        showHighlightButton.name = "showHighlightButton";
        showHighlightButton.addEventListener(AppEvent.DATA, dataEventHandler);
        showHighlightButton.x = showUnitsButton.width + buttonGap * AppConstants.SCALE_FACTOR;
        showHighlightButton.y = showFlowButton.y;
        middleMenuContainer.addChild(showHighlightButton);

        componentsButton = new LabelButton(w, "Komponenten");
        componentsButton.name = "componentsButton";
        componentsButton.addEventListener(AppEvent.DATA, dataEventHandler);
        componentsButton.x = showHighlightButton.x;
        middleMenuContainer.addChild(componentsButton);
    }

    private function createArchitectureButton():Void {
        architectureButton = new LabelButton(120, "Architektur");
        architectureButton.name = "architectureButton";
        architectureButton.addEventListener(AppEvent.DATA, dataEventHandler);
        architectureButton.y = playButton.y + stepController.y;
        architectureButton.x = playButton.x + stepController.x;
        architectureButton.visible = false;
        menuContainer.addChild(architectureButton);
    }

    private function dataEventHandler(event:AppEvent):Void {
        dispatchEvent(new AppEvent(AppEvent.DATA, {id:event.data.id}));
    }

/**
    Public Methods
**/

    public function setProgramPointer(pointer:String):Void {
        tfStepCount.text = pointer;
    }

    public function setHertz(label:String):Void {
        hertzButton.setLabel(label);
    }

    public function setHertzActive(on:Bool, ?pointer:Int = -1):Void {
        hertzButton.setActive(on);
        resetHertzSubmenu(pointer);
        hertzSubmenuContainer.visible = on;
    }

    public function setComponentsActive(on:Bool):Void {
        componentsButton.setActive(on);
        componentsSubmenuContainer.visible = on;
    }

    public function setZoomActive(on:Bool):Void {
        zoomButton.setActive(on);
    }

    public function setShowUnitsActive(on:Bool):Void {
        showUnitsButton.setActive(on);
    }

    public function setShowFlowActive(on:Bool):Void {
        showFlowButton.setActive(on);
    }

    public function setShowHighlightActive(on:Bool):Void {
        showHighlightButton.setActive(on);
    }

    private function resetHertzSubmenu(pointer:Int):Void {
        for (i in 0 ... hertzSubmenuButtons.length) {
            hertzSubmenuButtons[i].reset();
        }
        if (pointer > -1) {
            hertzSubmenuButtons[pointer].setActive(true);
        }
    }

    public function setPowerOn(on:Bool):Void {
        if (on) {
            powerButton.setLabel("Aus");
            powerButton.setActive(true);
            showButtons(true);
        } else {
            powerButton.setLabel("Ein");
            powerButton.setActive(false);
            showButtons(false);
        }

    }

    private function showButtons(show:Bool):Void {
        middleMenuContainer.visible = show;
        hertzButton.visible = show;
        manualClockButton.visible = show;
        playButton.visible = show;
        tfStepCount.visible = show;
        resetButton.visible = show;
        zoomButton.visible = show;
        editRomButton.visible = show;
        stepCountContainer.visible = show;
        architectureButton.visible = !show;
    }

    public function setPlay(on:Bool):Void {
        if (on) {
            playButton.setLabel("Pause");
        } else {
            playButton.setLabel("Play");
        }
    }
}
