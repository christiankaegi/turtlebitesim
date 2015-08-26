/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package model.vo;
class SnapshotVO {
    private var binary:String;
    private var hex:String;
    private var decimal:UInt;
    private var codeArr:Array<Bool>;

    public function new(?binary:String = "0000", ?hex:String = "0", ?decimal:UInt = 0) {
        this.binary = binary;
        this.hex = hex;
        this.decimal = decimal;
        createCodeArray();
    }

    private function createCodeArray():Void {
        codeArr = new Array<Bool>();
        for (i in 0 ... 4) {
            if (binary.substr(i, 1) == "1") {
                codeArr[i] = true;
            } else {
                codeArr[i] = false;
            }
        }
// fill array at beginning for a consistent length
        codeArr.unshift(false);
        codeArr.unshift(false);
        codeArr.unshift(false);
        codeArr.unshift(false);
    }

    public function getBinary():String {
        return binary;
    }

    public function getHex():String {
        return hex;
    }

    public function getDecimal():UInt {
        return decimal;
    }

    public function getCodeArr():Array<Bool> {
        return codeArr;
    }


}
