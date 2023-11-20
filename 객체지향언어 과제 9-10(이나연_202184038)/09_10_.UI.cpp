#include "UI.h"

bool UI::isErr() {			
	if (std::cin.fail()) {
		std::cin.clear();			
		std::cin.ignore(99, '\n');	
		return true;
	}
	return false;
}

int UI::getMenu() {			
	int menu;
	while (true) {
		std::cout << "����:1, ����:2, ��κ���:3, ����:4 >> ";
		std::cin >> menu;
		if (isErr() == false && (menu == 1 || menu == 2 || menu == 3 || menu == 4)) return menu;
		std::cout << "[ERROR: �������� ���� �Է�] 1, 2, 3, 4 �� �ϳ��� �Է��ϱ�" << std::endl;
	}
	return menu;
}

int UI::getShape() {			
	int shape;
	while (true) {
		std::cout << "��:1, ��:2, �簢��:3 >> ";
		std::cin >> shape;
		if (isErr() == false && (shape == 1 || shape == 2 || shape == 3)) return shape;
		else std::cout << "[ERROR: �������� ���� �Է�] 1, 2, 3 �� �ϳ��� �Է��ϱ�" << std::endl;
	}
}

int UI::getIdx() {		
	int idx;
	while (true) {
		std::cout << "�����ϰ��� �ϴ� ������ �ε��� >> ";
		std::cin >> idx;
		if (isErr() == false || idx >= 0) return idx;
		std::cout << "[ERROR: �������� ���� �Է�] 0 �̻��� ������ �Է��ϱ�" << std::endl;
	}
}