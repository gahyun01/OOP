#ifndef UI_H
#define UI_H
#include <iostream>
#include "Shape.h"
class UI {
	static bool isErr();
public:
	static int getMenu();
	static int getShape();
	static int getIdx();
};
#endif 