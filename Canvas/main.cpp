#include <iostream>
using namespace std;

#include "Canvas.h"

int main(int argc, const char *argv[])
{
	Canvas canvas;
	Circle c1(10,20,5);//坐标 x,y,r
	Circle c2(20,30,100);

	Rectangle r1(10,20,5,3);//坐标x,y 长宽 length,width

	canvas.append(&c1);
	canvas.append(&r1);
	canvas.append(&c2);

	canvas.draw();

	return 0;
}
