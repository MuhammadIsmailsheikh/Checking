#include "Battery.h"
#include<iostream>
using namespace std;
Battery::Battery() {
	capacity = 0;
}

Battery::Battery(int c,int a) {
	this->capacity = c;
	this->price = a;
}

void Battery::setcapacity(int c) {
	this->capacity = c;
}

int Battery::getcapacity() const {
	return capacity;
}

	void Battery::show() {
		cout << "Capcity of battery is :" << capacity << "MAH" << endl;
	}

	int Battery::getprice() {
		return price;
	}
	Battery* Battery::userimplementation(int g) {

		cout << "Enter MAH of battery:";
		int mah;
		cin >> mah;
		Battery* b = new Battery(mah, 9000);
		return b;
}