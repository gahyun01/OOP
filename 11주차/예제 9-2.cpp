/*
	함수 재정의 - Derived::f() \n Base::f()
	오버라이딩 - Derived::f() \n Derived::f()
	함수 재정의는 정적자인딩인 반면 오버라이딩은 컴파일러에게
 호출바인딩을 실행 시간까지 미루도록 지시하는 동적바인딩이다.
*/



#include <iostream>
using namespace std;
class Base {
public:
	virtual void f() { 
		cout << "Base::f() called" << endl; 
	}
};

class Derived : public Base {
public:
	virtual void f() { 
		cout << "Derived::f() called" << endl;
	}
};

int main() {
	Derived d, * pDer;
	pDer = &d;
	pDer->f(); // Derived::f() 호출

	Base* pBase;
	pBase = pDer; // 업 캐스팅
	pBase->f(); //동적 바인딩 발생. Derived::f() 실행
