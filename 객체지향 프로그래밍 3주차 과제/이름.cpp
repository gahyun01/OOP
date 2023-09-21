/*

접근 방법 :
1) 먼저 5명의 이름을 입력 받는다.
2) 입력받은 순서대로 1~5까지의 순서를 부여한다.
3) for문을 통해 제일 긴 이름을 찾아 출력한다.

배열에 넣어 ;까지 잘라서 변수에 저장 or 스택에 쌓아 ;까지 pop하여 변수에 저장, spring에 split 사용하는 게 어떻겠냐는 의견이 있었지만.
지금까지 수업에서 배운 내용을 바탕으로 getline을 통해 ;이 구분자가 될 수 있게 함.
제일 긴 이름을 찾기 위해 for문을 사용할 때 막힘이 있었지만 모르는 것을 검색하여 찾아보고 함께 해결방법을 찾아보았다.

*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name[5];
    string max;
    cout << "5명의 이름을 ';'으로 구분하여 입력하세요 >> ";

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

    cout << "가장 긴 이름은 " << max << "\n" << endl;

    return 0;
}