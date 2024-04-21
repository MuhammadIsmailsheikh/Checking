#pragma once
using namespace std;
#include<string>
class GraphicsCard
{
protected:
	string brand;
	int memorySize;
	double price;
public:
	GraphicsCard();
	GraphicsCard(string brand, int memorysize, double price);
	void setbrand(string s);
	void setmemorysize(int s);
	void setprice(double p);
	string getbrand();
	int germemorysize();
	double getprice();
	void show();

	static GraphicsCard* userimplementation(int g);
};

