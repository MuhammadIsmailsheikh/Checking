#include "StorageDevice.h"
#include<string>
#include<iostream>
#include"ConsumerHDD.h"
#include"NASHDD.h"
using namespace std;

StorageDevice::StorageDevice() {
	type = "";
	capacity = 0;
	price = 0;
}
StorageDevice::StorageDevice(string type, int capacity, double price) {
	this->type = type;
	this->capacity = capacity;
	this->price = price;
}
void StorageDevice::settype(string s) {
	int size = 0;
	while (s[size] != '\0') {
		size++;
	}
	for (int i = 0;i < size;i++)
		this->type[i] = s[i];
}
void StorageDevice::setcapacity(int s) {
	this->capacity = s;
}
void StorageDevice::setprice(double p) {
	this->price = price;
}
string StorageDevice::gettype() {
	return type;
}
int StorageDevice::getcapacity() {
	return capacity;
}
double StorageDevice::getprice() {
	return price;
}

void StorageDevice::show() {
	cout << "type of StorageDevice is :" << type << endl;
	cout << "capacity of StorageDevice is :" << capacity <<" GB" << endl;
	cout << "price of StorageDevice is :" << "Rs" << price << endl;
}
static StorageDevice* userimplementation();
StorageDevice* StorageDevice::userimplementation(int g) {

	//Storagedevice
	system("cls");
	cout << "  \t\t\t    StorageDevice\n" << endl;
	StorageDevice* MeraStorage = nullptr;
	int brand2;
	int capacitystorage;
	double price2;
	cout << "Enter type of StorageDevice 1 for HDD 2 for SSD:";
	cin >> brand2;
	while ((brand2 != 1) && (brand2 != 2)) {
		if (brand2 != 1 || brand2 != 2) {
			cout << "Enter correct storage type:";
			cin >> brand2;
		}
	}
	int hdd;
	if (brand2 == 1) {
		cout << "Press 1 for Consumer HDD 2 for NAS HDD:";
		cin >> hdd;
		while ((hdd != 1) && (hdd != 2)) {
			if (hdd != 1 || hdd != 2) {
				cout << "Enter correct HDD types:";
				cin >> hdd;
			}
		}
	}

	cout << "Enter size of StorageDevice:";
	cin >> capacitystorage;
	//cout << "Enter price of StorageDevice" << endl;
	//cin >> price2;
	if (brand2 == 1) {
		if (hdd == 1) {

			ConsumerHDD* MeraStorageDevice1 = new ConsumerHDD("ConsumerHDD", capacitystorage, 15000);
			MeraStorage = MeraStorageDevice1;
			return MeraStorage;
		}
		if (hdd == 2) {
			NASHDD* MeraStorageDevice2 = new NASHDD("NAS HDD", capacitystorage, 16000);
			MeraStorage = MeraStorageDevice2;
			return MeraStorage;
		}
	}
	if (brand2 == 2) {
		StorageDevice* MeraStorageDevice3 = new StorageDevice("SSD", capacitystorage, 180000);
		MeraStorage = MeraStorageDevice3;
		return MeraStorage;
	}
}