#pragma once
class ALU
{
private:
	int NoOfSubtractor;
	int NoOfRegisters;
	int sizeOfRegisters;
	int NoOfAdders;

public:
	ALU();
	ALU(int a, int b, int c, int d);
	int getsubtractor();
	int getregister();
	int adder();
	int sizeofregister();

	void setsubtractor(int a);
	void setregister(int b);
	void setadder(int c);
	void setsizeofregister(int d);
	void show();
	static ALU* userimplementation(int g);
};

