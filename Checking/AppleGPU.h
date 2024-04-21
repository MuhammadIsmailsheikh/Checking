#pragma once
#include "GraphicsCard.h"
#include<iostream>
using namespace std;
class AppleGPU :public GraphicsCard
{
public:
	AppleGPU(string brand, int memorysize, double price) :GraphicsCard(brand, memorysize, price) {}
	AppleGPU* userimplimentation() {
		
			AppleGPU* app = new AppleGPU("AppleGPU", 4, 10000);
			return app;

	}
};

