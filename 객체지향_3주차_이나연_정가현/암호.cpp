/*

1. c-스프링을 이용하여 암호가 입력되면 프로그램을 종료하는 예
접근 방식 : 1) 맞는 암호 지정 2) 암호 입력 받기 3) if문으로 맞았는지 틀렸는지 확인하기로 하려고 했으나
암호 입력부터 받는 게 어떻겠냐는 의견이 있었지만 옳은 암호를 먼저 지정하는 걸로 결정.
If문에서 if (password == “c++”)일 것이라고 생각했지만 실행 결과 무조건 암호가 틀렸다고 출력되었다.
이에 우리는 검색을 통해 힌트를 얻었고 strcmp 함수에 대해 알게 되었다.
이 함수는 문자열 비교에 사용되는 함수이다. 이것은 두 문자열이 같으면 0을, 같지 않으면 0이 아닌 값을 반환한다.

*/


#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char password[10];

	while (true) {
		cout << "프로그램을 종료하려면 암호를 입력하세요 ";
		cin >> password;
		if (strcmp(password, "C++") == 0) {
			cout << "프로그램을 정상 종료합니다." << endl;
			break;
		}
		else {
			cout << "암호가 틀립니다." << endl;
		}
	}
}