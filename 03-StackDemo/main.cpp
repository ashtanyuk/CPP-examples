/* cpp-examples by A.A.Shtanyuk */
/* main.cpp - Example of Counter class usage */

#include "stack.h"

int main()
{
	Stack stack1(5);
	Stack stack2;

	for(int i=10;i<80 && stack2.push(i);++i)
		stack2.print();
	return 0;
}