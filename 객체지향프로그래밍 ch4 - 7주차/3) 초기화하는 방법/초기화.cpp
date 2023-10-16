#if 00

#include <iostream>
using namespace std;

class Circle {
    int radius;

public:
    // 기본 생성자: 반지름을 1로 초기화
    Circle() { radius = 1; }

    // 매개변수를 받는 생성자: 매개변수로 받은 반지름으로 초기화
    Circle(int r) { radius = r; }

    // 반지름 설정 메서드
    void setRadius(int r) { radius = r; }

    // 원의 면적 계산 메서드
    double getArea() {
        return 3.14 * radius * radius;
    }
};

int main() {
    // Circle 클래스 객체 배열 생성
    Circle circleArray[3] = { Circle(10), Circle(20), Circle() };

    // 객체 배열을 반복하면서 면적 출력
    for (int i = 0; i < 3; i++) {
        cout << "Circle" << i << "의 면적은 " << circleArray[i].getArea() << endl;
    }

    return 0; // main 함수의 반환값을 0으로 설정
}

#endif

// 4 - 5) 정수형 공간의 동적 할당 및 반환 예


#if 01
#include <iostream>
using namespace std;

int main() {
    int* p;

    p = new int; // int 타입 1개 할당
    if (!p) {      // p가 NULL이면, 메모리 할당 실패
        cout << "메모리를 할당할 수 없습니다.";
        return 0;
    }

    *p = 5; //할당 받은 정수 공간에 5 삽입.
    int n = *p;  // *p의 값을 n에 대입
    cout << "*p = " << *p << '\n'; // p의 주소값 안에 있는 값을 부름.
    cout << "*n = " << n << '\n';  // n의 값 출력.

    delete p;  // 할당 받은 정수 공간에 5 삽입
}

#endif