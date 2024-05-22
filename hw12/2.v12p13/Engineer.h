#pragma once
#include "Car.h"
class Engineer {
public:
	int getCarPrice(Car*);
	int getCarWindow(Car*);
	int getCarWheels(Car*);
	void speedup(Car*, float);
	float getCarSpeed(Car*);
};