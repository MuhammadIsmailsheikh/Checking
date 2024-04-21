#include "GraphicsCard.h"
#include<string>
#include"Model.h"
#include"Nvidia.h"
#include"AMD.h"
#include"AppleGPU.h"
using namespace std;
#include<iostream>
GraphicsCard::GraphicsCard() {
	brand = "";
	memorySize = 0;
	price = 0;
}
GraphicsCard::GraphicsCard(string brand, int memorysize, double price) {
	int size = 0;

	//calculating size
	/*while (brand[size] != '\0') {
		size++;
	}*/
	//copying name
	//for (int i = 0;i < size;i++) {
		this->brand = brand;
//	}
	this->memorySize = memorysize;
	this->price = price;
}
void GraphicsCard::setbrand(string s) {
	int size = 0;
	while (s[size] != '\0') {
		size++;
	}
	for (int i = 0;i < size;i++)
		this->brand[i] = s[i];
}
void GraphicsCard::setmemorysize(int s) {
	this->memorySize = s;
}
void GraphicsCard::setprice(double p) {
	this->price = price;
}
string GraphicsCard::getbrand() {
	return brand;
}
int GraphicsCard::germemorysize() {
	return memorySize;
}
double GraphicsCard::getprice() {
	return price;
}
void GraphicsCard::show() {
	cout << "Brand of GraphicCard is :" << brand << endl;
	cout << "size of GraphicCard is :" << memorySize<<"GB" << endl;
	cout << "price of GraphicCard is :" <<"Rs :" << price << endl;

}

GraphicsCard* GraphicsCard::userimplementation(int g) {
	string brand1;
	int size;
	double priceg;
	int c;
	int c1;
	Model m;
	GraphicsCard* MeraGraphiccard = nullptr;
	
	cout << "      GraphicCard\n" << endl;
	if (g == 1) {
		cout << "Enter Brand of Graphic Card" << endl;
		cin >> brand1;
		while (brand1 != "Nvidia" && brand1 != "AMD") {
			if (brand1 != "Nvidia" || brand1 != "AMD") {
				cout << " Incorrect card!please enter Nvidia or AMD " << endl;
				cin >> brand1;
			}
		}
		cout << "Enter size of Graphic Card" << endl;
		cin >> size;
		while (size < 2 || size >24) {
			if (size < 2 || size>24) {
				cout << " Incorrect card size! Enter size between 1 to 24" << endl;
				cin >> size;
			}
		}
		//	cout << "Enter price of Graphic Card" << endl;
			//cin >> priceg;
		if (brand1 == "AMD") {
			AMD* MeraCard = new AMD(brand1, size, 30000);
			MeraGraphiccard = MeraCard;
			return MeraGraphiccard;

		}
		if (brand1 == "Nvidia") {
			Nvidia* MeraCard = new Nvidia(brand1, size, 30000);
			MeraGraphiccard = MeraCard;
			return MeraGraphiccard;
		}
	}

	if(g==2) {
		cout << "Apple has integrated GPU" << endl;
		cout << "Press 1 if you want to add external graphic card in Apple " << endl;

		cin >> c;
		if (c == 1) {
			cout << "Enter size for apple external card" << endl;
			cin >> c1;
			while (c1 < 2 || c1 >24) {
				if (c1 < 2 || c1>24) {
					cout << " Incorrect external card size " << endl;
					cin >> size;
				}
			}
			GraphicsCard* applecard1=new GraphicsCard("AMD apple card", c1, 15000);
			MeraGraphiccard = applecard1;

			return  MeraGraphiccard;
		}
		if (c != 1) {
			GraphicsCard* applecard2 = new GraphicsCard("No external Graphic Card", 0, 0);
			MeraGraphiccard = applecard2;

			return  MeraGraphiccard;
		}
	}
}