#include <iostream>
#include "Circle.h"
#include "Point.h"

using namespace std;
int main(int argv, char const *argc[])
{
	Point center(10,20);
	Circle circle(center,5);
	circle.move(30,20);
	cout<<circle.getCenter().getX()<<","<<circle.getCenter().getY()<<endl;
	return 0;
}
