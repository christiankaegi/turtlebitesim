/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package model.data;
class AppData {

    public var app:App;
    public var started:Bool;
    public var isZoomed:Bool = false;
    public var powerOn:Bool = false;
    public var autoClockOn:Bool = false;
    public var hertzSubmenuActive:Bool = false;
    public var componentsSubmenuActive:Bool = false;
    public var showUnitsOn:Bool = false;
    public var showFlowOn:Bool = false;
    public var showHighlightOn:Bool = false;
    public var detailPopupActive:Bool = false;
    public var charCodeActive:Bool = false;
    public var enterInstructionActive:Bool = false;
    public var enterInstructionOutputValid:Bool = true;

    public function new(app:App) {
        this.app = app;
    }

}

