#include <iostream>
#include "Ram.h"

using namespace std;


Ram::Ram() {

	for (i = 0; i < 100; i++) {
		mem[i] = 0;
	}
	
}
Ram::~Ram() {
	cout << "�޸� ���ŵ�" << endl;
}

char Ram::read(int address) {
	return mam[address]
}

void Ram::write(int address, char value) {
	mem[address] = value;

}