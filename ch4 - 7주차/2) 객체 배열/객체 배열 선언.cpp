/*

1. ��ü �迭�� ���� ���� �Ҵ�
2. �迭�� �� ���� ��ü���� ������ ����
3. *�Ű� ���� ���� ������ ȣ��

*/

//4-2 ����
#include <iostream>
using namespace std;
#include "4-2.h"

int main() {
	Circle circleArray[3];  // ���� 3�� ����(161p - line 29) 

	//�迭�� �� ���� ��ü ��� ����
	circleArray[0].setRadius(10);
	circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);

	for (int i = 0; i < 3; i++)
		cout << "Circle" << i << "�� ������" << circleArray[i].getArea() << endl;

	Circle* p; //������ ������ ����.

	p = circleArray; /**�ּҰ� �� ����. ��?�迭 ��ü�� �ּҰ��� ����.
	���� �迭 ��ü�� ���� �ּҰ��� ���� �ʾƵ� ��.
	�迭 ��ü�� ������ ��������.
	�����ʹ� ������ �迭�� �������� ������ �ִٴ� ���̰� ����. **/
	for (int i = 0; i < 3; i++) {
		cout << "Circle" << i << "�� ������" << p->getArea() << endl;
		p++;
	}
}


/**
 radius 1  |  radius 1  |  radius 1
 radius 10 |  radius 20 |  radius 30
**/