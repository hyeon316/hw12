#pragma once
#include <iostream>
class animal {
public:
	animal() : nLegs(2) {		//animal(){ nLegs=2와 같다	}
		std::cout << nLegs << " Animal \n";
	};
	int nLegs;
	void eat() { std::cout << " I eat \n"; }
};