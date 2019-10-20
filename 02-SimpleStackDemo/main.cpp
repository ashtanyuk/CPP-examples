/* cpp-examples by A.A.Shtanyuk */
/* main.cpp - Example of Counter class usage */

#include "stack.h"

int main()
{
	Stack stack1;
	for(int i=0;stack1.push(i);i++) {
		stack1.print();
	}
	char ch;
	Stack stack2=stack1;
	while(stack1.pop(ch))
		stack1.print();
	return 0;
}