#include "Port.h"
#include<string>
#include<iostream>
using namespace std;
Port::Port() {
	type = "";
	baud_rate = 0;
	number = 0;
}
Port::Port( string type, int baud_rate) {
	this->type = type;
	this->baud_rate = baud_rate;
	this->number = number;
}
void Port::settype(string s) {
	this->type = s;
}
void Port::setbaud_rate(int baud_rate) {
	this->baud_rate = baud_rate;
}
string Port::gettype() {
	return type;
}
int Port::getbaud_rate() {
	return baud_rate;
}
int Port::getportnumber() {
	return number;
}
void Port::setportnumber(int n) {
	this->number = n;
}
void Port::show() {
	cout << "Type of port is :" << type << endl;
	cout << "Baude rate of port is:" << baud_rate << endl;
	cout << endl;
}