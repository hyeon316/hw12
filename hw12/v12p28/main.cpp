#include <iostream>
using namespace std;

class mm {
public:
   mm() { a = 4 + 300; cout << "mm\n"; }
   mm(int b) { a = b + 100; cout << "mmb\n"; }
   int a;
};

class nn : public mm {
public:
   nn() { a = 11; cout << "nn\n"; }
   nn(int b) { c = a;   a = b;   cout << "nnb\n"; }
   int c;
};

class oo : public nn {
public:
   oo() { a = 1; cout << "oo\n"; }
   oo(int b) { o = a; a = b; cout << "oob\n"; }
   int o;
};

int main() {
   oo pp(5);
   cout << pp.a << endl;
   cout << pp.o << endl;
}