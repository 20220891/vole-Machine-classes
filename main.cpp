// main.cpp
#include <iostream>
#include "Machine.h"

int main() {
    Machine machine;
    machine.loadProgram("2000.txt");
    machine.executeStep();
    machine.displayStatus();

    return 0;
}
