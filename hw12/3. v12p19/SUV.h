#pragma once
#include "Car.h"
class SUV : public Car {
private:
	int spareWheels;
public:
	void klaxon(int);
	int getSize();
	void setSize(int);
	void setSparewheels(int);
	int getSparewheels();
	float getTotalPrice();
	int ssize;
};
