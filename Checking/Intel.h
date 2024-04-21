#pragma once
#include"CPU.h"
#include"GraphicsCard.h"
class Intel:public CPU
{public:
	Intel(const ALU* alu, const ControlUnit* cu, string name, int price) :CPU(alu, cu, name, price) {
		//this->graphiccard = nullptr;
	}
	static Intel* userimplementation();
};

