#pragma once
using namespace std;
#include<string>
class Port
{
	string type;
	int baud_rate;
	int number;
public:
	Port();
	Port( string type, int baud_rate);
	void settype(string s);
	void setbaud_rate(int baud_rate);
	string gettype();
	int getbaud_rate();
	int getportnumber();

	void setportnumber(int n);

	void show();
};

