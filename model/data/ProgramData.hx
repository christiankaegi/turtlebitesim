package model.data;
import model.vo.InstructionVO;
class ProgramData {

    public var instructionPointer:Int;
    public var programs:Array<Array<InstructionVO>>;
    public var programPointer:Int;

    public var manualInstruction:InstructionVO;

    private var instructions:Array<InstructionVO>;

    public function new() {
        var i:UInt;
        programPointer = 0;
        instructionPointer = 0;
        manualInstruction = new InstructionVO(0, "NOP");
        programs = new Array<Array<InstructionVO>>();

        instructions = new Array<InstructionVO>();
        i = 0;
        instructions.push(new InstructionVO(i++, "LDI 2"));
        instructions.push(new InstructionVO(i++, "MOV R1"));
        instructions.push(new InstructionVO(i++, "LDI 1"));
        instructions.push(new InstructionVO(i++, "ADD"));
        instructions.push(new InstructionVO(i++, "SDA 0"));
        instructions.push(new InstructionVO(i++, "OUT A"));
        instructions.push(new InstructionVO(i++, "LDI 2"));
        instructions.push(new InstructionVO(i++, "ADD"));
        instructions.push(new InstructionVO(i++, "SDA 1"));
        instructions.push(new InstructionVO(i++, "OUT A"));
        instructions.push(new InstructionVO(i++, "LDA 0"));
        instructions.push(new InstructionVO(i++, "SUB"));
        instructions.push(new InstructionVO(i++, "LDA 1"));
        instructions.push(new InstructionVO(i++, "SUB"));
        instructions.push(new InstructionVO(i++, "OUT A"));
        instructions.push(new InstructionVO(i++, "MOV R2"));
        programs[0] = instructions;

        instructions = new Array<InstructionVO>();
        i = 0;
// W
        instructions.push(new InstructionVO(i++, "LDI 13"));
        instructions.push(new InstructionVO(i++, "OUT A"));
// E
        instructions.push(new InstructionVO(i++, "LDI 4"));
// E für später speichern
        instructions.push(new InstructionVO(i++, "MOV R1"));
        instructions.push(new InstructionVO(i++, "OUT A"));
// L
        instructions.push(new InstructionVO(i++, "LDI 9"));
        instructions.push(new InstructionVO(i++, "OUT A"));
// C
        instructions.push(new InstructionVO(i++, "LDI 2"));
        instructions.push(new InstructionVO(i++, "OUT A"));
// O
        instructions.push(new InstructionVO(i++, "LDI 10"));
        instructions.push(new InstructionVO(i++, "OUT A"));
// M
        instructions.push(new InstructionVO(i++, "LDI 11"));
        instructions.push(new InstructionVO(i++, "OUT A"));
// E
        instructions.push(new InstructionVO(i++, "OUT R1"));
// !
        instructions.push(new InstructionVO(i++, "LDI 14"));
        instructions.push(new InstructionVO(i++, "OUT A"));
        programs[1] = instructions;

        instructions = new Array<InstructionVO>();
        i = 0;
        instructions.push(new InstructionVO(i++, "LDI 10"));
        instructions.push(new InstructionVO(i++, "MOV R1"));
        instructions.push(new InstructionVO(i++, "LDI 0"));
        instructions.push(new InstructionVO(i++, "INC"));
        instructions.push(new InstructionVO(i++, "JNE 3"));
        instructions.push(new InstructionVO(i++, "OUT A"));
        instructions.push(new InstructionVO(i++, "SDA 0"));
        instructions.push(new InstructionVO(i++, "LDI 0"));
        instructions.push(new InstructionVO(i++, "MOV R1"));
        instructions.push(new InstructionVO(i++, "LDA 0"));
        instructions.push(new InstructionVO(i++, "DEC"));
        instructions.push(new InstructionVO(i++, "JNE 10"));
        instructions.push(new InstructionVO(i++, "OUT A"));
        instructions.push(new InstructionVO(i++, "SDA 0"));
        instructions.push(new InstructionVO(i++, "JMP 0"));
        instructions.push(new InstructionVO(i++, "NOP"));
        programs[2] = instructions;
    }

    public function getInstruction(pointer:Int):InstructionVO {
        return programs[programPointer][pointer];
    }

    public function getCurrentInstructions():Array<InstructionVO> {
        return programs[programPointer];
    }

    public function getInstructionsByProgramPointer(pointer:Int):Array<InstructionVO> {
        return programs[pointer];
    }

}
