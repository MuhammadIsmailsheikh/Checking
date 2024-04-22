#include "Case.h"
#include<iostream>
#include"ATX.h"
#include"MicroATX.h"
using namespace std;
// Constructor definitions
Case::Case() {
    color = "";
    formFactor = "";
    price = 0;
}

Case::Case(std::string color, std::string formfactor,int price) {
    this->color = color;
    this->formFactor = formfactor;
    this->price = price;
}

// Member function definitions
void Case::setcolor(std::string color) {
    this->color = color;
}

void Case::setformfactor(std::string formfactor) {
    this->formFactor = formfactor;
}

std::string Case::getcolor() {
    return color;
}

std::string Case::getformfactor() {
    return formFactor;
}
    void Case::show() {
        cout << "Color of case is :" << color << endl;
        cout << "formFactor of case is:" << formFactor << endl;
    }

    int Case::getprice() {
        return price;

    }

    Case* Case::userimplementation(int g) {
		string color;
		int formFactor;
		Case* MeraCase = nullptr;
		system("cls");
		cout << "    \t\t\t  Case\n" << endl;
		cout << "Enter color of case {1.Black , 2.Silver , 3.white , 4.Grey }:";
		int c;
		cin >> c;
		//cin >> color;
		if (c==1) {
			color = "Black";
		}
		else if (c == 2) {
			color = "Silver";
		}
		else if (c == 3) {
			color = "White";
		}
		else if (c == 4) {
			color = "Grey";
		}
		else {
			cout << "Default color Grey is done" << endl;
			color = "Black";
		}

		cout << "Enter formFactor of case 1 for ATX 2 for MicroATX:";
		cin >> formFactor;
		system("pause");
		system("cls");
		while (formFactor != 1 && formFactor != 2) {
			if (formFactor != 1 || formFactor != 2) {
				cout << "Enter correct formFactor of  Case:";
				cin >> formFactor;
				system("pause");
				system("cls");
			}
		}
		if (formFactor == 1) {
			ATX* MeraCase1 = new ATX(color, "ATX", 10000);
			MeraCase = MeraCase1;
			return MeraCase;
		}
		if (formFactor == 2) {
			MicroATX* MeraCase2 = new MicroATX(color, "Micro ATX", 7000);
			MeraCase = MeraCase2;
			return MeraCase;
		}
		system("cls");
   }
	