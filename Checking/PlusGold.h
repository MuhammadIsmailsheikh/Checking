#pragma once
#include "PowerSupply.h"
class PlusGold :public PowerSupply

{
public:
	PlusGold(string efficiencyRating, int wattage, double price) :PowerSupply( efficiencyRating,  wattage,price){}
};

