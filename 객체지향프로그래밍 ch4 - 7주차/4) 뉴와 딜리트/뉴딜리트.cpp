/*

new/delete) 먼저, heap영역에서 *p에 int라는 배열[5]를 넣고

 int의 배열에 각 공간에 해당하는 i값 대입.

delete [] p;  =⇒ 후에 p의 주소값 반환. // 대괄호에 포인트 변수 반환함.

*/


#if 01
#include <iostream>
using namespace std;

int main() {
	cout << "입력할 정수의 개수는?";
	int n;
	cin >> n;
	if (n <= 0) return 0;
	int* p = new int[n];
	if (!p) {
		cout << "메모리 할당을 할 수 없습니다.";
		return 0;
	}

	for (int i = 0; i < n; i++) {
		cout << i + 1 << "번째 정수: ";
			cin >> p[i];
	}

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += p[i];
			cout << "평균 = " << sum / n << endl;
	}
	delete[] p;

}

#endif



#if 00

#include <iostream>
using namespace std;

class Circle {

	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();
};





int main() {
	int radius;
	while (true) {
		cout << "정수 반지름 입력(음수이면 종료)>>";
		cin >> radius;
		if (radius < 0) break;
		Circle* p = new Circle(radius); // 동적 객체 생성
		cout << "원의면적은 " << p->getArray() << endl;
		delete p; //객체 반환 , delete문이 없다면 메모리 누수 발생
	}
}

#endif
