/*

new/delete) ����, heap�������� *p�� int��� �迭[5]�� �ְ�

 int�� �迭�� �� ������ �ش��ϴ� i�� ����.

delete [] p;  =�� �Ŀ� p�� �ּҰ� ��ȯ. // ���ȣ�� ����Ʈ ���� ��ȯ��.

*/


#if 01
#include <iostream>
using namespace std;

int main() {
	cout << "�Է��� ������ ������?";
	int n;
	cin >> n;
	if (n <= 0) return 0;
	int* p = new int[n];
	if (!p) {
		cout << "�޸� �Ҵ��� �� �� �����ϴ�.";
		return 0;
	}

	for (int i = 0; i < n; i++) {
		cout << i + 1 << "��° ����: ";
			cin >> p[i];
	}

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += p[i];
			cout << "��� = " << sum / n << endl;
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
		cout << "���� ������ �Է�(�����̸� ����)>>";
		cin >> radius;
		if (radius < 0) break;
		Circle* p = new Circle(radius); // ���� ��ü ����
		cout << "���Ǹ����� " << p->getArray() << endl;
		delete p; //��ü ��ȯ , delete���� ���ٸ� �޸� ���� �߻�
	}
}

#endif
