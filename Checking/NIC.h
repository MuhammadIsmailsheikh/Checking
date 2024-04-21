#pragma once
#include "NetworkCard.h"
class NIC :public NetworkCard
{public:
	NIC(string type, int speed, double price) : NetworkCard( type,  speed,  price) {}
};

