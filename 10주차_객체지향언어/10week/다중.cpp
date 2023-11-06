#include <iostream>
using namespace std;

class Adder {
protected:
	int add(int a, int b) {
		return a + b;
	}
};

class Subtractor {
protected:
	int minus(int a, int b) {
		return a - b;
	}
};

// 다중 상속
class Calculator :public Adder, public Subtractor {
public:
	int calc(char op, int a, int b);
};

int Calculator::calc(char op, int a, int b) {
	int res = 0;
	switch (op) {
	case '+':res = add(a, b);
		break;
	case '-':res = minus(a, b);
		break;
	}
	return res;
}

int main() {
	Calculator handCalculator;
	cout << "2 + 4 = " << handCalculator.calc('+', 2, 4) << endl;
	cout << "100 - 8 = " << handCalculator.calc('-', 100, 8) << endl;

}

/*
- 다중 상속(가상 사속)

	? 다중 상속으로 인한 기본 클래스 멤버의 중복 상속 해결
	? 가상 상속
	   파생 클래스의 선언문에서 기본 클래스 앞에 virtual로 선언
	   파생 클래스의 객체가 생성될 때 기본 클래스의 멤버는 오직 한 번만 생성
*/