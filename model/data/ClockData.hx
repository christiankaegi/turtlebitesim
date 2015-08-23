package model.data;
import model.vo.FrequencyVO;
class ClockData {

    public var frequencies:Array<FrequencyVO>;
    public var currentFrequencyPointer:Int = 4;
    public var clockOn:Bool = false;

    public function new() {
        frequencies = new Array<FrequencyVO>();
        frequencies = [
            //new FrequencyVO(2000.0, "0.5 Hz"),
            new FrequencyVO(1000.0, "1Hz"),
            new FrequencyVO(500.0, "2Hz"),
            new FrequencyVO(250.0, "4Hz"),
            new FrequencyVO(125.0, "8Hz"),
            new FrequencyVO(62.5, "16Hz"),
            new FrequencyVO(31.25, "32Hz"),
            new FrequencyVO(15.625, "64Hz"),
            new FrequencyVO(7.8125, "128Hz"),
            new FrequencyVO(3.9, "256Hz"),
            new FrequencyVO(1.953, "512Hz"),
            new FrequencyVO(0.976, "1KHz")
        ];
/*
1Hz - 1000/1 = 1000ms
2Hz - 1000/2 = 500ms
4Hz - 1000/4 = 250ms
8Hz - 1000/8 = 125ms
16Hz - 1000/16 = 62.5ms
32Hz - 1000/32 = 31.25ms
64Hz - 1000/64 = 15.625ms
128Hz - 1000/128 = 7.8125ms
256Hz - 1000/256 = 3.90ms
512Hz - 1000/512 = 1.953ms
1KHz - 1000/1024 = 0.975ms
         */
    }

}
