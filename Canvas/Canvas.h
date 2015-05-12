/*
 * Canvas.h
 *
 *  Created on: 2015年5月8日
 *      Author: lc4t
 */

#ifndef CANVAS_H_
#define CANVAS_H_
#include "Circle.h"
#include "Rectangle.h"
#include <vector>
using namespace std;
class Canvas {
public:
	Canvas();
	void append(Shape* s);
	void getAllArea();
	virtual ~Canvas();
	void draw();
private:
	vector<Shape*> shapes;
};

#endif /* CANVAS_H_ */
