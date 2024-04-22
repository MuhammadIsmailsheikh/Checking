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
}GraphicsCard::GraphicsCard(string s, int memorysize, double price) {
	// Assuming brand has enough capacity to hold the brand name
	for (size_t i = 0; i < s.length(); i++) {
		this->brand += s[i];
	}

	this->memorySize = memorysize;
	this->price = price;
}

void GraphicsCard::setbrand(string s) {
	// Assuming brand has enough capacity to hold the new brand name
	this->brand = ""; // Clear the brand string
	for (size_t i = 0; i < s.length(); i++) {
		this->brand += s[i];
	}
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
	cout << "Brand of GraphicCard is :" << this->brand << endl;
	cout << "size of GraphicCard is :" << this->memorySize<<"GB" << endl;
	cout << "price of GraphicCard is :" <<"Rs :" << this->price << endl;

}

GraphicsCard* GraphicsCard::userimplementation(int g) {
	string brand1;
	int size;
	double priceg;
	int c;
	int c1;
	Model m;
	GraphicsCard* MeraGraphiccard = nullptr;
	system("cls");	
	cout << "  \t\t\t    GraphicCard\n" << endl;
	if (g == 1) {
		cout << "Enter Brand of Graphic Card:\n1.Nvidia.\n2.AMD." << endl;
		cin >> brand1;
		while (brand1 != "1" && brand1 != "2") {
			if (brand1 != "1" || brand1 != "2") {
				cout << " Incorrect card!please enter Nvidia or AMD " << endl;
				cin >> brand1;
			}
		}
		cout << "\nEnter size of Graphic Card" << endl;
		cin >> size;
		while (size < 2 || size >24) {
			if (size < 2 || size>24) {
				cout << " Incorrect card size! Enter size between 1 to 24:";
				cin >> size;
			}
		}
		//	cout << "Enter price of Graphic Card" << endl;
			//cin >> priceg;
		if (brand1 == "2") {
			AMD* MeraCard = new AMD(brand1, size, 30000);
			MeraGraphiccard = MeraCard;
			return MeraGraphiccard;

		}
		if (brand1 == "1") {
			Nvidia* MeraCard = new Nvidia(brand1, size, 30000);
			MeraGraphiccard = MeraCard;
			return MeraGraphiccard;
		}
	}

	if(g==2) {
		cout << "Apple has integrated GPU inside CPU" << endl;
		
			
		
		
	}
}
