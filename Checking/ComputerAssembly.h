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
class ComputerAssembly
{
protected:
	
	Battery *battery;
	Case* cse;
	//Physical,motherboard and cpu comes under computer
	//inside cpu there are ALU and Controlunit
	Computer* computer;
	

	GraphicsCard *graphiccard;
	

	NetworkCard* networkcard;

	
	PowerSupply* powersupply;
	StorageDevice *storagedevice;

public:
	ComputerAssembly();
	ComputerAssembly(
		Battery *battery,
		Case *cse,
		Computer *computer,
	
		

		
	
		NetworkCard* networkcard,
		
		PowerSupply* powersupply,
		StorageDevice *storagedevice);

	void setbattery(Battery* battery);
	void setcase(Case* cse);
	void setcomputer(Computer* computer);
	
	

	void setnetworkcard(NetworkCard* networkcard);
	
	void setpowersupply(PowerSupply* powersupply);
	void setstoragedevice(StorageDevice* storagedevice);

	
	Battery& getbattery();
	Case &getcase();
	Computer& getcomputer();

	

	NetworkCard& getnetworkcard();

	PowerSupply &getpowersupply();
	StorageDevice& getstoragedevice();

	
};

