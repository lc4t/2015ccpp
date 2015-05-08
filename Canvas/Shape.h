/*
 * Shape.h
 *
 *  Created on: 2015年5月8日
 *      Author: lc4t
 */

#ifndef SHAPE_H_
#define SHAPE_H_

class Shape {
public:
	Shape();
	void drawBase();
	virtual ~Shape();
	void drawSelf(){};
};

#endif /* SHAPE_H_ */
