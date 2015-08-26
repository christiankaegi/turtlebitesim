/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package model.data;
import model.vo.SnapshotVO;
class SnapshotData {

    public var register1:SnapshotVO;
    public var register2:SnapshotVO;
    public var accumulator:SnapshotVO;
    public var keyboard:SnapshotVO;

    public var rom:Array<SnapshotVO>;
    public var ram:Array<SnapshotVO>;

    public function new() {
        reset();
    }

    public function reset():Void {
        register1 = new SnapshotVO();
        register2 = new SnapshotVO();
        accumulator = new SnapshotVO();
        keyboard = new SnapshotVO();
        rom = new Array<SnapshotVO>();
        ram = new Array<SnapshotVO>();
        for (i in 0 ... 16) {
            rom[i] = new SnapshotVO();
            ram[i] = new SnapshotVO();
        }
    }

}

