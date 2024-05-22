#include <iostream>
#include "ani.h"
#include "hum.h"
#include "bird.h"
#include "fish.h"
using namespace std;
//fish.h 추가와 ani.h에 void swim추가
int main() {
    animal* a[3];  
    for (int i = 0; i < 2; i++) {
        a[i] = new fish;  
    }
    fish c;
    a[2] = &c;
    c.swim();
    a[2]->swim();
    ((fish*)a[2])->swim();
    return 123;
}
