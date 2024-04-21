#pragma once
#include<string>
using namespace std;
class PowerSupply
{
protected:
	string efficiencyRating;
	int wattage;
	double price;
public:
	PowerSupply();
	PowerSupply(string efficiencyRating, int wattage, double price);
	void setefficiencyRating(string s);
	void setwattage(int s);
	void setprice(double p);
	string getefficiencyRating();
	int getwattage();
	double getprice();



		void show();

		static PowerSupply*userimplementation(int g);
};

