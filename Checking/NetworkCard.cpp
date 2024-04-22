#include "NetworkCard.h"
#include<string>
#include<iostream>
#include"NIC.h"
#include"Wireless_NIC.h"
using namespace std;

NetworkCard::NetworkCard() {
	type = "";
	speed = 0;
	price = 0;
}
NetworkCard::NetworkCard(string type, int speed, double price) {
	this->type = type;
	this->speed = speed;
	this->price = price;
}
void NetworkCard::settype(string s) {
	int size = 0;
	while (s[size] != '\0') {
		size++;
	}
	for (int i = 0;i < size;i++)
		this->type[i] = s[i];
}
void NetworkCard::setspeed(int s) {
	this->speed = s;
}
void NetworkCard::setprice(double p) {
	this->price = price;
}
string NetworkCard::gettype() {
	return type;
}
int NetworkCard::getspeed() {
	return speed;
}
double NetworkCard::getprice() {
	return price;
}

void NetworkCard::show() {
	cout << "Brand of  NetworkCard is :" << type << endl;
	cout << "speed of NetworkCard is :" << speed<<"bps" << endl;
	cout << "price of NetworkCard is :" <<"Rs :" << price << endl;
}

NetworkCard* NetworkCard::userimplementation(int g) {
	system("cls");	
	cout << "  \t\t\t    NetworkCard\n" << endl;
	NetworkCard* MeraNetwork = nullptr;
	int brand3;
	int speed;
	double price3;
	cout << "Enter Brand of NetworkCard 1 for NIC and 2 for Wirless NIC:";
	cin >> brand3;
	while (brand3 != 1 && brand3 != 2) {
		if (brand3 != 1 || brand3 != 2) {
			cout << "Enter correct network card:";
			cin >> brand3;
		}
	}
	cout << "Enter speed of NetworkCard:";
	cin >> speed;
	//cout << "Enter price of NetworkCard" << endl;
	//cin >> price3;
	if (brand3 == 1) {
		NIC* MeraNetworkCard = new NIC("Ethernet", speed, 10000);
		MeraNetwork = MeraNetworkCard;
		return MeraNetwork;
	}
	if (brand3 == 2) {
		Wireless_NIC* MeraNetworkCard = new Wireless_NIC("Ethernet", speed, 11000);
		MeraNetwork = MeraNetworkCard;
		return MeraNetwork;
	}
}