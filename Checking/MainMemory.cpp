#include "MainMemory.h"

#include<iostream>
using namespace std;

MainMemory::MainMemory() {
	capacity = 0;
	TechnologyType = "";
}
MainMemory::MainMemory(int c, string t) {
	this->capacity = c;
	this->TechnologyType = t;
}
void MainMemory::setcapacity(int c) {
	this->capacity = c;
}
void MainMemory::setTechnologyType(string t) {
	this->TechnologyType = t;
}
int MainMemory::getcapacity() {
	return capacity;
}
string MainMemory::getTechnologyType() {
	return TechnologyType;
}
void MainMemory::show() {
	cout << "Capacity of mainmemory is:" << capacity <<"GB" << endl;
	cout << "Technologytype of mainmemory is:" << TechnologyType << endl;

}

MainMemory* MainMemory:: userimplementation(int g) {
	cout << "      MainMemory\n" << endl;
	int capacitymain;
	string technologytype;

	cout << "Enter capacity of memory" << endl;   // getting values from user
	cin >> capacitymain;
	if (g == 1) {
		while (capacitymain < 2 || capacitymain>256) {
			if (capacitymain < 2 || capacitymain>256) {
				cout << "Enter correct size of Mainmemory" << endl;
				cin >> capacitymain;
			}
		}

	}
	if (g == 2) {
		while (capacitymain < 4 || capacitymain>128) {
			if (capacitymain < 4 || capacitymain>128) {
				cout << "Enter correct size of Mainmemory" << endl;
				cin >> capacitymain;
			}
		}

	}
	cout << "Enter technology Type" << endl;
	cin >> technologytype;
	while (technologytype != "Semiconductor" && technologytype != "Silicon" && technologytype != "semiconductor" && technologytype != "silicon") {

		if (technologytype != "Semiconductor" && technologytype != "Silicon" && technologytype != "semiconductor" && technologytype != "silicon") {
			cout << "Enter correct technology type" << endl;
			cin >> technologytype;
		}
	}
	MainMemory* MeraMemory = new MainMemory(capacitymain, technologytype);  // Constructor with capacity and technologytye
	return MeraMemory;
}