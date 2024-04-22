#include"ALU.h"
#include"ControlUnit.h"
#include<iostream>
using namespace std;
#include"CPU.h"
#include"MainMemory.h"
#include"port.h"
#include"PhysicalMemory.h"
#include"MotherBoard.h"
#include"Computer.h"
#include"GraphicsCard.h"
#include"StorageDevice.h"
#include"NetworkCard.h"
#include"PowerSupply.h"
#include"Battery.h"
#include"Case.h"
#include"Intel.h"
#include"AppleSilicon.h"
#include"DDR45.h"
#include"LPDDR45.h"
#include"AMD.h"
#include"Nvidia.h"
#include"ConsumerHDD.h"
#include"NASHDD.h"
#include"NIC.h"
#include"Wireless_NIC.h"
#include"PlusGold.h"
#include"PlusBronze.h"
#include"ATX.h"
#include"MicroATX.h"
#include"ComputerAssembly.h"
#include"Windows.h"
#include"AppleAssembly.h"
#include"Model.h"
string g;
int main() {
	
	unsigned int totalprice;


	cout << "Enter Computer type (1 for Pc 2 for Mac):";
	cin >> g;
	while (g != "1" && g != "2") {
		if (g != "1" && g != "2") {
			cout << "Enter correct computer type!" << endl;
			cin >> g;
		}
	}
	//Model m(model);


	
	ComputerAssembly* assemble = nullptr;
	cout << "\nOverall Specifications of computer you want are:" << endl;
	system("pause");

	if (g == "1") {
		Windows* assemble1 = Windows::userimplimentation();
		
		assemble1->display();
	}
	if (g == "2") {
		AppleAssembly* assemble2 = AppleAssembly::userimplimentation();
		
		assemble2->display();
	}
	
	
}