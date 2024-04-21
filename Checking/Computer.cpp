#include "Computer.h"
#include<iostream>
using namespace std;
#include"Model.h"
#include"CPU.h"
#include"MotherBoard.h"
#include"PhysicalMemory.h"
#include"DDR45.h"
#include"LPDDR45.h"
Computer::Computer() {
	

}

Computer::Computer(PhysicalMemory* pm, MotherBoard* mb, CPU* cpu) {
	this->pm = pm;
	this->mb = mb;
	this->cpu = cpu;
}
void Computer::setphysicalmemory(PhysicalMemory* pm) {
	this->pm = pm;
}
void Computer::setmotherboard(MotherBoard* mb) {
	this->mb = mb;
}
void Computer::setcpu(CPU* cpu) {
	this->cpu = cpu;
}
PhysicalMemory& Computer::getphysicalmemory() {
	return *pm;
}
MotherBoard& Computer::getmotherboard() {
	return *mb;
}
CPU& Computer::getcpu() {
	return *cpu;
}
void Computer::show() {

	cout << "Specifications of Computer are :" << endl;
	cout << "     PhysicalMemory\n" << endl;
	pm->show();
    cout << endl;
	cout << "     MotherBoard\n" << endl;
	mb->show();
    cout << endl;
	cout << "     CPU\n" << endl;
	cpu->show();
    cout << endl;

}
// Computer.cpp
Computer* Computer::userimplementation(int g) {
    Model m;
    CPU* MeraCPU = nullptr;
    MotherBoard* Meramotherboard = nullptr;
    PhysicalMemory* MeraPhysicalMemory = nullptr;
    Computer* MeraComputer = nullptr;

  if (g == 1) {
        // For PC
        
        MeraComputer = new Computer(MeraPhysicalMemory->userimplementation(g), Meramotherboard->userimplementation(g), MeraCPU->userimplementation(g));
        return MeraComputer;
    }
    else if (g == 2) {
        // For Mac
      
        MeraComputer = new Computer(MeraPhysicalMemory->userimplementation(g), Meramotherboard->userimplementation(g), MeraCPU->userimplementation(g));
        return MeraComputer;
    }
    else {
        cout << "Invalid model type selected in  computer!" << endl;
        // Handle the error, possibly by asking the user to input the model type again
        return nullptr;
    }

   
}

	
