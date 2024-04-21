#pragma once
#include"CPU.h"
#include"GraphicsCard.h"
class AppleSilicon:public CPU
{
	GraphicsCard* gc;
public:
	AppleSilicon():gc(nullptr) , CPU(nullptr, nullptr, "AppleSilicon",price) {};
	AppleSilicon(const ALU* alu, const ControlUnit* cu, string name,  GraphicsCard* gc,int price) :CPU(alu, cu, name,price) {
		gc=new GraphicsCard;
		this->gc = gc;
	}

	GraphicsCard& getgraphiccard() {
		return *gc;
	}
	void show();
		~AppleSilicon() {
			delete gc;
		
	}
};

