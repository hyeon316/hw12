#pragma once
class Car {
public:
	Car() :speed(0.1), wheels(0), price(0.2), size(160) {};
	Car(float, int, float, int); 
    virtual void klaxon(int);
	virtual int getSize();
	virtual void setSize(int);
	void setPrice(float);
	float getPrice();
	float speed;
	void speedChange(float);
	int wheels;
	void setWheels(int);
	int getWheels();
	int size;
	friend class Engineer;
protected:
	float price;
	void speedUp(float);
	void speedDown(float);
//private:
};
