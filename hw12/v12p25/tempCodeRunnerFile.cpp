#include <iostream>
#include "ani.h"
#include "hum.h"
#include "bird.h"
#include "fish.h"
using namespace std;

int main() {
    animal* a[3];  // animal 객체 포인터 배열로 수정
    for (int i = 0; i < 2; i++) {
        a[i] = new fish;  // 동적 할당된 fish 객체의 포인터 저장
    }

    fish c;
    a[2] = &c;

    c.swim();
    a[2]->swim();
    ((fish*)a[2])->swim();

    // 동적 할당된 메모리 해제
    for (int i = 0; i < 2; i++) {
        delete a[i];
    }

    return 123;
}
