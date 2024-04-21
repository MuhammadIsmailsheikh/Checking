#include "ALU.h"
#include<iostream>
using namespace std;
ALU::ALU() {
	NoOfSubtractor = 0;
	NoOfRegisters = 0;
	sizeOfRegisters = 0;
	NoOfAdders = 0;

}

ALU::ALU(int a, int b, int c, int d) {
	NoOfSubtractor = b;
	NoOfRegisters = c;
	sizeOfRegisters = d;
	NoOfAdders = a;
}
int ALU::getsubtractor()
{
	return NoOfSubtractor;
}
int ALU::getregister()
{
	return NoOfRegisters;
}
int ALU::adder()
{
	return NoOfAdders;
}
int ALU::sizeofregister()
{
	return sizeOfRegisters;
}

void ALU::setsubtractor(int a)
{
	NoOfSubtractor = a;
}
void ALU::setregister(int a)
{
	NoOfRegisters = a;
}
void ALU::setadder(int a)
{
	NoOfAdders = a;
}
void ALU::setsizeofregister(int a)
{
	sizeOfRegisters = a;
}

void ALU::show() {

	cout << " NoOfSubtractor" << NoOfSubtractor<<endl;
	cout << " NoOfRegisters"<<NoOfRegisters << endl;
	cout << " sizeOfRegisters"<<sizeOfRegisters << endl;
	cout << " NoOfAdders" << NoOfAdders << endl;
}

ALU *ALU::userimplementation(int g) {
	cout << "      ALU\n" << endl;
	ALU* MeraALU = nullptr;
	int adder, substractor;
	int Register, sizeofregister;
	int hi;
	cout << "Press 1 if you want to setup ALU otherwise press any number" << endl;
	cin >> hi;
	if (hi == 1) {
		cout << "Enter No of adders" << endl;
		cin >> adder;
		cout << "Enter No of substractor" << endl;
		cin >> substractor;
		cout << "Enter No of Registers" << endl;
		cin >> Register;
		cout << "Enter sizeofRegister" << endl;
		cin >> sizeofregister;

		return new ALU(adder, substractor, Register, sizeofregister);
		
	}
	else {
		return new ALU(5, 5, 5, 2);
		
	}
}