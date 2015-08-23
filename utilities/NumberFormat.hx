package utilities;
import model.vo.DecHexVO;
class NumberFormat {
    public function new() {
    }

    public static function intToString(num:Int):String {
        var reference = "0123456789ABCDEFGHIJKLMNOPQRSTUVW";
        var result = new StringBuf();
        var maxPow = 0;
        var test = 0;

        while (Std.int(Math.pow(2, maxPow)) <= num) {
            maxPow++;
        }

        var i = maxPow - 1;
        while (i >= 0) {
            var basePow = Math.pow(2, i);
            var pow = Math.floor(num / basePow);
            result.add(reference.charAt(Std.int(pow)));
            num -= Std.int(pow * basePow);
            i--;
        }
        var r = result.toString();
        return r.length == 0 ? "0" : r;
    }

    public static function binaryToArray(bin:String, ?length:UInt = 8):Array<Bool> {
        var arr:Array<Bool> = new Array<Bool>();
        for (i in 0 ... 8) {
            if (bin.substr(i, 1) == "1") {
                arr[i] = true;
            } else {
                arr[i] = false;
            }
        }
        return arr;
    }


    public static function binaryToDecimal(value:String):DecHexVO {
        var t:DecHexVO = new DecHexVO(0, "0");
        switch(value) {
            case "0001" :
                t = new DecHexVO(1, "1");
            case "0010" :
                t = new DecHexVO(2, "2");
            case "0011" :
                t = new DecHexVO(3, "3");
            case "0100" :
                t = new DecHexVO(4, "4");
            case "0101" :
                t = new DecHexVO(5, "5");
            case "0110" :
                t = new DecHexVO(6, "6");
            case "0111" :
                t = new DecHexVO(7, "7");
            case "1000" :
                t = new DecHexVO(8, "8");
            case "1001" :
                t = new DecHexVO(9, "9");
            case "1010" :
                t = new DecHexVO(10, "A");
            case "1011" :
                t = new DecHexVO(11, "B");
            case "1100" :
                t = new DecHexVO(12, "C");
            case "1101" :
                t = new DecHexVO(13, "D");
            case "1110" :
                t = new DecHexVO(14, "E");
            case "1111" :
                t = new DecHexVO(15, "F");
        }
        return t;
    }

    public static function decimalToBinary(value:UInt):String {
        var t:String = "0000";
        switch(value) {
            case 1 :
                t = "0001";
            case 2 :
                t = "0010";
            case 3 :
                t = "0011";
            case 4 :
                t = "0100";
            case 5 :
                t = "0101";
            case 6 :
                t = "0110";
            case 7 :
                t = "0111";
            case 8 :
                t = "1000";
            case 9 :
                t = "1001";
            case 10 :
                t = "1010";
            case 11 :
                t = "1011";
            case 12 :
                t = "1100";
            case 13 :
                t = "1101";
            case 14 :
                t = "1110";
            case 15 :
                t = "1111";

        }
        return t;
    }

    public static function decimalToChar(value:Int):String {
/*
        0000	A	1000	I
        0001	B	1001	L
        0010	C	1010	O
        0011	D	1011	M
        0100	E	1100	S
        0101	F	1101	W
        0110	G	1110	!
        0111	H	1111	(BLANK)
*/
        var t:String = "A";
        switch (value) {
            case 1 :
                t = "B";
            case 2 :
                t = "C";
            case 3 :
                t = "D";
            case 4 :
                t = "E";
            case 5 :
                t = "F";
            case 6 :
                t = "G";
            case 7 :
                t = "H";
            case 8 :
                t = "I";
            case 9 :
                t = "L";
            case 10 :
                t = "O";
            case 11 :
                t = "M";
            case 12 :
                t = "S";
            case 13 :
                t = "W";
            case 14 :
                t = "!";
            case 15 :
                t = " ";
        }
        return t;
    }

}
