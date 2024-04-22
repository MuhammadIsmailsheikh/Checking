#include "PhysicalMemory.h"
#include<iostream >
#include"Model.h"
#include"DDR45.h"
#include"LPDDR45.h"
using namespace std;
PhysicalMemory::PhysicalMemory() {
	capacity = 0;
}
PhysicalMemory::PhysicalMemory(int c,string name,int price) {
	this->capacity = c;
	this->name = name;
	this->price = price;
}
void PhysicalMemory::setcapacity(int c) {
	this->capacity = c;
}
int PhysicalMemory::getcapacity() {
	return capacity;
}
void PhysicalMemory::show() {
	cout << "Capacity of physical memory is:"<< capacity<< "GB"<<endl;
	cout << "Physical memory is:" << name << endl;
}
int PhysicalMemory::getprice() {
	return price;
}
PhysicalMemory* PhysicalMemory::userimplementation(int g) {
	Model m;
	int capacityphysical;
	if (g == 1) {


		DDR45* MeraPhysicalMemory = nullptr;

		cout << "Enter capacity for DDR4/5:";
		cin >> capacityphysical;
		MeraPhysicalMemory = new DDR45(capacityphysical, "DDR 4/5", 1500); // Constructor with user-defined capacity and memory type
		return MeraPhysicalMemory;
	}
	else if (g == 2) {
		LPDDR45* MeraPhysicalMemory = nullptr;
		cout << "Enter capacity for LPDDR4/5" << endl;
		cin >> capacityphysical;
		MeraPhysicalMemory = new LPDDR45(capacityphysical, "LPDDR 4/5", 2000); 
		return MeraPhysicalMemory;// Constructor with user-defined capacity and memory type
		//MeraComputer = new Computer(MeraPhysicalMemory, Meramotherboard->userimplementation, MeraCPU->userimplementation);
	}
	else {
		cout << "Invalid model type selected!" << endl;
		// Handle the error, possibly by asking the user to input the model type again
	}
}
