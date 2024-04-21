#pragma once
class Battery
{
	int price;
	int capacity;
public:
	Battery();
	Battery(int c,int price);
	void setcapacity(int c);
	int getcapacity() const ;
	void show();
	int getprice();
	static Battery* userimplementation(int g);
};

