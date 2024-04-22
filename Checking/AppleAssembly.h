#pragma once
#include"ALU.h"
#include"Battery.h"
#include"Case.h"
#include"Computer.h"
#include"ControlUnit.h"
#include"CPU.h"
#include"GraphicsCard.h"
#include"MainMemory.h"
#include"MotherBoard.h"
#include"NetworkCard.h"
#include"PhysicalMemory.h"
#include"Port.h"
#include"PowerSupply.h"
#include"StorageDevice.h"
#include "ComputerAssembly.h"
class AppleAssembly :public ComputerAssembly
{
public:
	AppleAssembly(Battery* battery,
		Case* cse,
		Computer* computer,


		


		NetworkCard* networkcard,

		PowerSupply* powersupply,
		StorageDevice* storagedevice) :ComputerAssembly(
		battery,
		cse,
		computer,




		networkcard,

		powersupply,
		storagedevice) {

	}
	void display();
	static AppleAssembly* userimplimentation();
};

