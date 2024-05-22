#include <iostream>
using namespace std;

class fruit {
public:
    fruit() { 
        price = 200; 
        many = 2;
    }
    int many;
    float price;
    float show();
private:  // Private
    void operator*(float);
};

class apple : public fruit {
public:
    apple() : redness(5) {
        price = 2000;
    }
    int redness;
    void operator-(int);
};

float fruit::show() {
    return price * many;
}

void fruit::operator*(float r) {
    price *= (100 + r) / 100.0;
}

void apple::operator-(int dr) {
    redness += dr;
}

int main() {
    fruit a, b;
    apple cc;
    cout << a.show() << endl;
    // a * 10;  //오류 발생, fruit에서 private
    // b * -10.0;  //오류 발생, fruit에서 private
    cout << cc.show() << endl;
    // cc * 10;    //오류 발생, fruit에서 private
    cout << cc.redness << endl;
    cc - 2;
    cout << cc.redness << endl;

    return 0;
}
