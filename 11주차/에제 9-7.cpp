// 과제 연동

#include <iostream>
using namespace std;


class Calculator {
	void input() {
		cout << "정수 2 개를 입력하세요>> ";
		cin >> a >> b;
	}
protected:
	int a, b;
	virtual int calc(int a, int b) = 0; // 두 정수의 합 리턴
public:
	void run() {
		input();
		cout << "계산된 값은 " << calc(a, b) << endl;
	}
};

// 함수 오버라이딩 발생함
class Adder : public  Calculator {
protected:
	int calc(int a, int b) {
		return a + b;
	}
};

// 함수 오버라이딩 발생함
class Subtractor : public Calculator {
protected:
	int calc(int a, int b) {
		return a - b;
	}
};

int main() {
	Adder adder;
	Subtractor subtractor;
	adder.run();
	subtractor.run();
}
