// c++과 c의 비교 2

#include <iostream>
using namespace std;

int main() {
	cout << "너비를 입력하세요 >>";

	int width;
	cin >> width;	// 키보드로부터 너비를 읽어 width 변수에 저장

	cout << "높이를 입력하세요 >>";

	int height;
	cin >> height; // 키보드로부터 높이를 읽어 height 변수에 저장

	int area = width * height;	// 사각형의 면적 계산
	cout << "면적은" << area << "\n";	 // 면적을 출력하고 다음 줄로 넘어감
}

//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int width;
	int height;
	int area;

	printf("너비를 입력하세요 ");
	scanf("%d", &width);

	printf("높이를 입력하세요 ");
	scanf("%d", &height);

	area = width * height;
	printf("면적은 %d \n", area);

	return 0;
}