/*
 * Circuit.cpp
 *
 *  Created on: 2015年5月12日
 *      Author: lc4t
 */

#include "Circuit.h"
#include <vector>
#include "Button.h"
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
	button->setComponents(components);
}

void Circuit::setSwitch(Button* b)
{
//	button = new button(components);
	button = b;
	button->setComponents(components);
}


Button* Circuit::useButton()
{
	return button;
}
