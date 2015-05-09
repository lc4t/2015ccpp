/*
 * Shape.h
 *
 *  Created on: 2015年5月8日
 *      Author: lc4t
 */

#ifndef SHAPE_H_
#define SHAPE_H_
#include <string>
class Shape {
public:
	Shape();
	std::string drawBase();
	virtual ~Shape();
protected:
	std::string shapeName;
};

#endif /* SHAPE_H_ */
