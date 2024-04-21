#pragma once
#include "GraphicsCard.h"
class Nvidia : public GraphicsCard
{
public:
	Nvidia(string brand, int memorysize, double price) :GraphicsCard(brand, memorysize, price) {}
};

