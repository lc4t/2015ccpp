/*
 * Circle.cpp
 *
 *  Created on: 2015年5月7日
 *      Author: lc4t
 */

#include "Circle.h"

Circle::Circle() {
	// TODO Auto-generated constructor stub

}

Circle::Circle(int cx,int cy, int r) {
//	x = cx;
//	y = cy;
	this->r = r;
	setx(cx);
	sety(cy);
//	setR(r);

}




Circle::~Circle() {
	// TODO Auto-generated constructor stub

}


int Circle::getX2()
{
//	return x;
	return getX();
}

int Circle::getY2()
{
//	return y;
	return getY();
}

void Circle::move2(int offsetX, int offsetY)
{
	move(offsetX,offsetY);
}
