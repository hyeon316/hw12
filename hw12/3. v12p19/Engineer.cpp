#include "Engineer.h"
#include <iostream> 

int Engineer::getCarPrice(Car* xx) {
	return xx->price; // access protected or private
}
int Engineer::getSize(Car*xx){
	return 180;
}