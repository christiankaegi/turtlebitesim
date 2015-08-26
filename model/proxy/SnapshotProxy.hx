/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package model.proxy;
import model.vo.DecHexVO;
import utilities.NumberFormat;
import model.vo.SnapshotVO;
import model.data.SnapshotData;
import org.puremvc.haxe.multicore.patterns.proxy.Proxy;
class SnapshotProxy extends Proxy {

    public static var NAME = "SnapshotProxy";

    public function new(data:SnapshotData) {
        super(NAME, data);
    }

    override public function onRegister():Void {
        sendNotification(AppConstants.PROXY_INITIALIZED, null, NAME);
    }

    public function setRegister1(value:String):Void {
        getData().register1 = getSnapshot(value);
    }

    public function getRegister1():SnapshotVO {
        return getData().register1;
    }

    public function setRegister2(value:String):Void {
        getData().register2 = getSnapshot(value);
    }

    public function getRegister2():SnapshotVO {
        return getData().register2;
    }

    public function setAccumulator(value:String):Void {
        getData().accumulator = getSnapshot(value);
    }

    public function getAccumulator():SnapshotVO {
        return getData().accumulator;
    }

    public function setRam(vo:SnapshotVO, pointer:Int):Void {
        getData().ram[pointer] = vo;
    }

    public function getRam():Array<SnapshotVO> {
        return getData().ram;
    }

    public function reset():Void {
        getData().reset();
    }

    private function getSnapshot(value:String):SnapshotVO {
        var decHex:DecHexVO = NumberFormat.binaryToDecimal(value);
        return new SnapshotVO(value, decHex.hex, decHex.dec);
    }

    override public function getData():SnapshotData {
        return data;
    }

}
