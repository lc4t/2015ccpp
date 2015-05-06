#include <iostream>
#include "Circle.h"
#include "Point.h"

using namespace std;
int main(int argv, char const *argc[])
{
	Circle circle(10,20,5);
	circle.move2(30,20);
	cout<<circle.getX2()<<","<<circle.getY2()<<endl;
	return 0;
}
