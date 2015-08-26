/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package model.vo;
import utilities.NumberFormat;
class InstructionVO {
    public var pointer:Int;
    public var asm:String;
    public var asmOpcode:String;
    public var asmAddress:String;
    public var code:String;
    public var codeOpcode:String;
    public var codeAddress:String;
    public var codeArr:Array<Bool>;
    public var hex:String;
    public var hexOpcode:String;
    public var hexAddress:String;
    public var description:String;

    public function new(pointer:Int, asm:String) {
        this.code = "00000000";
        this.pointer = pointer;
        this.asm = asm;

        var t:Array<String> = asm.split(" ");
        this.asmOpcode = t[0];
        this.asmAddress = t[1];
        if (this.asmAddress == null) {
            this.asmAddress = "<-----";
        }
        assemble();
    }

    private function assemble():Void {
        switch(asmOpcode) {
            case "NOP" :
                description = "«No Operation» Mache nichts (Leerlauf)";
                codeOpcode = "0000";
                codeAddress = "0000";
            case "MOV" :
                description = "«Move» Bewege den Wert des Akkumulators in das Register " + asmAddress;
                codeOpcode = "0001";
                if (asmAddress == "R1") {
                    codeAddress = "0100";
                } else if (asmAddress == "R2") {
                    codeAddress = "1000";
                }
            case "LDI" :
                description = "«Load Immediate» Initialisiere den Akkumulator mit " + asmAddress;
                codeOpcode = "0010";
                codeAddress = NumberFormat.decimalToBinary(Std.parseInt(asmAddress));
            case "ADD" :
                description = "«Add» Addiere den Wert des Registers R1 zum Wert des Akkumulators";
                codeOpcode = "0011";
                codeAddress = "0000";
            case "SUB" :
                description = "«Subtract» Subtrahiere den Wert des Registers R1 vom Wert des Akkumulators";
                codeOpcode = "0011";
                codeAddress = "0001";
            case "INC" :
                description = "«Increment» Erhöhe den Wert im Akkumulator um 1";
                codeOpcode = "0011";
                codeAddress = "0010";
            case "DEC" :
                description = "«Decrement» Erniedrige den Wert im Akkumulator um 1";
                codeOpcode = "0011";
                codeAddress = "0011";
            case "SDA" :
                description = "«Store Data» Speichere den Wert des Akkumulators im RAM in Zelle " + asmAddress;
                codeOpcode = "0100";
                codeAddress = NumberFormat.decimalToBinary(Std.parseInt(asmAddress));
            case "LDA" :
                description = "«Load Data» Lade den Wert von Zelle " + asmAddress + " im RAM in den Akkumulator";
                codeOpcode = "0101";
                codeAddress = NumberFormat.decimalToBinary(Std.parseInt(asmAddress));
            case "INP" :
                if (asmAddress == "A") {
                    description = "«Input» Lade den ersten Wert vom Keyboardbuffer in den Akkumulator";
                    codeAddress = "0011";
                } else {
                    description = "«Input» Lade den ersten Wert vom Keyboardbuffer in das Register " + asmAddress;
                    if (asmAddress == "R1") {
                        codeAddress = "0111";
                    } else if (asmAddress == "R2") {
                        codeAddress = "1011";
                    }
                }
                codeOpcode = "0110";
            case "OUT" :
                if (asmAddress == "A") {
                    description = "«Output» Schicke den Wert des Akkumulators zum Display";
                    codeAddress = "0000";
                } else {
                    description = "«Output» Schicke den Wert des Registers " + asmAddress + " zum Display";
                    if (asmAddress == "R1") {
                        codeAddress = "0110";
                    } else if (asmAddress == "R2") {
                        codeAddress = "1001";
                    }
                }
                codeOpcode = "0111";
            case "JE" :
                description = "«Jump not equal» Falls Akku gleich Register R1, springe zu Codezeile " + asmAddress;
                codeOpcode = "1000";
                codeAddress = NumberFormat.decimalToBinary(Std.parseInt(asmAddress));
            case "JNE" :
                description = "«Jump not equal» Falls Akku ungleich Register R1, springe zu Codezeile " + asmAddress;
                codeOpcode = "1001";
                codeAddress = NumberFormat.decimalToBinary(Std.parseInt(asmAddress));
            case "JMP" :
                description = "«Jump» Springe zu Codezeile " + asmAddress;
                codeOpcode = "1010";
                codeAddress = NumberFormat.decimalToBinary(Std.parseInt(asmAddress));
        }
        hexOpcode = NumberFormat.binaryToDecimal(codeOpcode).hex;
        hexAddress = NumberFormat.binaryToDecimal(codeAddress).hex;
        hex = hexOpcode + hexAddress;
        code = codeOpcode + codeAddress;
        codeArr = NumberFormat.binaryToArray(code);
    }
}
