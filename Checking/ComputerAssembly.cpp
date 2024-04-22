#include "ComputerAssembly.h"



ComputerAssembly::ComputerAssembly()
{

}
ComputerAssembly::ComputerAssembly(
	Battery *battery=new Battery,
	Case *cse=new Case,
	Computer *computer =new Computer,
	
	
	
	NetworkCard* networkcard=new NetworkCard,
	
	PowerSupply *powersupply=new PowerSupply,
	StorageDevice* storagedevice= new StorageDevice) {


	this->battery = battery;
	this->cse = cse;
	this->computer = computer;

	
	this->networkcard = networkcard;
	
	this->powersupply = powersupply;
	this->storagedevice = storagedevice;
}


void ComputerAssembly::setbattery(Battery* battery) {
	this->battery = battery;
}
void ComputerAssembly::setcase(Case* cse) {
	this->cse = cse;
}
void ComputerAssembly::setcomputer(Computer* computer) {
	this->computer = computer;
}


void ComputerAssembly::setnetworkcard(NetworkCard* networkcard) {
	this->networkcard = networkcard;
}


void ComputerAssembly::setpowersupply(PowerSupply* powersupply) {
	this->powersupply = powersupply;
}
void ComputerAssembly::setstoragedevice(StorageDevice* storagedevice) {
	this->storagedevice = storagedevice;
}




Battery &ComputerAssembly::getbattery() {
	return *battery;
}
Case& ComputerAssembly::getcase() {
	return *cse;
}
Computer &ComputerAssembly::getcomputer() {
	return *computer;
}




NetworkCard& ComputerAssembly::getnetworkcard() {
	return *networkcard;
}
PowerSupply& ComputerAssembly::getpowersupply() {
	return *powersupply;
}
StorageDevice& ComputerAssembly::getstoragedevice() {
	return *storagedevice;
}

