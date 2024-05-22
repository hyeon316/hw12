#pragma once
#include "CarS3.h"
class SUV : public Car {
private:
	int spareWheels;
	int carnival_window;
public:
	void klaxon(int);
	void setSparewheels(int);
	int getSparewheels();
	float getTotalPrice();
	void setCarnivalWindow(int);
	int getCarnivalWindow();
};

