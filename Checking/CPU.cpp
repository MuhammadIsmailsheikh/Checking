#include "CPU.h"
#include<iostream>
#include"GraphicsCard.h"
#include"AppleSilicon.h"
#include"Intel.h"
#include"ALU.h"
#include"Model.h"
#include"ControlUnit.h"
#include"AppleGPU.h"
using namespace std;
CPU::CPU():alu(nullptr),cu(nullptr) {
   
}
CPU::CPU(const ALU* alu, const ControlUnit* cu,string name,int price): alu(new ALU(*alu)),cu(new ControlUnit(*cu)),cpuname(name){
  //  this->alu = alu;
    //this->cu = cu;
    this->price = price;
   // this->graphiccard = graphiccard;
}
void CPU::setalu(ALU* alu) {

}
void CPU::setcu(ControlUnit* cu) {
    this->cu = cu;
}

ALU &CPU::getalu() {
    return *alu;
}

ControlUnit& CPU::getcontrolunit() {
    return *cu;
}

int CPU::getprice() {
    return price;
}
//GraphicsCard &CPU::getgraphiccard() {
//
//    return *graphiccard;
//}

void CPU::show() {
    cout << "Name of Cpu is :" <<cpuname<< endl;

    cout << "This CPU's ALU has following specifications :\n" << endl;
    alu->show();
	cout << endl;
    cout << "This CPU's ControlUnit has following specifications :\n" << endl;
    cu->show();
	cout << endl;
}
CPU::~CPU() {
    delete alu;
    delete cu;
}

CPU *CPU::userimplementation(int g) {
	Model m;
	AppleGPU* MeraappleCard = nullptr;
	AppleSilicon* MeraappleCPU = nullptr;
	//cout << "Enter CPU type : 1 for Intel 2 for Apple" << endl;
	//cin >> cputype;
	ALU* MeraALU = nullptr;
	ControlUnit* MeraCU = nullptr;
	if (g == 1) {
		// For PC
		Intel* MeraCPU1 = new Intel(MeraALU->userimplementation( g), MeraCU->userimplementation( g), "x86", 100000);
		return MeraCPU1;
	}
	else if (g == 2) {
		// For Mac
		
		AppleGPU* MeraappleCard1 = new AppleGPU("AppleGPU", 4, 20000);
		MeraappleCard = MeraappleCard1;
		AppleSilicon* MeraCPU2 = new AppleSilicon(MeraALU->userimplementation(g), MeraCU->userimplementation(g), "ARM64", MeraappleCard->userimplimentation(), 350000);
		MeraappleCPU = MeraCPU2;
		return MeraappleCPU;
	}

}