#include "Engineer.h"
int Engineer::getCarPrice(Car* xx) {
	return xx->price;
}// access protected or private
int Engineer::getCarWindow(Car* xx) {
	return xx->window;
}
int Engineer::getCarWheels(Car* xx){
	return xx->wheels;
}
void Engineer::speedup(Car* xx, float yy) {
	xx->speedUp(yy);
}
float Engineer::getCarSpeed(Car* xx) {
	return xx->speed;
}