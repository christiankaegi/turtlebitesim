/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package events;

import openfl.events.Event;

class AppEvent extends Event {

    static public var DATA = "data";
    static public var DRAG_START = "dragStart";
    static public var DRAG_STOP = "dragStop";
    static public var VIEW_READY = "viewReady";

    public var data:Dynamic;

    public function new(type:String, ?data:Dynamic, bubbles:Bool = false, cancelable:Bool = false) {
        super(type, bubbles, cancelable);
        this.data = data;
    }

}
