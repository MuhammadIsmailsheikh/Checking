#include "ControlUnit.h"
#include<iostream>
using namespace std;
ControlUnit::ControlUnit() {
	clock = 0;
}
ControlUnit::ControlUnit(float clock) {
	this->clock = clock;
}
float ControlUnit::getclock() {
	return clock;
}
void ControlUnit::setclock(float a) {
	this->clock = a;
}
void ControlUnit::show() {
	cout << "Clock of controlunit is:"<<clock <<"s" << endl;

}

ControlUnit* ControlUnit:: userimplementation(int g) {
	int hu;
	system("cls");
	cout << "   \t\t\t   ControlUnit\n" << endl;
	cout << "Press 1 if you want to setup Control Unit for default setup press any number:";
	cin >> hu;
	ControlUnit* MeraCU = nullptr;
	if (hu == 1) {
		float clock;
		cout << "Enter clock:";
		cin >> clock;
		ControlUnit* MeraCU1 = new ControlUnit(clock);
		MeraCU = MeraCU1;
		return MeraCU;
	}
	else
	{
		ControlUnit* MeraCU2 = new ControlUnit(5);
		MeraCU = MeraCU2;
		return MeraCU;
	}

}