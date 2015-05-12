/*
 * Circle.h
 *
 *  Created on: 2015年5月8日
 *      Author: lc4t
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_
#include "Shape.h"
class Circle:public Shape{
public:
	Circle(int x, int y, int r);
	int getArea();
	virtual ~Circle();
private:
	int x,y,r;
};

#endif /* CIRCLE_H_ */
