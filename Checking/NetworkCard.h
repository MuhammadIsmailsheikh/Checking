#pragma once
#include<string>
using namespace std;
class NetworkCard
{
	string type;
	int speed;
	double price;
public:
	NetworkCard();
	NetworkCard(string type, int speed, double price);
	void settype(string s);
	void setspeed(int s);
	void setprice(double p);
	string gettype();
	int getspeed();
	double getprice();



	void show();

	static NetworkCard* userimplementation(int g);
};

