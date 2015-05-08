/*
 * Point.cpp
 *
 *  Created on: 2015年5月5日
 *      Author: lc4t
 */

#include "Point.h"


Point::~Point()
{

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
