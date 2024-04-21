#pragma once
#include "StorageDevice.h"
class ConsumerHDD :public StorageDevice
{
public:
	ConsumerHDD(string type, int capacity, double price) :StorageDevice(type, capacity, price) {}
};

