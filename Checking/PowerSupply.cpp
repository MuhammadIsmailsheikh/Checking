#include "PowerSupply.h"
#include<string>
using namespace std;
#include<iostream>
#include"PlusBronze.h"
#include"PlusGold.h"

PowerSupply::PowerSupply() {
	efficiencyRating = "";
	wattage = 0;
	price = 0;
}
PowerSupply::PowerSupply(string efficiencyRating, int wattage, double price) {
	this->efficiencyRating = efficiencyRating;
	this->wattage = wattage;
	this->price = price;
}
void PowerSupply::setefficiencyRating(string s) {
	int size = 0;
	while (s[size] != '\0') {
		size++;
	}
	for (int i = 0;i < size;i++)
		this->efficiencyRating[i] = s[i];
}
void PowerSupply::setwattage(int s) {
	this->wattage = s;
}
void PowerSupply::setprice(double p) {
	this->price = price;
}
string PowerSupply::getefficiencyRating() {
	return efficiencyRating;
}
int PowerSupply::getwattage() {
	return wattage;
}
double PowerSupply::getprice() {
	return price;
}

void PowerSupply::show() {
	cout << "effieciency of PowerSupply is :" << efficiencyRating  << endl;
	cout << "wattage of PowerSupply is :" << wattage <<"Watt"<< endl;
	cout << "price of PowerSupply is :" << "Rs" << price << endl;
}

PowerSupply* PowerSupply::userimplementation(int g) {
	system("cls");
	cout << "    \t\t\t  PowerSupply\n" << endl;
	PowerSupply* MeraPower = nullptr;
	int efficiencyRating;
	int wattage;
	double price4;
	cout << "Enter efficiencyRating of PowerSupply 1 for 80 PLus Bronze 2 for 80 Plus Gold:";
	cin >> efficiencyRating;
	while (efficiencyRating != 1 && efficiencyRating != 2) {
		if (efficiencyRating != 1 || efficiencyRating != 2) {
			cout << "Enter correct Power Supply:";
			cin >> efficiencyRating;
		}
	}
	cout << "Enter wattage in watts of PowerSupply:";
	cin >> wattage;
	while (wattage <30 || wattage>70) {
		if (efficiencyRating <30 || efficiencyRating > 70) {
			cout << "Enter correct wattage of Power Supply:";
			cin >> wattage;
		}
	}
	//cout << "Enter price of PowerSupply " << endl;
	//cin >> price4;
	if (efficiencyRating == 1) {
		PlusBronze* MeraPowersupply = new PlusBronze("80 Plus Bronze", wattage, 9000);
		MeraPower = MeraPowersupply;
		return MeraPower;
	}
	if (efficiencyRating == 2) {
		PlusGold* MeraPowersupply = new PlusGold("80 Plus Gold", wattage, 120000);
		MeraPower = MeraPowersupply;
		return MeraPower;
	}

}