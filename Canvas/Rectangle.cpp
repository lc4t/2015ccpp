/*
 * Rectangle.cpp
 *
 *  Created on: 2015年5月8日
 *      Author: lc4t
 */

#include "Rectangle.h"
#include <iostream>
using namespace std;
Rectangle::Rectangle(int x, int y, int length, int width) {
	// TODO Auto-generated constructor stub
	this->x = x;
	this->y = y;
	this->length = length;
	this->width = width;
	type = "Rectangle";
}

int Rectangle::getArea()
{
	return x * y;
}

Rectangle::~Rectangle() {
	// TODO Auto-generated destructor stub
}

