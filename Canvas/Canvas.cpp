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


void Canvas::getAllArea()
{
	int sumArea = 0;
	for (vector<Shape*>::iterator i = shapes.begin();i != shapes.end(); i++)
	{
		std::string type = (*i)->getType();
		if (type == "Circle")
		{
			sumArea += ((Circle*)(*i))->getArea();
		}
		else if (type == "Regtangle")
		{
			sumArea += ((Rectangle*)(*i))->getArea();
		}
	}
	cout<<"All area is "<<sumArea<<"\n";
}
