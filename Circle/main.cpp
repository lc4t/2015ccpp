#include <iostream>
#include "Circle.h"
#include "Point.h"

using namespace std;
int main(int argv, char const *argc[])
{

    Circle c(10,20,5);
    c.move(30,20);
    cout<<c.getCenter().getX()<<","<<c.getCenter().getY()<<endl;


    return 0;
}
