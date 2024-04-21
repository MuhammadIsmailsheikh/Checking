#pragma once
class ControlUnit
{
	float clock;
public:
	ControlUnit();
	ControlUnit(float clock);
	float getclock();
	void setclock(float a);
	void show();
	static ControlUnit* userimplementation(int g);
};

