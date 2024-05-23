#pragma once
#include "ani.h"
using namespace std;
class bird : public animal { //animal을 상속받는다 부모 것 상속 다 받는다
public:
	bird() : nWings(2) { };
	int nWings;
	void fly() { cout << " I fly \n"; }
};
