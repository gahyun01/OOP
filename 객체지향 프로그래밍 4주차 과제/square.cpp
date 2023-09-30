#if 0

/*
	인라인 함수에 대하여) 인라인 함수를 사용하면 프로그램의 실행 시간이 빨라질 것으로 예상했다.

	3-8 지역 객체와 전역 객체의 생성 및 소멸 순서
	1. 전역 객체는 선언된 순서대로 생성되었다가 그 역순으로 소멸될 것이다.
	2. 지역 객체는 함수가 호출되는 순간대로 생성되었다가 그 역순으로 소멸될 것이다.
	3. 따라서 먼저 전역 객체가 생성되고(반지름 1000인 원 생성, 2000인 원 생성) 지역 객체가 생성(반지름 1인 원, 30인 원),
		(반지름 100인 원, 200인 원) 그 후 역순으로 소멸되기 시작할 것으로 예상한다.

	중복 접근 지정과 디폴트 접근 지정 : 접근 지정은 중복해서 지정 가능하다. 디폴트 접근은 private으로 지정한다.
	 * 스택에 대한 설명은 이미지를 참조한다.
*/

include <iostream>
using namespace std;

class Rectangle {
public:
	int height;
	int weight;
	Rectangle();
	Rectangle(int h);
	Rectangle(int w);
	int getArea();

};

Rectangle:Rectangle() : {
height = weight = 1
}

int main() {

	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
	if (rect2.isSquare()) cout << "rect2은 정사각형이다." << endl;
	if (rect3.isSquare()) cout << "rect3은 정사각형이다." << endl;


}

/*
lenght를 초기화하지 않음.
경우에 따른 결과값을 작성하지 않음.
bool isSquare();에 대한 이해 부족
*/

#endif