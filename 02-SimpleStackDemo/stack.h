/* cpp-examples by A.A.Shtanyuk */
/* stack.h - The definition of the Stack class */

#ifndef _H_STACK_H_
#define _H_STACK_H_

#define SIZE 10

class Stack
{
public:
	bool push(char);
	bool pop(char&);
	Stack();
	Stack(const Stack&);
	void print();
private:
	char storage[SIZE];
	int top;
};


#endif