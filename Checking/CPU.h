#pragma once
#include"ALU.h"
#include"ControlUnit.h"
#include<string>
#include"GraphicsCard.h"
using namespace std;
class CPU
{
protected:
	string cpuname;
	ALU *alu;
	ControlUnit *cu;
	int price;
	//GraphicsCard* graphiccard;
public:
	CPU();
	CPU(const ALU* alu,const ControlUnit* cu,string name,int price);
	void setalu(ALU* alu);
	void setcu(ControlUnit* cu);
	ALU& getalu();
	ControlUnit& getcontrolunit();
	void show();
	//GraphicsCard& getgraphiccard();
	int getprice();
	~CPU();
	static CPU* userimplementation(int g);
};

