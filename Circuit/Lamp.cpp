/*
 * Lamp.cpp
 *
 *  Created on: 2015年5月12日
 *      Author: lc4t
 */

#include "Lamp.h"
#include <iostream>
using namespace std;
Lamp::Lamp() {
	// TODO Auto-generated constructor stub
	componentName = "Lamp";
}

Lamp::~Lamp() {
	// TODO Auto-generated destructor stub
}

void Lamp::on()
{
	cout<<componentName<<" is on\n";
}

void Lamp::off()
{
	cout<<componentName<<" is off\n";
}

