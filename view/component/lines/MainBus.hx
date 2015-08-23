package view.component.lines;
import model.vo.InstructionVO;
import openfl.display.Shape;
import events.AppEvent;
import openfl.display.BitmapData;
import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.Assets;
import openfl.events.Event;

class MainBus extends Sprite {

    private var bmp:Bitmap;
    private var linesActive:Array<Bitmap>;
    private var currentLineNum:Int = 0;
    private var maxLines:Int = 8;

    public function new() {
        super();
        addEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
    }

    private function addedToStageHandler(event:Event):Void {
        removeEventListener(Event.ADDED_TO_STAGE, addedToStageHandler);
        linesActive = new Array<Bitmap>();
        loadLine();
    }

    public function showLines(instruction:InstructionVO):Void {
        hideAllLines();
        for (i in 0 ... linesActive.length) {
#if ios
            if (instruction.codeArr[i]) {
                addChild(linesActive[i]);
            }
#else
            linesActive[i].visible = instruction.codeArr[i];
#end
        }
    }

    private function loadLine():Void {
        Assets.loadBitmapData("assets/" + AppConstants.ASSET_FOLDER + "/busline" + currentLineNum + ".png", bmpLoadCompleteHandler, true);
    }

    private function bmpLoadCompleteHandler(bmd:BitmapData):Void {
        linesActive.push(new Bitmap(bmd));
        linesActive[currentLineNum].scaleX = linesActive[currentLineNum].scaleY = AppConstants.SCALE_FACTOR;
        linesActive[currentLineNum].name = "line" + currentLineNum;
#if ios
#else
        addChild(linesActive[currentLineNum]);
        linesActive[currentLineNum].visible = false;
#end

        if (currentLineNum < maxLines - 1) {
            currentLineNum++;
            loadLine();
        } else {
            //trace("MainBus REady!");
            dispatchEvent(new AppEvent(AppEvent.VIEW_READY));
        }
    }

/**
    Public Methods
**/

    public function toggleSingleLine(id:Int, on:Bool):Void {
#if ios
        if (getChildByName("line" + id) != null) {
            removeChild(getChildByName("line" + id));
        }
        if (on) {
            addChild(linesActive[id]);
        }
#else
        linesActive[id].visible = on;
#end
    }

    public function hideAllLines():Void {
        for (i in 0 ... linesActive.length) {
#if ios
            if (getChildByName("line" + i) != null) {
                removeChild(getChildByName("line" + i));
            }
#else
            linesActive[i].visible = false;
#end
        }
    }


}
