#pragma once
using namespace std;
#include"Port.h"
#include"MainMemory.h"
class MotherBoard
{
	int price;
	int number;
	Port* ports;   // composition
	MainMemory *mm;  // Aggregation
public:
	MotherBoard();
	MotherBoard(Port*port, MainMemory *mm,int price);
	void setmainmemory(MainMemory *mm);
	void setport(Port* p);
	MainMemory& getmemory();
	Port& getport();
	void show();
	~MotherBoard();
	int getprice();
	void setprice(int a);
	void initializeports();
	static MotherBoard* userimplementation(int g);
};

