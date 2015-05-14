/*
 * Lamp.cpp
 *
 *  Created on: 2015年5月12日
 *      Author: lc4t
 */

#include "Lamp.h"

Lamp::Lamp() {
	// TODO Auto-generated constructor stub
	componentName = "Lamp";
}

Lamp::~Lamp() {
	// TODO Auto-generated destructor stub
}

void Fan::on()
{
	std::cout<<componentName<<" is on\n";
}

void Fan::off()
{
	std::cout<<componentName<<" is off\n";
}
