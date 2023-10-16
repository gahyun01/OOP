#if 00

#include <iostream>
using namespace std;

class Circle {
    int radius;

public:
    // �⺻ ������: �������� 1�� �ʱ�ȭ
    Circle() { radius = 1; }

    // �Ű������� �޴� ������: �Ű������� ���� ���������� �ʱ�ȭ
    Circle(int r) { radius = r; }

    // ������ ���� �޼���
    void setRadius(int r) { radius = r; }

    // ���� ���� ��� �޼���
    double getArea() {
        return 3.14 * radius * radius;
    }
};

int main() {
    // Circle Ŭ���� ��ü �迭 ����
    Circle circleArray[3] = { Circle(10), Circle(20), Circle() };

    // ��ü �迭�� �ݺ��ϸ鼭 ���� ���
    for (int i = 0; i < 3; i++) {
        cout << "Circle" << i << "�� ������ " << circleArray[i].getArea() << endl;
    }

    return 0; // main �Լ��� ��ȯ���� 0���� ����
}

#endif

// 4 - 5) ������ ������ ���� �Ҵ� �� ��ȯ ��


#if 01
#include <iostream>
using namespace std;

int main() {
    int* p;

    p = new int; // int Ÿ�� 1�� �Ҵ�
    if (!p) {      // p�� NULL�̸�, �޸� �Ҵ� ����
        cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
        return 0;
    }

    *p = 5; //�Ҵ� ���� ���� ������ 5 ����.
    int n = *p;  // *p�� ���� n�� ����
    cout << "*p = " << *p << '\n'; // p�� �ּҰ� �ȿ� �ִ� ���� �θ�.
    cout << "*n = " << n << '\n';  // n�� �� ���.

    delete p;  // �Ҵ� ���� ���� ������ 5 ����
}

#endif