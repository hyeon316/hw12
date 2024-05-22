#include <iostream>
using namespace std;

class ECE {
public:
	ECE() : n(10) { cout << " new ECE\n"; };
	int n;
	~ECE() { cout << " kill ECE\n"; }
};

class EE :public ECE {
public:
	EE() : m(20) { cout << " new EE\n"; };
	int m;
	~EE() { cout << " kill EE\n"; }
};

class CE :public ECE {
public:
	CE() { cout << " new CE\n"; };
	~CE() { cout << " kill CE\n"; }
};

ECE Jhop;
void show() { EE Jin; }
int main() {
	for (int i = 0; i < 3; i++) {
		ECE RM;
	}
	cout << " end of for-loop\n";
	show();
	cout << " after show()\n";
	return 123;
}
/* 출력 
 new ECE : ECE Jhop에서 ECE 호출
 new ECE : for loop에서 ECE 호출
 kill ECE : for loop가 끝나며 kill ECE i=0
 new ECE : for loop에서 ECE 호출
 kill ECE : for loop가 끝나며 kill ECE i=1
 new ECE : for loop에서 ECE 호출
 kill ECE : for loop가 끝나며 kill ECE i=2
 end of for-loop : i = 3이 되면서 for loop가 종료된 후 cout 출력
 new ECE : show() 출력 EE Jin
 new EE : show() 출력 EE Jin
 kill EE : show()가 끝나며 kill EE 출력
 kill ECE : show()가 끝나며 kill ECE 출력
 after show() : show()가 끝난 뒤 cout 출력
 kill ECE : 프로그램이 끝나며 ECE의 소멸자가 출력되며 프로그램종료
 */