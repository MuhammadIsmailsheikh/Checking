#pragma once
#include "ComputerAssembly.h"
class Windows :public ComputerAssembly
{
	GraphicsCard* graphiccard;
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


		


			networkcard,

			powersupply,
			storagedevice) {
		this->graphiccard = graphiccard;


	}
	void display();
	static Windows* userimplimentation();
 void setgraphiccard(GraphicsCard *gc) {
		this->graphiccard = gc;
	}
 GraphicsCard* getgraphiccard() {
		return graphiccard;
	}
};

