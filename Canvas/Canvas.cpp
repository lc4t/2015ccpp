/*
 * Canvas.cpp
 *
 *  Created on: 2015年5月8日
 *      Author: lc4t
 */

#include "Canvas.h"
#include <vector>
#include <iostream>
using namespace std;
Canvas::Canvas() {
	// TODO Auto-generated constructor stub

}

Canvas::~Canvas() {
	// TODO Auto-generated destructor stub
}

void Canvas::append(Shape* s)
{
	shapes.push_back(s);
}

void Canvas::draw()
{
	for (vector<Shape*>::iterator i = shapes.begin();i != shapes.end(); i++)

	{
		cout<<"You draw a "<<(*i)->drawBase()<<" Done\n";// only can visit Shape
	}

}
