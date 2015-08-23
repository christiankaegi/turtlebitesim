package model.proxy;
import model.vo.FrequencyVO;
import model.data.ClockData;
import openfl.utils.Timer;
import openfl.events.TimerEvent;
import org.puremvc.haxe.multicore.patterns.proxy.Proxy;
class ClockProxy extends Proxy {

    public static var NAME = "ClockProxy";

    private var timer:Timer;
    private var appProxy:AppProxy;

    public function new(data:ClockData) {
        super(NAME, data);
    }

    override public function onRegister():Void {
        appProxy = cast(facade.retrieveProxy(AppProxy.NAME), AppProxy);
        sendNotification(AppConstants.PROXY_INITIALIZED, null, NAME);
    }

    public function startClock():Void {
        stopClock();
        var frequency = getCurrentFrequency();
        timer = new Timer(frequency.ms);
        timer.addEventListener(TimerEvent.TIMER, sendClockSignal);
        getData().clockOn = true;
        sendNotification(AppConstants.CLOCK_SIGNAL, getData().clockOn);
        timer.start();
    }

    public function stopClock():Void {
        if (timer != null && timer.hasEventListener(TimerEvent.TIMER)) {
            timer.stop();
            timer.removeEventListener(TimerEvent.TIMER, sendClockSignal);
        }
    }

    private function sendClockSignal(event:TimerEvent):Void {
        sendNotification(AppConstants.CLOCK_SIGNAL, getData().clockOn);
        toggleClockOn();
    }

    public function getCurrentFrequencyPointer():Int {
        return getData().currentFrequencyPointer;
    }

    public function setCurrentFrequencyPointer(pos:Int):Void {
        getData().currentFrequencyPointer = pos;
        if (getData().currentFrequencyPointer > getData().frequencies.length - 1) {
            getData().currentFrequencyPointer = 0;
        }
    }

    public function changeClockSpeed(pointer:Int):Void {
        setCurrentFrequencyPointer(pointer);
        sendNotification(AppConstants.CLOCK_SPEED_CHANGED);
        if (appProxy.getAutoClockOn()) {
            startClock();
        }
    }

    public function getCurrentFrequency():FrequencyVO {
        return getData().frequencies[getData().currentFrequencyPointer];
    }

    public function getFrequencies():Array<FrequencyVO> {
        return getData().frequencies;
    }

    public function toggleClockOn():Void {
        getData().clockOn = !getData().clockOn;
    }

    public function setClockOff():Void {
        getData().clockOn = false;
    }

    public function getClockOn():Bool {
        return getData().clockOn;
    }

    public function reset():Void {
        stopClock();
        getData().clockOn = false;
    }

    override public function getData():ClockData {
        return data;
    }


}

