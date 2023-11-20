#ifndef LINE_H
#define LINE_H
#include <iostream>
#include "Shape.h"
class Line : public Shape {
protected:
	virtual void draw() { std::cout << "Line" << std::endl; }
};
#endif 