#pragma once
#include "ani.h"
#include <iostream>

class fish : public animal {
public:
    fish(); //constructor

    int nFin;

    void swim();
};
