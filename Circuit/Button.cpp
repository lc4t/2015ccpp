/*
 * Button.cpp
 *
 *  Created on: 2015年5月12日
 *      Author: lc4t
 */
#include <iostream>
#include "Button.h"
using namespace std;
Button::Button() {
	// TODO Auto-generated destructor stub
}


void Button::setComponents(std::vector<Component*> c) {
	// TODO Auto-generated constructor stub
	components = c;
}

Button::~Button() {
	// TODO Auto-generated destructor stub
}

void Button::on()
{
	for (std::vector<Component*>::iterator i = components.begin(); i != components.end(); i++)
	{
		(*i)->on();
	}
}

void Button::off()
{
	for (std::vector<Component*>::iterator i = components.begin(); i != components.end(); i++)
	{
		(*i)->off();
	}
}
