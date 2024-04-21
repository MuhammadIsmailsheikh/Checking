#pragma once
#include "PowerSupply.h"
class PlusBronze :public PowerSupply
{
public:
		PlusBronze(string efficiencyRating, int wattage, double price) :PowerSupply(efficiencyRating,  wattage,price) {}
};

