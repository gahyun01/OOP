/* 

포인터 개념) 
주소값인지 값인지 구분해주는것이 포인터로 참조와 비슷하다.
메모리에 주소값을 할당하는 것이 포인트다라고 서로 이야기를 나눈 후 포인터 개념 확인.
포인터는 메모리의 주소값을 저장하는 변수이다.

포인터 선언)
타입* 포인터이름 = &변수이름;
또는
타입* 포인터이름 = 주소값;

주소 연산자는 변수의 이름 앞에 사용하여, 해당 변수의 주소값을 반환한다.

참조 연산자는 포인터의 이름이나 주소 앞에 사용하여, 
포인터에 가리키는 주소에 저장된 값을 반환한다.

포인터는 참조 연산자(*)를 사용하여 참조할 수 있다.

int c;
int *a;
a = &c;
*a = 20; (a가 가리키는 곳에 값을 넣는 것.)


*/

// 메인
#include <iostream>
#include "Circle.h"
using namespace std;

int main() {
	Circle donut;
	Circle pizza(30);

	// 객체 이름으로 멤버 접근
	cout << donut.getArea() << endl;

	// 객체 포인터로 멤버 접근
	Circle* p;
	p = &donut;
	cout << p->getArea() << endl;	// donut의 getArea() 호출
	cout << (*p).getArea() << endl;		//donut의 getArea() 호출

	p = &pizza;
	cout << p->getArea() << endl;	// pizza의 getArea() 호출
	cout << (*p).getArea() << endl;		// pizza의 getArea() 호출
}