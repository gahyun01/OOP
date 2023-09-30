#if 0

/*
	1. 전시간에 배웠던 getline과 getArea()의 차이를 몰랐다.
			- getline == 입력받은 문장을 단어별로 끊어서 변수에 저장해주는 함수
			- getArea() == 변수
	2. code작성시 std생략한다는 코드를 잊어버렸다.
	3. c++에서 print하는게 기억이 안났다.
			- cout <<  == printf
			- cin >>   == scanf
*/

#include <iostream>
using namespace std;	// std 생략한다는 선언

class Circle {
public:
	int radius;
	double getArea();
};

double Circle::getArea() {	// getline
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	dounut.radius = 1; // donut 객체의 반지름을 1로 설정
	double area = donut.getArea(); // donut 객체의 면적 알아내기
	cout << "donut 면적은" << area << endl; // 출력

	Circle pizza;
	pizza.radius = 30;	// pizza 객체의 반지름을 30으로 설정
	area = pizza.getArea(); // pizza 객체의 면적 알아내기
	cout << "pizza 면적은" << area << endl;
}

#endif