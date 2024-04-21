#pragma once
#include "NetworkCard.h"
class Wireless_NIC :public NetworkCard
{public:
	Wireless_NIC(string type, int speed, double price) : NetworkCard(type, speed, price) {}
};

