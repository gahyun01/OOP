// c++�� c�� �� 2

#include <iostream>
using namespace std;

int main() {
	cout << "�ʺ� �Է��ϼ��� >>";

	int width;
	cin >> width;	// Ű����κ��� �ʺ� �о� width ������ ����

	cout << "���̸� �Է��ϼ��� >>";

	int height;
	cin >> height; // Ű����κ��� ���̸� �о� height ������ ����

	int area = width * height;	// �簢���� ���� ���
	cout << "������" << area << "\n";	 // ������ ����ϰ� ���� �ٷ� �Ѿ
}

//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int width;
	int height;
	int area;

	printf("�ʺ� �Է��ϼ��� ");
	scanf("%d", &width);

	printf("���̸� �Է��ϼ��� ");
	scanf("%d", &height);

	area = width * height;
	printf("������ %d \n", area);

	return 0;
}