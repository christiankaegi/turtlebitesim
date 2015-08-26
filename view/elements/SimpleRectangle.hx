/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package view.elements;
import openfl.display.Sprite;
import openfl.display.Shape;

class SimpleRectangle extends Sprite {
    public function new(width:Float, height:Float, ?color:Int = 0xFF00FF, ?alpha:Float = 1.0, ?hasLine:Bool = false, ?lineColor:Int = 0x555555) {
        super();
        var s:Shape = new Shape();
        s = new Shape();
        if (hasLine) {
            s.graphics.lineStyle(1 * AppConstants.SCALE_FACTOR, lineColor);
        }
        s.graphics.beginFill(color, alpha);
        s.graphics.drawRect(0, 0, width, height);
        addChild(s);
    }

}
