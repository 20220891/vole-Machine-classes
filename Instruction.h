// Instruction.h
#ifndef INSTRUCTION_H
#define INSTRUCTION_H

class Instruction {
private:
    int opcode;
    int operand;

public:
    Instruction(int op, int opr);

    int getOpcode() const;
    int getOperand() const;
};

#endif // INSTRUCTION_H
