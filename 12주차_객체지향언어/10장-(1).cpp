#include<iostream>
using namespace std;

#if 00
/*
3p. a�� b�� swap�ϴ� ���̱⿡ ������ ����. �׷��� int�� double�� �Ķ���� ���� �ٸ�. 
��ü������ �ߺ��� �Ⱦ���. �Լ��� �ߺ��� ���ϱ� ���� ����ϴ� �� ���ø���. => �Լ� �ߺ� ����
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
	myswap(a, b); // myswap(int& a, int& b) ȣ��
	cout << a << '\t' << b << endl;
	double c = 0.3, d = 12.5;
	myswap(c, d); // myswap(double& a, double& b) ȣ��
	cout << c << '\t' << d << endl;
}

#endif

#if 00

/* 
�Ű�������  T�� �Ϲ�ȭ. t���� �Τ����� ���� �� �������� Ÿ���� �� �� ����.
*/

/* ���� ���
template <class T> �Ǵ�
template < typename T>
3 ���� ���׸� Ÿ���� ���� ���ø� ����
template <class T1, class T2, class T3>
*/

// Ŭ������ ���ø�ȭ ����.

// �Ϲ�ȭ�� ���� ������ Ÿ�� = ���׸� Ÿ��
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

// ���� �� �Լ���

template <class T>
void myswap(T& a, T& b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

// ���� ���� ���ø��� �̿��Ͽ� ���׸� �Լ� ����.

#endif

#if 00
/*
���ø��� ������ �� �� �κ��� �����Ϸ��� �翬�� ������ ����. 

int s=4;
double t=5;
myswap(s, t);

������ ����. ���ø����κ��� myswap(int &, double &) �Լ��� ��üȭ�� �� ����.
*/
#endif

#if 00
/*
���ø��� ���� : �Լ� �ڵ� ����- ���� ����Ʈ������ ���꼺�� ���뼺

���ø��� ���� : ������,, 
				���ÿ� ��� - �����Ϸ��� ���� �������� ���� �� ����.
				������ ���� �޽��� ���/����뿡 ���� �����.

> ���׸� ���α׷���(=�Ϲ�ȭ ���α׷���) / ���׸� �Լ��� �Ϲ� �Լ�
	���׸� �Լ��� ���׸� Ŭ������ Ȱ���ϴ� ���α׷��� ���
	c++���� STL ����.
*/
#endif

#if 00
/*  ���� 10-4) �迭�� �����ϴ� ���׸� �Լ� mcopy() �Լ� ����� ����
> �� ���� ���׸� Ÿ�� T1, T2�� ������ copy()�� ���ø� <
template <class T1, class T2>
void mcopy(T1 src [], T2 dest [], int n) { // src[]�� n�� ���Ҹ� dest[]�� �����ϴ� �Լ�
for(int i=0; i<n; i++)
dest[i] = (T2)src[i]; // T1 Ÿ���� ���� T2 Ÿ������ ��ȯ�Ѵ�.
}
*/
#endif

#if 00
/*  
> ���׸� Ŭ���� ���� */
template <class T>
class MyStack {
int tos;
T data [100]; // T Ÿ���� �迭
public:
	MyStack();
	void push(T element);
	T pop();
};

/* > ���׸� Ŭ���� ���� */
template <class T>
void MyStack<T>::push(T element) {
...
}
template <class T> T MyStack<T>::pop() {
...
}

/*> Ŭ���� ��üȭ �� ��ü Ȱ�� */
MyStack<int> iStack; // int Ÿ���� �ٷ�� ���� ��ü ����
MyStack<double> dStack; // double Ÿ���� �ٷ�� ���� ��ü ����
iStack.push(3);
int n = iStack.pop();
dStack.push(3.5);
double d = dStack.pop();
*/
#endif

#if 00
/*
> STL(Standard Template Library)
: ǥ�� ���ø� ���̺귯��
	C++ ǥ�� ���̺귯�� �� �ϳ�

: ���� ���׸� Ŭ������ ���׸� �Լ� ����
	�����ڴ� �̵��� �̿��Ͽ� ���� ���� ���α׷� �ۼ�

> STL�� ����
: �����̳� ? ���ø� Ŭ����
	�����͸� ��Ƶδ� �ڷ� ������ ǥ���� Ŭ����
	����Ʈ, ť, ����, ��, ��, ����

: iterator ? �����̳� ���ҿ� ���� ������
	�����̳��� ���ҵ��� ��ȸ�ϸ鼭 �����ϱ� ���� ������� �����̳� ���ҿ� ���� ������

: �˰��� ? ���ø� �Լ�
	�����̳� ���ҿ� ���� ����, �˻�, ����, ���� ���� ����� ������ ���ø� �Լ�
	�����̳��� ��� �Լ� �ƴ�

*/
#endif

#if 00
/*
> vector �����̳�
  Ư¡
: ���� ���� �迭�� ������ ���׸� Ŭ����
: ������ ����, ����, �˻� �� �پ��� ��� �Լ� ����
: ���Ϳ� ����� ���Ҵ� �ε����� ���� ����

> iterator ���
: �ݺ��ڶ�� �θ�
: �����̳��� ���Ҹ� ����Ű�� ������

: iterator ���� ���� - ��ü���� �����̳ʸ� �����Ͽ� �ݺ��� ���� ����
*/
#endif