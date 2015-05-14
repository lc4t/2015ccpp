/*
 * Fan.h
 *
 *  Created on: 2015年5月12日
 *      Author: lc4t
 */

#ifndef FAN_H_
#define FAN_H_

class Fan : public Component{
public:
	Fan();
	void on();
	void off();
	virtual ~Fan();
};

#endif /* FAN_H_ */
