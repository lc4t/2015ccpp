/*
 * Point.cpp
 *
 *  Created on: 2015年5月5日
 *      Author: lc4t
 */

#include "Point.h"
Point::Point()
{
	x = 0;
	y = 0;
}

Point::Point(int cx, int cy) {

	x = cx;
	y = cy;
}
Point::~Point()
{

}

void Point::setx(int cx)
{
	this->x = cx;
}


void Point::sety(int cy)
{
	this->y = cy;
}


void Point::move(int offsetX,int offsetY)
{
	x += offsetX;
	y += offsetY;
}

int Point::getX()
{
	return x;
}
int Point::getY()
{
	return y;
}
