// c++과 c의 비교 1

#include <iostream>

double area(int r);		// 함수 원형 선언

double area(int r) {	//함수 구현
	return 3.14 * r * r;	// 반지름 r의 원면적 리턴
}

int main() {
	int n = 3;
	char c = '#';
	std::cout << c << 5.5 << '-' << n << "hello" << true << std::endl;
	std::cout << "n + 5 = " << n + 5 << '\n';
	std::cout << "면적은 " << area(n);	// 함수 area()의 리턴 값 출력
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
	printf("면적은 %.2f \n", area);
}