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
    Circle(int x, int y, int r):Point(x,y),r(r){};
    void move(int offsetX, int offsetY);
    Point& getCenter(){return *this;};
    virtual ~Circle();
private:
    int r;
};

#endif /* Circle_H_ */
