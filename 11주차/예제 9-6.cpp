

#include <iostream>
using namespace std;

class Base {
public:
	virtual~Base() {
		cout << "~Base()" << endl;
	}
};

// 객체 소멸되는 시점에 자동으로 호출되는 함수인 소멸자를 오버라이딩함
class Derived :public Base {
public:
	virtual~Derived() {
		cout << "~Derived()" << endl;
	}
};

int main() {
	Derived* dp = new Derived();
	Base* bp = new Derived();

	delete dp;	// Derived의 포인터로 소멸
	delete bp;	// Base의 포인터로 소멸
}
