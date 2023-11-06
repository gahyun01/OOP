// ���, �� ĳ����, �ٿ� ĳ����, protected, ������ �Ҹ��� ���� ���� //

/* ���: ������ ��� (������ �Ĺ��� �����̶�� �������� ����. ��� ����, ��Ȱ�� ������)

   ��ü ���̿��� ��� ���� ����.(�ּҰ��� �ٸ��� ������.)

	 �⺻ Ŭ���� - �����޴� �ڵ�  |   �Ļ�Ŭ���� - ������ �ڵ�

   ���� ��� ����, ���� ���ε� */

   /*
	   ����� ���� �� ����
		   1. ������ Ŭ���� �ۼ�
		   2. Ŭ���� ���� ������ �з� �� ������ ������
		   3. Ŭ���� ����� Ȯ���� ���� ����Ʈ���� ���꼺 ��� ( Ŭ���� ���� )
   */

   /*
	 <���� ������ �� 1>
	 �θ� : ���ϱ�, �Ա�, �ȱ�, ���ڱ�
	   �ڽ� 1 : �θ� &�����ϱ�
	   �ڽ� 3 : �θ� & �����ϱ�

	   �ڽ� 2 : �ڽ�1 & ���ϱ�
	   �ڽ� 4 : �ڽ�3 & ����ġ��

	 <���� ������ �� 2>
	 ���� ����� Ŭ������ ����.(���ϱ�, �Ա�, �ȱ�, ���ڱ�)
	 student�� �ִ� ��ɰ�studeworker�� �ִ� ���� ����� �����ϱ� Ŭ���� ����
	 researcher ��ɰ� professor ��ɿ� ���� ����� �����ϱ⸦ Ŭ������ ����
	 ���� ���ϱ� ��� ���� ����ġ�� ��� ���� Ŭ���� ����.

	 ���� ���ϱ� -> �����ϱ� -> ���ϱ� �Ա� �ȱ� �ڱ�
		  ����ġ�� -> �����ϱ� -> ���ϱ� �Ա� �ȱ� �ڱ�
   */



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

#include <iostream>
#include <string>
using namespace std;

class ColorPoint : public Point { // 2���� ��鿡�� �÷����� ǥ���ϴ� Ŭ���� ColorPoint.Point�� ��ӹ���
	string color;// ���� �� ǥ��
public:
	void setColor(string color) { this->color = color; }
	void showColorPoint();
};

void ColorPoint::showColorPoint() {
	cout << color << ":";
	showPoint(); // Point�� showPoint() ȣ��
}

int main() {
	Point p; // �⺻ Ŭ������ ��ü ����
	ColorPoint cp; // �Ļ� Ŭ������ ��ü ����
	cp.set(3, 4); // �⺻ Ŭ������ ��� ȣ��
	cp.setColor("Red"); // �Ļ� Ŭ������ ��� ȣ��
	cp.showColorPoint(); // �Ļ� Ŭ������ ��� ȣ��
}