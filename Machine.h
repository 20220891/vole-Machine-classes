// Machine.h
#ifndef MACHINE_H
#define MACHINE_H

#include <vector>
#include <string>
#include "Instruction.h"

class Machine {
private:
    std::vector<int> registers;
    std::vector<int> memory;
    std::string screen;

public:
    Machine();

    void loadProgram(const std::string& filename);
    void executeStep();
    void executeInstruction(const Instruction& instruction, int& pc);
    void displayStatus() const;
};

#endif // MACHINE_H
