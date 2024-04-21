#include "Windows.h"
#include<iostream>
using namespace std;
	void Windows::display() {
		computer->show();
		cout << endl;
		graphiccard->show();
		cout << endl;
		storagedevice->show();
		cout << endl;
		networkcard->show();
		cout << endl;
		powersupply->show();
		cout << endl;
		cse->show();
		cout << endl;
		battery->show();
		cout << endl;

		int totalprice = 0;
		int g = 1;

		int laptop;
		cout << "Enter 1 for PC and 2 for Laptop" << endl;
		cin >> laptop;
		while (laptop != 1 && laptop != 2) {
			if (laptop != 1 && laptop != 2) {
				cout << "Enter correct computer type!" << endl;
				cin >> laptop;
			}
		}

		cout << "-------------------------------------------------------------------------------" << endl;

		cout << "Detail bill of your computer" << endl;
		cout << "Price of CPU is :" << computer->getcpu().getprice() << endl;
		cout << "Price of MotherBoard is :" << computer->getmotherboard().getprice() << endl;
		cout << "Price of Physical Memory is :" << computer->getphysicalmemory().getprice() << endl;
		cout << "Price of storage device is:" << storagedevice->getprice() << endl;
		cout << "Price of Power Supply  is:" << powersupply->getprice() << endl;
		cout << "Price of Network device is:" << networkcard->getprice() << endl;
		if (g == 1) {
			cout << "Price of Graphic Card is:" << graphiccard->getprice() << endl;
		}
		cout << "Price of Battery is:" << battery->getprice() << endl;
		if (laptop == 1) {
			cout << "Price of Case is:" << cse->getprice() << endl;
		}
		if (laptop == 2) {
			cout << "No price of case for laptop" << endl << endl;
		}
		if (g == 1) {

			totalprice = computer->getcpu().getprice() + computer->getmotherboard().getprice() + computer->getphysicalmemory().getprice()
				+ storagedevice->getprice() + powersupply->getprice() + networkcard->getprice() + graphiccard->getprice() + battery->getprice() +
				cse->getprice();

			if (laptop == 2) {
				totalprice -= cse->getprice();
			}
		}
		if (g == 2) {
			totalprice = computer->getcpu().getprice() + computer->getmotherboard().getprice() + computer->getphysicalmemory().getprice()
				+ storagedevice->getprice() + powersupply->getprice() + networkcard->getprice() + battery->getprice() +
				cse->getprice();
			if (laptop == 2) {
				totalprice -= cse->getprice();
			}
		}

		cout << "total price is" << "Rs :" << totalprice << endl;
		cout << "-------------------------------------------------------------------------------" << endl;

	}

	Windows* Windows::userimplimentation() {
		int g = 1;
		Computer*MeraComputer = Computer::userimplementation(g);

		//GraphicsCard
		GraphicsCard* MeraGraphiccard = GraphicsCard::userimplementation(g);
		//Storage device
		StorageDevice* MeraStorage = StorageDevice::userimplementation(g);
		//NetworkCard
		NetworkCard* MeraNetwork = NetworkCard::userimplementation(g);
		//PowerSupply
		PowerSupply* MeraPower = PowerSupply::userimplementation(g);
		//Battery

		Battery* MeraBattery = Battery::userimplementation(g);
		//Case

		Case* MeraCase = Case::userimplementation(g);
		Windows* assemble1 = new Windows(MeraBattery, MeraCase, MeraComputer, MeraGraphiccard, MeraNetwork, MeraPower, MeraStorage);
		return assemble1;
	}
