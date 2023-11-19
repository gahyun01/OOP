// > 함수 재정의와 오버라이딩 사례 비교


#include<iostream>
using namespace std;

class Base {
public:
	void f() {
		cout << "Base::f() called" << endl;
	}
};

class Deriver : public Base {
public:
	void f() { //함수 재정의
		cout << "Deriver::f() called" << endl;
	}
};



#include<iostream>
using namespace std;

class Base {
public:
	virtual void f() { // 가상 함수
		cout << "Base::f() called" << endl;
	}
};

class Deriver : public Base {
public:
	virtual void f() { // 오버라이딩
		cout << "Deriver::f() called" << endl;
	}

};
