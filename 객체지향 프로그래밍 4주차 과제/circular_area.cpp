#if 0

/*
	1. ���ð��� ����� getline�� getArea()�� ���̸� ������.
			- getline == �Է¹��� ������ �ܾ�� ��� ������ �������ִ� �Լ�
			- getArea() == ����
	2. code�ۼ��� std�����Ѵٴ� �ڵ带 �ؾ���ȴ�.
	3. c++���� print�ϴ°� ����� �ȳ���.
			- cout <<  == printf
			- cin >>   == scanf
*/

#include <iostream>
using namespace std;	// std �����Ѵٴ� ����

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
	dounut.radius = 1; // donut ��ü�� �������� 1�� ����
	double area = donut.getArea(); // donut ��ü�� ���� �˾Ƴ���
	cout << "donut ������" << area << endl; // ���

	Circle pizza;
	pizza.radius = 30;	// pizza ��ü�� �������� 30���� ����
	area = pizza.getArea(); // pizza ��ü�� ���� �˾Ƴ���
	cout << "pizza ������" << area << endl;
}

#endif