/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package utilities;
import openfl.text.TextFormatAlign;
import openfl.text.TextFormat;
import openfl.text.TextFieldAutoSize;
import openfl.text.TextField;
class TextFieldFactory {

#if ios
    public static var TF_WIDTH:Int = 36;
    public static var TF_HEIGHT:Int = 28;
    public static var SCALE_FACTOR:Float = 2;
    public static var TEXT_FORMAT:TextFormat = new TextFormat("Myriad Pro", 24, 0xffffff);
    public static var TEXT_FORMAT_CENTERED:TextFormat = new TextFormat("Myriad Pro", 24, 0xffffff,null, null, null, null,null, TextFormatAlign.CENTER);
    public static var TEXT_FORMAT_BOLD:TextFormat = new TextFormat("Myriad Pro Bold", 24, 0xffffff);
    public static var TEXT_FORMAT_CENTERED_BOLD:TextFormat = new TextFormat("Myriad Pro Bold", 24, 0xffffff,null, null, null, null,null, TextFormatAlign.CENTER);
    public static var TEXT_FORMAT_BUTTON_LABEL:TextFormat = new TextFormat("Myriad Pro Bold", 28, 0xffffff,null, null, null, null,null, TextFormatAlign.CENTER);
    public static var OUTPUT_TEXT_FORMAT_BOLD:TextFormat = new TextFormat("Consolas Bold", 24, 0x00FF00,null, null, null, null,null, TextFormatAlign.CENTER);
    public static var STEP_TEXT_FORMAT:TextFormat = new TextFormat("Consolas Bold", 36, 0x00FF00,null, null, null, null,null, TextFormatAlign.CENTER);
#elseif html5
    public static var TF_WIDTH:Int = 18;
    public static var TF_HEIGHT:Int = 15;
    public static var SCALE_FACTOR:Float = 1;
    public static var TEXT_FORMAT:TextFormat = new TextFormat("Myriad Pro", 12, 0xffffff);
    public static var TEXT_FORMAT_CENTERED:TextFormat = new TextFormat("Myriad Pro", 12, 0xffffff,null, null, null, null,null, TextFormatAlign.CENTER);
    public static var TEXT_FORMAT_BOLD:TextFormat = new TextFormat("Myriad Pro Bold", 12, 0xffffff);
    public static var TEXT_FORMAT_CENTERED_BOLD:TextFormat = new TextFormat("Myriad Pro Bold", 12, 0xffffff,null, null, null, null,null, TextFormatAlign.CENTER);
    public static var TEXT_FORMAT_BUTTON_LABEL:TextFormat = new TextFormat("Myriad Pro Bold", 14, 0xffffff,null, null, null, null,null, TextFormatAlign.CENTER);
    public static var OUTPUT_TEXT_FORMAT_BOLD:TextFormat = new TextFormat("Consolas Bold", 12, 0x00FF00,null, null, null, null,null, TextFormatAlign.CENTER);
    public static var STEP_TEXT_FORMAT:TextFormat = new TextFormat("Consolas Bold", 18, 0x00FF00,null, null, null, null,null, TextFormatAlign.CENTER);
#else
    public static var TF_WIDTH:Int = 18;
    public static var TF_HEIGHT:Int = 14;
    public static var SCALE_FACTOR:Float = 1;
    public static var TEXT_FORMAT:TextFormat = new TextFormat("Myriad Pro", 12, 0xffffff);
    public static var TEXT_FORMAT_CENTERED:TextFormat = new TextFormat("Myriad Pro", 12, 0xffffff,null, null, null, null,null, TextFormatAlign.CENTER);
    public static var TEXT_FORMAT_BOLD:TextFormat = new TextFormat("Myriad Pro Bold", 12, 0xffffff);
    public static var TEXT_FORMAT_CENTERED_BOLD:TextFormat = new TextFormat("Myriad Pro Bold", 12, 0xffffff,null, null, null, null,null, TextFormatAlign.CENTER);
    public static var TEXT_FORMAT_BUTTON_LABEL:TextFormat = new TextFormat("Myriad Pro Bold", 14, 0xffffff,null, null, null, null,null, TextFormatAlign.CENTER);
    public static var OUTPUT_TEXT_FORMAT_BOLD:TextFormat = new TextFormat("Consolas Bold", 12, 0x00FF00,null, null, null, null,null, TextFormatAlign.CENTER);
    public static var STEP_TEXT_FORMAT:TextFormat = new TextFormat("Consolas Bold", 18, 0x00FF00,null, null, null, null,null, TextFormatAlign.CENTER);
#end
    public static var TEXT_ACTIVE_COLOR:Int = 0x00FF00;
    public static var TEXT_INACTIVE_COLOR:Int = 0x005500;

    public function new() {
    }

    public static function getOutputTFBold():TextField {
        var tf:TextField = new TextField();
        tf.defaultTextFormat = OUTPUT_TEXT_FORMAT_BOLD;
        tf.embedFonts = true;
        tf.textColor = TEXT_ACTIVE_COLOR;
        tf.border = true;
        tf.borderColor = 0xA0A0A0;
        tf.background = true;
        tf.backgroundColor = 0x000000;
        tf.width = TF_WIDTH;
        tf.height = TF_HEIGHT;
        return tf;
    }

    public static function getInstructionOutput():TextField {
        var tf:TextField = new TextField();
#if ios
        tf.defaultTextFormat = new TextFormat("Myriad Pro", 40, 0xffffff);
#else
        tf.defaultTextFormat = new TextFormat("Myriad Pro", 20, 0xffffff);
#end
        tf.embedFonts = true;
        tf.textColor = 0xFFFFFF;
        tf.autoSize = TextFieldAutoSize.LEFT;
        return tf;
    }

}
