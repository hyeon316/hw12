#pragma once
class Car {
public:
	Car() :speed(0.1), wheels(0), price(0.2), window(4.0) {};
	Car(float, int, float, float);
	//virtual  
	void klaxon(int);
	void setPrice(float);
	float getPrice();
	float speed;
	void speedChange(float);
	int wheels;
	void setWheels(int);
	int getWheels();
	friend class Engineer;
protected:
	float price;
	void speedUp(float);
	void speedDown(float);
private: 
	float window;
};
