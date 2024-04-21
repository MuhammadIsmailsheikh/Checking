#pragma once
#include<string>
using namespace std;

class MainMemory
{
	int capacity;
	string TechnologyType;


public:
	MainMemory();
	MainMemory(int c, string t);
	void setcapacity(int c);
	void setTechnologyType(string t);
	int getcapacity();
	string getTechnologyType();
	void show();

	static MainMemory* userimplementation(int g);
};

