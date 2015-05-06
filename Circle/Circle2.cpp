/*
 * Circle2.cpp
 *
 *  Created on: 2015年5月7日
 *      Author: lc4t
 */

#include "Circle2.h"

Circle2::Circle2() {
	// TODO Auto-generated constructor stub

}

Circle2::Circle2(int cx,int cy, int r) {
//	x = cx;
//	y = cy;
	this->r = r;
	setx(cx);
	sety(cy);
//	setR(r);

}




Circle2::~Circle2() {
	// TODO Auto-generated constructor stub

}


int Circle2::getX2()
{
//	return x;
	return getX();
}

int Circle2::getY2()
{
//	return y;
	return getY();
}

void Circle2::move2(int offsetX, int offsetY)
{
	move(offsetX,offsetY);
}
