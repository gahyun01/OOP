// c++�� c�� �� 1

#include <iostream>

double area(int r);		// �Լ� ���� ����

double area(int r) {	//�Լ� ����
	return 3.14 * r * r;	// ������ r�� ������ ����
}

int main() {
	int n = 3;
	char c = '#';
	std::cout << c << 5.5 << '-' << n << "hello" << true << std::endl;
	std::cout << "n + 5 = " << n + 5 << '\n';
	std::cout << "������ " << area(n);	// �Լ� area()�� ���� �� ���
}

//

#include <stdio.h>

int main(void) {
	double area;
	int r;
	int n = 3;
	char c = '#';

	r = n;
	area = 3.14 * r * r;

	printf("%c5.5-3hello1 \n", c);
	printf("n + 5 = %d \n", n);
	printf("������ %.2f \n", area);
}