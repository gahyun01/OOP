/*

���� ��� :
1) ���� 5���� �̸��� �Է� �޴´�.
2) �Է¹��� ������� 1~5������ ������ �ο��Ѵ�.
3) for���� ���� ���� �� �̸��� ã�� ����Ѵ�.

�迭�� �־� ;���� �߶� ������ ���� or ���ÿ� �׾� ;���� pop�Ͽ� ������ ����, spring�� split ����ϴ� �� ��ڳĴ� �ǰ��� �־�����.
���ݱ��� �������� ��� ������ �������� getline�� ���� ;�� �����ڰ� �� �� �ְ� ��.
���� �� �̸��� ã�� ���� for���� ����� �� ������ �־����� �𸣴� ���� �˻��Ͽ� ã�ƺ��� �Բ� �ذ����� ã�ƺ��Ҵ�.

*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name[5];
    string max;
    cout << "5���� �̸��� ';'���� �����Ͽ� �Է��ϼ��� >> ";

    for (int i = 0; i < 5; i++) {
        getline(cin, name[i], ';');
    }
    cout << "\n";

    for (int i = 1; i < 5; i++) {
        if (max.size() < name[i].size()) {
            max = name[i];
        }
    }

    cout << "1 : " << name[0] << endl;
    cout << "2 : " << name[1] << endl;
    cout << "3 : " << name[2] << endl;
    cout << "4 : " << name[3] << endl;
    cout << "5 : " << name[4] << endl;
    cout << "\n";

    cout << "���� �� �̸��� " << max << "\n" << endl;

    return 0;
}