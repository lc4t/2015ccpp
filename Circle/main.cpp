#include <iostream>
#include "Circle.h"
#include "Circle2.h"
#include "Point.h"

using namespace std;
int main(int argv, char const *argc[])
{
	Point center(10,20);
	Circle circle(center,5);
	circle.move(30,20);
	cout<<circle.getCenter().getX()<<","<<circle.getCenter().getY()<<endl;

	Circle2 circle2(10,20,5);
	circle2.move2(30,20);
	cout<<circle2.getX2()<<","<<circle2.getY2()<<endl;

	return 0;
}
