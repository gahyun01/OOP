#if 0

/*
	�ζ��� �Լ��� ���Ͽ�) �ζ��� �Լ��� ����ϸ� ���α׷��� ���� �ð��� ������ ������ �����ߴ�.

	3-8 ���� ��ü�� ���� ��ü�� ���� �� �Ҹ� ����
	1. ���� ��ü�� ����� ������� �����Ǿ��ٰ� �� �������� �Ҹ�� ���̴�.
	2. ���� ��ü�� �Լ��� ȣ��Ǵ� ������� �����Ǿ��ٰ� �� �������� �Ҹ�� ���̴�.
	3. ���� ���� ���� ��ü�� �����ǰ�(������ 1000�� �� ����, 2000�� �� ����) ���� ��ü�� ����(������ 1�� ��, 30�� ��),
		(������ 100�� ��, 200�� ��) �� �� �������� �Ҹ�Ǳ� ������ ������ �����Ѵ�.

	�ߺ� ���� ������ ����Ʈ ���� ���� : ���� ������ �ߺ��ؼ� ���� �����ϴ�. ����Ʈ ������ private���� �����Ѵ�.
	 * ���ÿ� ���� ������ �̹����� �����Ѵ�.
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

	if (rect1.isSquare()) cout << "rect1�� ���簢���̴�." << endl;
	if (rect2.isSquare()) cout << "rect2�� ���簢���̴�." << endl;
	if (rect3.isSquare()) cout << "rect3�� ���簢���̴�." << endl;


}

/*
lenght�� �ʱ�ȭ���� ����.
��쿡 ���� ������� �ۼ����� ����.
bool isSquare();�� ���� ���� ����
*/

#endif