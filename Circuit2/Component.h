/*
 * Component.h
 *
 *  Created on: 2015年5月12日
 *      Author: lc4t
 */

#ifndef COMPONENT_H_
#define COMPONENT_H_
#include <string>
class Component {
public:
	Component();
	virtual void on();
	virtual void off();
	virtual ~Component();
protected:
	std::string componentName;
};

#endif /* COMPONENT_H_ */
