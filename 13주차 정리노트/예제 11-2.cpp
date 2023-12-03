/*
	cin.get()과 cin.get(char&)을 설명는 코드다.
	get1() 함수는 cin.get()을 사용하여 문자를 입력받고 출력하는 예제를 제공하고, get2() 함수는 cin.get(char&)을 사용하는 예제를 제공합니다. 
	프로그램은 두 함수를 호출하여 사용자가 키보드로 입력한 문자를 받아서 출력합니다.
*/

#include <iostream>
using namespace std;

void get1() {
    // 사용자에게 안내 메시지 출력
    cout << "cin.get()로 <Enter> 키까지 입력 받고 출력합니다>>";
    int ch; // EOF와의 비교를 위해 int 타입으로 선언

    // cin.get()을 사용하여 문자를 입력 받음
    while ((ch = cin.get()) != EOF) { // 입력된 문자가 EOF(-1)가 아닌 동안 반복
        cout.put(ch); // 읽은 문자를 화면에 출력

        if (ch == '\n')
            break; // <Enter> 키가 입력되면 읽기 중단
    }
}

void get2() {
    // 사용자에게 안내 메시지 출력
    cout << "cin.get(char&)로 <Enter> 키까지 입력 받고 출력합니다>>";
    char ch;

    // cin.get(char&)을 사용하여 문자를 입력 받음
    while (true) {
        cin.get(ch); // 문자 읽기

        if (cin.eof())
            break; // EOF를 만나면 읽기 종료

        cout.put(ch); // 읽은 문자를 화면에 출력

        if (ch == '\n')
            break; // <Enter> 키가 입력되면 읽기 중단
    }
}

int main() {
    // get1 함수 호출 - cin.get() 이용
    get1();

    // get2 함수 호출 - cin.get(char&) 이용
    get2();
}
