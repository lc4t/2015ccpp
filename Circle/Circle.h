/*
 * Circle.h
 *
 *  Created on: 2015年5月5日
 *      Author: lc4t
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_
#include "Point.h"
class Circle {
public:
	Circle(Point &c, int r);
	void move(int offsetX, int offsetY);
	Point getCenter();
	virtual ~Circle();
private:
	int x,y,r;
	Point point;
};


#endif /* CIRCLE_H_ */
