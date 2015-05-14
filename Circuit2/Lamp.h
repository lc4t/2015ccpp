/*
 * Lamp.h
 *
 *  Created on: 2015年5月12日
 *      Author: lc4t
 */

#ifndef LAMP_H_
#define LAMP_H_
#include "Component.h"
class Lamp : public Component {
public:
	Lamp();
	void on();
	void off();
	virtual ~Lamp();
};

#endif /* LAMP_H_ */
