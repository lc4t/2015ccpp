/*
 * Fan.h
 *
 *  Created on: 2015年5月12日
 *      Author: lc4t
 */

#ifndef FAN_H_
#define FAN_H_
#include "Component.h"
class Fan : public Component
{
public:
	Fan();
	void on();
	void off();
	virtual ~Fan();
private:
	std::string componentName;
};

#endif /* FAN_H_ */
