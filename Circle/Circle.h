/*
 * Circle.h
 *
 *  Created on: 2015年5月7日
 *      Author: lc4t
 */

#ifndef Circle_H_
#define Circle_H_
#include "Point.h"
class Circle:private Point {
// This Circle is inherit from Point with Private
public:
	Circle();
	Circle(int cx, int cy, int r);
	int getX2();
	int getY2();
	void move2(int offsetX, int offsetY);
	virtual ~Circle();
private:
	int x,y,r;
};

#endif /* Circle_H_ */
