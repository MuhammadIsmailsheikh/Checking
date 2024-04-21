#pragma once
using namespace std;
#include<string>
class PhysicalMemory
{
protected:
	int price;
	string name;
	int capacity;
public:
	PhysicalMemory();
	PhysicalMemory(int c,string name,int price);
	void setcapacity(int c);
	int getcapacity();
	void show();
	int getprice();
	static PhysicalMemory* userimplementation(int g);
};

