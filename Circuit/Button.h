/*
 * Button.h
 *
 *  Created on: 2015年5月12日
 *      Author: lc4t
 */

#ifndef BUTTON_H_
#define BUTTON_H_
#include <vector>
#include "Component.h"
//#include "Circuit.h"
class Button {
public:
	Button();
//	Button(std::vector<Component*> c);
	void setComponents(std::vector<Component*> c);
	void on();
	void off();
//	void setCircuit(Circuit *c);   There is a bug with Circuit.h and Button.h cross reference:(
	virtual ~Button();
private:
	std::vector<Component*> components;
};

#endif /* BUTTON_H_ */
