#pragma once
#include "ani.h"
using namespace std;
class fish : public animal {
public:
	fish() : nEye(2){}
        int nEye;
        void swim() { cout << "I swim \n"; }
    
};