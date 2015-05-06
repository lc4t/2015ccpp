/*
 * Circle.cpp
 *
 *  Created on: 2015年5月5日
 *      Author: lc4t
 */

#include "Circle.h"

Circle::Circle(Point &c, int r) {
	point = c;
	x = c.getX();
	y = c.getY();
	this->r = r;
}

Circle::~Circle() {

}


void Circle::move(int offsetX, int offsetY)
{
	point.move(offsetX,offsetY);
}

Point Circle::getCenter()
{
	return point;
}
