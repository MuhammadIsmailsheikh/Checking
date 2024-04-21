#pragma once
#include<string>
using namespace std;
class StorageDevice
{
	string type;
	int capacity;
	double price;
public:
	StorageDevice();
	StorageDevice(string type, int capacity, double price);
	void settype(string s);
	void setcapacity(int s);
	void setprice(double p);
	string gettype();
	int getcapacity();
	double getprice();






	void show();

	static StorageDevice* userimplementation(int g);
};



