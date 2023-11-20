#include<iostream>
using namespace std;

#if 00
/*
3p. a와 b를 swap하는 것이기에 내용이 같음. 그러나 int와 double로 파라미터 값이 다름. 
객체지향은 중복을 싫어함. 함수의 중복을 피하기 위해 사용하는 게 템플릿임. => 함수 중복 제거
*/

void myswap(int& a, int& b) {
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}
void myswap(double& a, double& b) {
	double tmp;
	tmp = a;
	a = b;
	b = tmp;
}
int main() {
	int a = 4, b = 5;
	myswap(a, b); // myswap(int& a, int& b) 호출
	cout << a << '\t' << b << endl;
	double c = 0.3, d = 12.5;
	myswap(c, d); // myswap(double& a, double& b) 호출
	cout << c << '\t' << d << endl;
}

#endif

#if 00

/* 
매개변수를  T로 일반화. t에는 인ㅌ저와 더블 등 여러가지 타입이 들어갈 수 있음.
*/

/* 선언 방법
template <class T> 또는
template < typename T>
3 개의 제네릭 타입을 가진 템플릿 선언
template <class T1, class T2, class T3>
*/

// 클래스도 템플릿화 가능.

// 일반화를 위한 데이터 타입 = 제네릭 타입
#endif

#if 00

void myswap(int& a, int& b) {
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

void myswap(double& a, double& b) {
	double tmp;
	tmp = a;
	a = b;
	b = tmp;
}

// 위의 두 함수를

template <class T>
void myswap(T& a, T& b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

// 위와 같이 템플릿을 이용하여 제네릭 함수 선언.

#endif

#if 00
/*
템플릿에 선언이 안 된 부분을 수행하려면 당연히 컴파일 오류. 

int s=4;
double t=5;
myswap(s, t);

컴파일 오류. 템플릿으로부터 myswap(int &, double &) 함수를 구체화할 수 없다.
*/
#endif

#if 00
/*
템플릿의 장점 : 함수 코드 재사용- 높은 소프트웨어의 생산성과 유용성

템플릿의 단점 : 가독성,, 
				포팅에 취약 - 컴파일러에 따라 지원하지 않을 수 있음.
				컴파일 오류 메시지 빈약/디버깅에 많은 어려움.

> 제네릭 프로그래밍(=일반화 프로그래밍) / 제네릭 함수는 일반 함수
	제네릭 함수나 제네릭 클래스를 활용하는 프로그래밍 기법
	c++에서 STL 제공.
*/
#endif

#if 00
/*  예제 10-4) 배열을 복사하는 제네릭 함수 mcopy() 함수 만들기 연습
> 두 개의 제네릭 타입 T1, T2를 가지는 copy()의 템플릿 <
template <class T1, class T2>
void mcopy(T1 src [], T2 dest [], int n) { // src[]의 n개 원소를 dest[]에 복사하는 함수
for(int i=0; i<n; i++)
dest[i] = (T2)src[i]; // T1 타입의 값을 T2 타입으로 변환한다.
}
*/
#endif

#if 00
/*  
> 제네릭 클래스 선언 */
template <class T>
class MyStack {
int tos;
T data [100]; // T 타입의 배열
public:
	MyStack();
	void push(T element);
	T pop();
};

/* > 제네릭 클래스 구현 */
template <class T>
void MyStack<T>::push(T element) {
...
}
template <class T> T MyStack<T>::pop() {
...
}

/*> 클래스 구체화 및 객체 활용 */
MyStack<int> iStack; // int 타입을 다루는 스택 객체 생성
MyStack<double> dStack; // double 타입을 다루는 스택 객체 생성
iStack.push(3);
int n = iStack.pop();
dStack.push(3.5);
double d = dStack.pop();
*/
#endif

#if 00
/*
> STL(Standard Template Library)
: 표준 템플릿 라이브러리
	C++ 표준 라이브러리 중 하나

: 많은 제네릭 클래스와 제네릭 함수 포함
	개발자는 이들을 이용하여 쉽게 응용 프로그램 작성

> STL의 구성
: 컨테이너 ? 템플릿 클래스
	데이터를 담아두는 자료 구조를 표현한 클래스
	리스트, 큐, 스택, 맵, 셋, 벡터

: iterator ? 컨테이너 원소에 대한 포인터
	컨테이너의 원소들을 순회하면서 접근하기 위해 만들어진 컨테이너 원소에 대한 포인터

: 알고리즘 ? 템플릿 함수
	컨테이너 원소에 대한 복사, 검색, 삭제, 정렬 등의 기능을 구현한 템플릿 함수
	컨테이너의 멤버 함수 아님

*/
#endif

#if 00
/*
> vector 컨테이너
  특징
: 가변 길이 배열을 구현한 제네릭 클래스
: 원소의 저장, 삭제, 검색 등 다양한 멤버 함수 지원
: 벡터에 저장된 원소는 인덱스로 접근 가능

> iterator 사용
: 반복자라고도 부름
: 컨테이너의 원소를 가리키는 포인터

: iterator 변수 선언 - 구체적인 컨테이너를 지정하여 반복자 변수 생성
*/
#endif