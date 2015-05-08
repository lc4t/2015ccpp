/*
 * Point.h
 *
 *  Created on: 2015年5月5日
 *      Author: lc4t
 */

#ifndef POINT_H_
#define POINT_H_

class Point {
public:
    Point(int x, int y):x(x),y(y){};
    int getX();
    int getY();
    void move(int offsetX,int offsetY);
    virtual ~Point();
private:
    int x,y;
};

#endif /* POINT_H_ */
