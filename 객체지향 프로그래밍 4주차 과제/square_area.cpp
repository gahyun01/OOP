#if 0

/*
	1. int getArea; ��� ()���� ��� error�� �߻��ߴ�.
	2. class Rectangle{}�� ;�Ⱥٿ��� error�� �߻��ߴ�.
	3. double�� �ƴ� int�� ���������ؾ��Ѵ�.
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
	cout << "�簢���� ������ " << rect.getArea() << endl;
}

#endif