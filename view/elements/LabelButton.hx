package view.elements;

import utilities.TextFieldFactory;
import openfl.text.TextFieldAutoSize;
import openfl.text.TextField;
import events.AppEvent;
import openfl.display.Sprite;
import openfl.events.MouseEvent;

class LabelButton extends Sprite {

#if ios
    public static var BTN_HEIGHT:UInt = 96;
#else
    public static var BTN_HEIGHT:UInt = 48;
#end
    private var inactive:Bool;

    private static var BG_COLOR:Int = 0x272727;
    private static var BG_INACTIVE_COLOR:Int = 0x707070;
    private static var BG_COLOR_HIGHLIGHT:Int = 0xFFFFFF;
    private static var BG_COLOR_ACTIVE:Int = 0x8C0909;


    private var bg:SimpleRectangle;
    private var bgHighlight:SimpleRectangle;
    private var bgActive:SimpleRectangle;

    private var hasCheckbox:Bool = false;
    private var checkboxBgUnselected:SimpleRectangle;
    private var checkboxBgSelected:SimpleRectangle;

    private var clickArea:Sprite;

    private var tfLabel:TextField;
    private var labelText:String;
    private var btnWidth:Float;


    public function new(width:Float, ?label:String = "", ?hasCheckbox:Bool = false, ?inactive:Bool = false) {
        super();
        btnWidth = width * AppConstants.SCALE_FACTOR;
        labelText = label;
        this.inactive = inactive;
        createBG();
        this.hasCheckbox = hasCheckbox;
        if (this.hasCheckbox) {
            createCheckbox();
        }
        createLabel();
        createClickArea();
    }

    private function createBG():Void {
        if (inactive) {
            bg = new SimpleRectangle(btnWidth, BTN_HEIGHT, BG_INACTIVE_COLOR, 1, true);
            addChild(bg);
        } else {
            bg = new SimpleRectangle(btnWidth, BTN_HEIGHT, BG_COLOR, 1, true);
            addChild(bg);
            bgHighlight = new SimpleRectangle(btnWidth, BTN_HEIGHT, BG_COLOR_HIGHLIGHT, 0.2);
            bgHighlight.visible = false;
            addChild(bgHighlight);
            bgActive = new SimpleRectangle(btnWidth, BTN_HEIGHT, BG_COLOR_ACTIVE, 1);
            bgActive.visible = false;
            addChild(bgActive);
        }
    }

    private function createCheckbox():Void {
        checkboxBgUnselected = new SimpleRectangle(BTN_HEIGHT * 0.5, BTN_HEIGHT * 0.5, 0xFFFFFF, 0.2);
        checkboxBgUnselected.x = BTN_HEIGHT * 0.25;
        checkboxBgUnselected.y = BTN_HEIGHT * 0.25;
        addChild(checkboxBgUnselected);

        checkboxBgSelected = new SimpleRectangle(BTN_HEIGHT * 0.5, BTN_HEIGHT * 0.5, BG_COLOR_ACTIVE, 1);
        checkboxBgSelected.x = BTN_HEIGHT * 0.25;
        checkboxBgSelected.y = BTN_HEIGHT * 0.25;
        checkboxBgSelected.visible = false;
        addChild(checkboxBgSelected);
    }

    private function createLabel():Void {
        tfLabel = new TextField();
        tfLabel.defaultTextFormat = TextFieldFactory.TEXT_FORMAT_BUTTON_LABEL;
        tfLabel.embedFonts = true;
        tfLabel.textColor = 0xFFFFFF;
        tfLabel.alpha = 0.7;
        tfLabel.selectable = false;
        tfLabel.y = 16 * AppConstants.SCALE_FACTOR;
        if (hasCheckbox) {
            tfLabel.autoSize = TextFieldAutoSize.LEFT;
            tfLabel.x = checkboxBgUnselected.x + checkboxBgUnselected.width + BTN_HEIGHT * 0.20;
            tfLabel.width = bg.width - checkboxBgUnselected.x - checkboxBgUnselected.width;
        } else {
            tfLabel.width = bg.width;
        }
        tfLabel.height = 25 * AppConstants.SCALE_FACTOR;
        tfLabel.text = labelText;
        addChild(tfLabel);
    }

    private function createClickArea():Void {
        if (!inactive) {
            var s:SimpleRectangle = new SimpleRectangle(btnWidth, BTN_HEIGHT, 0x000000, 0);
            clickArea = new Sprite();
            clickArea.addChild(s);
            clickArea.buttonMode = true;
            clickArea.addEventListener(MouseEvent.MOUSE_DOWN, buttonDownHandler);
            clickArea.addEventListener(MouseEvent.MOUSE_UP, buttonUpHandler);
            clickArea.addEventListener(MouseEvent.MOUSE_OUT, buttonUpHandler);
            addChild(clickArea);
        }
    }

    private function buttonDownHandler(event:MouseEvent):Void {
        bgHighlight.visible = true;
        dispatchEvent(new AppEvent(AppEvent.DATA, {id:name}));
    }

    private function buttonUpHandler(event:MouseEvent):Void {
        bgHighlight.visible = false;
    }

    public function setLabel(label:String):Void {
        tfLabel.text = label;
    }

    public function setActive(on:Bool):Void {
        if (hasCheckbox) {
            checkboxBgSelected.visible = on;
        } else {
            bgActive.visible = on;
        }
    }

    public function reset():Void {
        bgActive.visible = bgHighlight.visible = false;
        if (hasCheckbox) {
            checkboxBgSelected.visible = false;
        }
    }

    public function destroy():Void {
        removeChild(bg);
        removeChild(tfLabel);
        if (!inactive) {
            removeChild(bgHighlight);
            removeChild(bgActive);
            clickArea.removeEventListener(MouseEvent.MOUSE_DOWN, buttonDownHandler);
            clickArea.removeEventListener(MouseEvent.MOUSE_UP, buttonUpHandler);
            clickArea.removeEventListener(MouseEvent.MOUSE_OUT, buttonUpHandler);
            removeChild(clickArea);
        }
        if (hasCheckbox) {
            removeChild(checkboxBgSelected);
            removeChild(checkboxBgUnselected);
        }
    }
}
