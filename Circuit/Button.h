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
class Button {
public:
	Button(Component* c);
	void on();
	void off();
	virtual ~Button();
private:
	std::vector<Component*> components;
};

#endif /* BUTTON_H_ */
