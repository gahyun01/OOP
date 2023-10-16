/*

1. 객체 배열을 위한 공간 할당
2. 배열의 각 원소 객체마다 생성자 실행
3. *매개 변수 없는 생성자 호출

*/

//4-2 예제
#include <iostream>
using namespace std;
#include "4-2.h"

int main() {
	Circle circleArray[3];  // 공간 3개 형성(161p - line 29) 

	//배열의 각 원소 객체 멤버 접근
	circleArray[0].setRadius(10);
	circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);

	for (int i = 0; i < 3; i++)
		cout << "Circle" << i << "의 면적은" << circleArray[i].getArea() << endl;

	Circle* p; //포인터 변수로 접근.

	p = circleArray; /**주소값 안 넣음. 왜?배열 자체에 주소값이 있음.
	따라서 배열 자체는 굳이 주소값을 넣지 않아도 됨.
	배열 자체가 정적인 포인터임.
	포인터는 변수고 배열은 정적으로 정해져 있다는 차이가 있음. **/
	for (int i = 0; i < 3; i++) {
		cout << "Circle" << i << "의 면적은" << p->getArea() << endl;
		p++;
	}
}


/**
 radius 1  |  radius 1  |  radius 1
 radius 10 |  radius 20 |  radius 30
**/