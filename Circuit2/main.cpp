#include <iostream>
using namespace std;
#include "Circuit.h"
#include "Button.h"
int main(int argc,const char *argv[])
{
	Circuit circuit;

	Lamp lamp;
	Fan fan;
	Button button;

	circuit.setSwitch(&button);
	circuit.append(*lamp);
	circuit.append(&fan);

	button.on();
	button.off();




	return 0;
}
