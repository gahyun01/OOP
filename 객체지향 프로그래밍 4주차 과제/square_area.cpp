#if 0

/*
	1. int getArea; 라고 ()빼고 적어서 error가 발생했다.
	2. class Rectangle{}에 ;안붙여서 error가 발생했다.
	3. double이 아닌 int로 변수선언해야한다.
*/

#include <iostream>
using namespace std;

class Rectangle {
public:
	int width;
	int height;
	int getArea();	// () error
};	// ; error

int Rectangle::getArea() {
	return width * height;
}

int main() {
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	cout << "사각형의 면적은 " << rect.getArea() << endl;
}

#endif