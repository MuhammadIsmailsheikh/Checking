#pragma once
#include"GraphicsCard.h"
class AMD:public GraphicsCard
{
public:
	AMD(string brand, int memorysize, double price):GraphicsCard(brand, memorysize,  price){}
};

