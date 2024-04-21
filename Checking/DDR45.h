#pragma once
#include "PhysicalMemory.h"
class DDR45 :public PhysicalMemory
{
public:
	DDR45(int capacity,string name,int price):PhysicalMemory( capacity,  name,price){}
};

