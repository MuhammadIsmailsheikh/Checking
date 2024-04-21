#pragma once
#include "PhysicalMemory.h"
class LPDDR45 :public PhysicalMemory
{
public:
	LPDDR45(int capacity, string name,int price) :PhysicalMemory(capacity, name,price){}
};

