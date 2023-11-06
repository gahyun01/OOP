/*
�� ĳ����: �Ļ� Ŭ���� �����Ͱ� �⺻ Ŭ���� �����Ϳ� ġȯ�Ǵ� ��(�־ �ڽ� ��������.)
					�⺻ Ŭ������ �����ͷ� �Ļ� Ŭ������ ��ü�� ����Ű�� ��

�ٿ� ĳ����: �⺻ Ŭ���� �����Ͱ� �Ļ� Ŭ���� �����Ϳ� ġȯ�Ǵ� ��(�־ �θ� ��������.)
						�⺻ Ŭ���� �����Ͱ� ����Ű�� ��ü�� �Ļ� Ŭ������ �����ͷ� ����Ű�� ��
*/

// ������ ����, �� ĳ����, �ٿ� ĳ���� *�߿�* //.  

#include <iostream>
#include <string>
using namespace std;

//2���� ��鿡�� �� ���� ǥ���ϴ� Ŭ���� point ����
class Point
{
	int x, y; //�� ��(x, y) ��ǥ��
public:
	void set(int x, int y) { this->x = x; this->y = y; }
	void showPoint() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};

class ColorPoint : public Point { // 2���� ��鿡�� �÷����� ǥ���ϴ� Ŭ���� ColorPoint.Point�� ��ӹ���
	string color;// ���� �� ǥ��
public:
	void setColor(string color) { this->color = color; }
	void showColorPoint();
};

void ColorPoint::showColorPoint() {
	cout << color << ":";
	showPoint(); // Point�� showPoint() ȣ��

	int main() {
		ColorPoint cp;
		ColorPoint* pDer;
		Point* pBase = &cp; // ��ĳ����

		pBase->set(3, 4);
		pBase->showPoint();

		pDer = (ColorPoint*)pBase; // �ٿ�ĳ����
		pDer->setColor("Red"); // ���� ������
		pDer->showColorPoint(); // ���� ������
	}	int main() {
		ColorPoint cp;
		ColorPoint* pDer = &cp;
		Point* pBase = pDer; // ��ĳ����

		pDer->set(3, 4);
		pBase->showPoint();
		pDer->setColor("Red");
		pDer->showColorPoint();
	}

	// protected: ����� Ŭ������ �Ļ��� Ŭ���������� ��� ����
	// �Ļ� Ŭ������ �ƴ� �ٸ� Ŭ������ �ܺ� �Լ������� protected ����� ������ �� ����.

/*
	3, 4 : �⺻ Ŭ������ private�� ���� ������ �� �� ����.
	5, 6 : �θ� Ŭ������ private�� �ڽ� Ŭ������ ���� ������ �� �� ����.
*/

/*
- 8-3 ����
    
    size=32  �� class TV
    
    videoln=true �� class WideTV  // boolalpha == true or false�� ��µǰ� �ϴ� ������
    
    IP=192.0.0.1 �� class SmartTV
	
*/