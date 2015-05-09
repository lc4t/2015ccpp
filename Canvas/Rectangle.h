/*
 * Rectangle.h
 *
 *  Created on: 2015年5月8日
 *      Author: lc4t
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_
#include "Shape.h"
class Rectangle:public Shape {
public:
	Rectangle(int x, int y, int length, int width);
	virtual ~Rectangle();
private:
	int x,y,length,width;
};

#endif /* RECTANGLE_H_ */
