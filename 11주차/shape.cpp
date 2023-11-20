#include <iostream>
#include "shape.h"
using namespace std;

void Shape::paint() {
	draw();		// 동적 바인딩
}

void Shape::paint() {
	cout << "shape--" << endl;
}

Shape* Shape::add(Shape* p) {
	this->next = p;
	return p;
}