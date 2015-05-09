/*
 * Circle.cpp
 *
 *  Created on: 2015年5月8日
 *      Author: lc4t
 */

#include "Circle.h"
#include <iostream>
using namespace std;
Circle::Circle(int x, int y, int r) {
	// TODO Auto-generated constructor stub
	this->x = x;
	this->y = y;
	this->r = r;
	shapeName = "Circle";
}


Circle::~Circle() {
	// TODO Auto-generated destructor stub
}

