#include "FF.h"
#include <iostream>

fish::fish(){
    nFin = 2;
}

void fish::swim(){
    std::cout << "legs: " << nLegs << " ,fin: " << nFin << std::endl;
}