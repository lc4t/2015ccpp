/*
 * Circuit.h
 *
 *  Created on: 2015年5月12日
 *      Author: lc4t
 */

#ifndef CIRCUIT_H_
#define CIRCUIT_H_
#include <vector>
#include "Component.h"
#include "Button.h"
class Circuit {
public:
	Circuit();
	void append(Component* c);
	void setSwitch(Button* b);
	void on();
	void off();
	virtual ~Circuit();
private:
	std::vector<Component*> components;
	Button* button;
};

#endif /* CIRCUIT_H_ */
