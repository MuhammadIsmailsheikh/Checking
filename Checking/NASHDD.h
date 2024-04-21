#pragma once
#include "StorageDevice.h"
class NASHDD :public StorageDevice
{
public:
	NASHDD(string type, int capacity, double price):StorageDevice( type, capacity,  price){}
};

