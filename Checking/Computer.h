#pragma once

#include "PhysicalMemory.h"
#include "MotherBoard.h"
#include "CPU.h"

    class Computer {
    private:
        PhysicalMemory* pm;
        MotherBoard* mb;
        CPU* cpu;

    public:
        // Constructors
        Computer(); // Default constructor
        Computer( PhysicalMemory* pm, MotherBoard* mb, CPU* cpu); // Parameterized constructor

        // Member functions to set and get components
        void setphysicalmemory(PhysicalMemory* pm);
        void setmotherboard(MotherBoard* mb);
        void setcpu(CPU* cpu);
        PhysicalMemory& getphysicalmemory();
        MotherBoard& getmotherboard();
        CPU& getcpu();
        void show();
        static Computer* userimplementation(int g);
    };



