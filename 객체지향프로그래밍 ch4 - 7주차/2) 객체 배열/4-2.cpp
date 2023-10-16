#include <iostream>
#include "4-2.h"

Circle::Circle() {
	radius = 1;
}
Circle::Circle(int r) {
	radius = r;
}
void Circle::setRadius(int r) {
	radius = r;
}
double Circle::getArea() {
	return 3.14 * radius * radius;
}