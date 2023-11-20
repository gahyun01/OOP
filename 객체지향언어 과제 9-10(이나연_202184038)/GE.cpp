#include "GE.h"
#include "UI.h"
#include "09_10_.UI.cpp"

GraphicEditor::~GraphicEditor() {
	Shape* past = pStart;
	while (past != nullptr) {
		Shape* now = past->getNext();
		delete past;
		past = now;
	}
}

void GraphicEditor::insert() {						
	int shape = UI::getShape();					
	switch (shape) {							
	case 1: addShape(new Line()); break;
	case 2: addShape(new Circle()); break;
	case 3: addShape(new Rect()); break;
	}
}
void GraphicEditor::remove() {
	int idx = UI::getIdx();
	rmvShape(idx);
}

void GraphicEditor::paint() {		
	Shape* now = pStart;		
	int i = 0;
	while (now != nullptr) {	
		std::cout << i << ": ";
		now->paint();
		now = now->getNext();
		i++;
	}
}
bool GraphicEditor::addShape(Shape* a, int idx) {	
	if (idx == -1) {			
		if (pLast == nullptr)	
			pStart = pLast = a;
		else {					
			pLast->add(a);
			pLast = a;
		}
		return true;
	}
	if (idx == 0) {			
		if (pStart = nullptr)	
			pStart = pLast = a;
		else {				
			a->add(pStart);		
			pStart = a;		
		}
		return true;
	}
	if (pStart == nullptr && idx != 0) {	
		std::cout << "[����] �� ����Ʈ�̹Ƿ� " << idx << "��° ���� �����ϴ�." << std::endl;
		return false;
	}

	Shape* pNow = pStart;
	Shape* pPast = nullptr;
	for (int i = 0; i < idx; i++) {
		if ((pNow) == nullptr) {		
			std::cout << "[����] �ش� ����Ʈ�� �� ��� ������ " << idx << "������ �����ϴ�." << std::endl;
			return false;
		}
		else {
			pPast = pNow;
			pNow = pNow->getNext();
		}
	}

	if (pNow == nullptr) {		
		pLast->add(a);
		pLast = a;
	}
	else {					
		pPast->add(a);			
		a->add(pNow);			
	}
	return true;
}
bool GraphicEditor::rmvShape(int idx) {					
	if (pStart == nullptr) {						
		std::cout << "[����] �� ����Ʈ�̹Ƿ� ������ �� �����ϴ�." << std::endl;
		return false;
	}
	if (pStart == pLast && (idx == -1 || idx == 0)) {	
		delete pStart;
		pStart = pLast = nullptr;
		return true;
	}
	if (idx == 0) {							
		Shape* pNext = pStart->getNext();		
		delete pStart;							
		pStart = pNext;						
		if (pStart == nullptr) pLast = nullptr;	
		return true;
	}
	
	Shape* pPast = nullptr;	
	Shape* pNow = pStart;		
	for (int i = 0; i < idx; i++) {				
		if (pNow == pLast) {				
			std::cout << "[����] �ش� ����Ʈ�� �� ��� ������ " << (idx + 1) << "������ �����ϴ�." << std::endl;
			return false;
		}
		pPast = pNow;
		pNow = pNow->getNext();
		if (pNow == pLast && idx == -1)	break;	
	}

	Shape* pNext = pNow->getNext();	
	if (pStart == pLast) {				
		delete pNow;
		pStart = pLast = nullptr;
		return true;
	}
	
	delete pNow;				
	pPast->add(pNext);			
	if (pNext == nullptr)	
		pLast = pPast;				
	return true;
}

void GraphicEditor::start() {
	std::cout << "�׷��� �������Դϴ�." << std::endl;
	while (true) {
		int menu = UI::getMenu();
		switch (menu) {
		case 1:						
			insert();	break;
		case 2:						
			remove();	break;
		case 3:							
			paint();	break;
		case 4:						
			return;
		}
	}
}
