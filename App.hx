/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package;

import openfl.display.StageAlign;
import openfl.display.StageScaleMode;
import events.AppEvent;
import openfl.events.MouseEvent;
import openfl.display.DisplayObject;
import openfl.display.Sprite;

class App extends Sprite {

    private var zoomContainer:Sprite;
    private var detailPopupContainer:Sprite;
    private var navigContainer:Sprite;
    private var isZoomed:Bool = false;

    public function new() {
        super();
        stage.scaleMode = StageScaleMode.NO_SCALE;
        stage.align = StageAlign.TOP_LEFT;
        zoomContainer = new Sprite();
        addChild(zoomContainer);
        zoomContainer.addEventListener(MouseEvent.MOUSE_DOWN, mouseDownHandler);
        zoomContainer.addEventListener(MouseEvent.MOUSE_UP, mouseUpHandler);
        detailPopupContainer = new Sprite();
        addChild(detailPopupContainer);
        navigContainer = new Sprite();
        addChild(navigContainer);
        AppFacade.getInstance(AppConstants.APP_NAME).startup(this);
    }

    public function addZoomView(view:DisplayObject):Void {
        zoomContainer.addChild(view);
    }

    public function addDetailPopupView(view:DisplayObject):Void {
        detailPopupContainer.addChild(view);
    }

    public function addNavigView(view:DisplayObject):Void {
        navigContainer.addChild(view);
    }

    private function mouseDownHandler(event:MouseEvent):Void {
        if (isZoomed) {
            dispatchEvent(new AppEvent(AppEvent.DRAG_START));
        }
    }

    private function mouseUpHandler(event:MouseEvent):Void {
        if (isZoomed) {
            dispatchEvent(new AppEvent(AppEvent.DRAG_STOP));
        }
    }

    public function dragStart():Void {
        zoomContainer.startDrag();
    }

    public function dragStop():Void {
        zoomContainer.stopDrag();
    }

    public function zoomIn():Void {
        isZoomed = true;
        zoomContainer.scaleX = 2;
        zoomContainer.scaleY = 2;
        zoomContainer.x = Math.floor(stage.stageWidth * 0.5 - zoomContainer.width * 0.5);
        zoomContainer.y = Math.floor(stage.stageHeight * 0.5 - zoomContainer.height * 0.5);
    }

    public function resetZoom():Void {
        isZoomed = false;
        zoomContainer.scaleX = 1;
        zoomContainer.scaleY = 1;
        zoomContainer.x = 0;
        zoomContainer.y = 0;
    }


}