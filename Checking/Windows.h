#pragma once
#include "ComputerAssembly.h"
class Windows :public ComputerAssembly
{
public:
	Windows(Battery* battery,
		Case* cse,
		Computer* computer,


		GraphicsCard* graphiccard,


		NetworkCard* networkcard,

		PowerSupply* powersupply,
		StorageDevice* storagedevice) :ComputerAssembly(
			battery,
			cse,
			computer,


			graphiccard,


			networkcard,

			powersupply,
			storagedevice) {

	}
	void display();
	static Windows* userimplimentation();
};

