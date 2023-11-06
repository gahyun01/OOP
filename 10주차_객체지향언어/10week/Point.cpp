// 상속, 업 캐스팅, 다운 캐스팅, protected, 생성과 소멸의 실행 순서 //

/* 상속: 유전적 상속 (동물과 식물은 생물이라는 공통점을 가짐. 상속 가능, 재활용 높아짐)

   객체 사이에는 상속 관계 없음.(주소값이 다르기 때문에.)

	 기본 클래스 - 물려받는 코드  |   파생클래스 - 나만의 코드

   다중 상속 가능, 동적 바인딩 */

   /*
	   상속의 목적 및 장점
		   1. 간결한 클래스 작성
		   2. 클래스 간의 계층적 분류 및 관리의 용이함
		   3. 클래스 재사용과 확장을 통한 소프트웨어 생산성 향상 ( 클래스 재사용 )
   */

   /*
	 <계층 나누기 페어링 1>
	 부모 : 말하기, 먹기, 걷기, 잠자기
	   자식 1 : 부모 &공부하기
	   자식 3 : 부모 & 연구하기

	   자식 2 : 자식1 & 일하기
	   자식 4 : 자식3 & 가르치기

	 <계층 나누기 페어링 2>
	 공통 기능을 클래스로 설정.(말하기, 먹기, 걷기, 잠자기)
	 student에 있는 기능과studeworker에 있는 공통 기능인 공부하기 클래스 설정
	 researcher 기능과 professor 기능에 공통 기능인 연구하기를 클래스로 지정
	 남은 일하기 기능 따로 가르치기 기능 따로 클래스 구성.

	 따라서 일하기 -> 공부하기 -> 말하기 먹기 걷기 자기
		  가르치지 -> 연구하기 -> 말하기 먹기 걷기 자기
   */



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

#include <iostream>
#include <string>
using namespace std;

class ColorPoint : public Point { // 2차원 평면에서 컬러점을 표현하는 클래스 ColorPoint.Point를 상속받음
	string color;// 점의 색 표현
public:
	void setColor(string color) { this->color = color; }
	void showColorPoint();
};

void ColorPoint::showColorPoint() {
	cout << color << ":";
	showPoint(); // Point의 showPoint() 호출
}

int main() {
	Point p; // 기본 클래스의 객체 생성
	ColorPoint cp; // 파생 클래스의 객체 생성
	cp.set(3, 4); // 기본 클래스의 멤버 호출
	cp.setColor("Red"); // 파생 클래스의 멤버 호출
	cp.showColorPoint(); // 파생 클래스의 멤버 호출
}