/*
 * Circle2.h
 *
 *  Created on: 2015年5月7日
 *      Author: lc4t
 */

#ifndef CIRCLE2_H_
#define CIRCLE2_H_
#include "Point.h"
class Circle2:private Point {
// This Circle2 is inherit from Point with Private
public:
	Circle2();
	Circle2(int cx, int cy, int r);
	int getX2();
	int getY2();
	void move2(int offsetX, int offsetY);
	virtual ~Circle2();
private:
	int x,y,r;
};

#endif /* CIRCLE2_H_ */
