/*
업 캐스팅: 파생 클래스 포인터가 기본 클래스 포인터에 치환되는 것(주어가 자식 포인터임.)
					기본 클래스의 포인터로 파생 클래스의 객체를 가리키는 것

다운 캐스팅: 기본 클래스 포인터가 파생 클래스 포인터에 치환되는 것(주어가 부모 포인터임.)
						기본 클래스 포인터가 가리키는 객체를 파생 클래스의 포인터로 가리키는 것
*/

// 포인터 개념, 업 캐스팅, 다운 캐스팅 *중요* //.  

#include <iostream>
#include <string>
using namespace std;

//2차원 평면에서 한 점을 표현하는 클래스 point 선언
class Point
{
	int x, y; //한 점(x, y) 좌표값
public:
	void set(int x, int y) { this->x = x; this->y = y; }
	void showPoint() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};

class ColorPoint : public Point { // 2차원 평면에서 컬러점을 표현하는 클래스 ColorPoint.Point를 상속받음
	string color;// 점의 색 표현
public:
	void setColor(string color) { this->color = color; }
	void showColorPoint();
};

void ColorPoint::showColorPoint() {
	cout << color << ":";
	showPoint(); // Point의 showPoint() 호출

	int main() {
		ColorPoint cp;
		ColorPoint* pDer;
		Point* pBase = &cp; // 업캐스팅

		pBase->set(3, 4);
		pBase->showPoint();

		pDer = (ColorPoint*)pBase; // 다운캐스팅
		pDer->setColor("Red"); // 정상 컴파일
		pDer->showColorPoint(); // 정상 컴파일
	}	int main() {
		ColorPoint cp;
		ColorPoint* pDer = &cp;
		Point* pBase = pDer; // 업캐스팅

		pDer->set(3, 4);
		pBase->showPoint();
		pDer->setColor("Red");
		pDer->showColorPoint();
	}

	// protected: 선언된 클래스와 파생된 클래스에서만 사용 가능
	// 파생 클래스가 아닌 다른 클래스나 외부 함수에서는 protected 멤버를 접근할 수 없다.

/*
	3, 4 : 기본 클래스의 private에 직접 접근은 할 수 없다.
	5, 6 : 부모 클래스의 private에 자식 클래스가 직접 접근을 할 수 없다.
*/

/*
- 8-3 예제
    
    size=32  → class TV
    
    videoln=true → class WideTV  // boolalpha == true or false로 출력되게 하는 조작자
    
    IP=192.0.0.1 → class SmartTV
	
*/