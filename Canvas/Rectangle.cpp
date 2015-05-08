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
}


void Rectangle::drawSelf()
{
	cout<<"Draw a Rectangle"<<endl;
}

Rectangle::~Rectangle() {
	// TODO Auto-generated destructor stub
}

