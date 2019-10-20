/* cpp-examples by A.A.Shtanyuk */
/* stack.h - The definition of the Stack class */

#ifndef _H_STACK_H_
#define _H_STACK_H_

class Stack
{
public:
	bool push(char);
	bool pop(char&);
	Stack();
	Stack(int);
	Stack(const Stack&);
	void print();
private:
	char *storage;
	int size;
	int top;
	void resize(int);
	void empty();
};


#endif