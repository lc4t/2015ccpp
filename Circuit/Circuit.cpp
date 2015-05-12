/*
 * Circuit.cpp
 *
 *  Created on: 2015年5月12日
 *      Author: lc4t
 */

#include "Circuit.h"
#include <vector>
using namespace std;
Circuit::Circuit() {
	// TODO Auto-generated constructor stub

}

Circuit::~Circuit() {
	// TODO Auto-generated destructor stub
}




void Circuit::append(Component* c)
{
	components.push_back(c);
}

void Circuit::setSwitch(Button* b);
{
	button = b;
}

