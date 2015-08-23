package model.proxy;
import model.data.AppData;
import org.puremvc.haxe.multicore.patterns.proxy.Proxy;
class AppProxy extends Proxy {

    public static var NAME = "appProxy";

    public function new(data:AppData) {
        super(NAME, data);
    }

    override public function onRegister():Void {
        sendNotification(AppConstants.PROXY_INITIALIZED, null, NAME);
    }

    public function getApp():App {
        return getData().app;
    }

    public function setStarted(value:Bool):Void {
        getData().started = value;
    }

    public function getStarted():Bool {
        return getData().started;
    }

    public function getIsZoomed():Bool {
        return getData().isZoomed;
    }

    public function setIsZoomed(value:Bool):Void {
        getData().isZoomed = value;
    }

    public function getHertzSubmenuOn():Bool {
        return getData().hertzSubmenuActive;
    }

    public function setHertzSubmenuOn(on:Bool) {
        getData().hertzSubmenuActive = on;
    }

    public function getComponentsSubmenuOn():Bool {
        return getData().componentsSubmenuActive;
    }

    public function setComponentsSubmenuOn(on:Bool) {
        getData().componentsSubmenuActive = on;
    }

    public function getShowUnitsOn():Bool {
        return getData().showUnitsOn;
    }

    public function setShowUnitsOn(on:Bool):Void {
        getData().showUnitsOn = on;
    }

    public function getShowFlowOn():Bool {
        return getData().showFlowOn;
    }

    public function setShowFlowOn(on:Bool):Void {
        getData().showFlowOn = on;
    }
    
    public function getPowerOn():Bool {
        return getData().powerOn;
    }

    public function setPowerOn(on:Bool):Void {
        getData().powerOn = on;
    }

    public function getAutoClockOn():Bool {
        return getData().autoClockOn;
    }

    public function setAutoClockOn(on:Bool):Void {
        getData().autoClockOn = on;
    }

    public function getShowHighlightOn():Bool {
        return getData().showHighlightOn;
    }

    public function setShowHightlightOn(on:Bool):Void {
        getData().showHighlightOn = on;
    }

    public function reset():Void {
        getData().autoClockOn = false;
        getData().started = false;
    }

    public function getDetailPopupActive():Bool {
        return getData().detailPopupActive;
    }

    public function setDetailPopupActive(on:Bool):Void {
        getData().detailPopupActive = on;
    }

    public function setCharCodeActive(on:Bool):Void {
        getData().charCodeActive = on;
    }

    public function getCharCodeActive():Bool {
        return getData().charCodeActive;
    }

    public function setEnterInstructionActive(on:Bool):Void {
        getData().enterInstructionActive = on;
    }
    
    public function getEnterInstructionActive():Bool {
        return getData().enterInstructionActive;
    }

    public function setEnterInstructionOutputValid(on:Bool):Void {
        getData().enterInstructionOutputValid = on;
    }

    public function getEnterInstructionOutputValid():Bool {
        return getData().enterInstructionOutputValid;
    }

    override public function getData():AppData {
        return data;
    }

}
