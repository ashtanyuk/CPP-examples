/* cpp-examples by A.A.Shtanyuk */
/* stack.cpp - The implementation of the Stack class */

#include<iostream>
#include "stack.h"
using namespace std;

Stack::Stack()
{
	top=0;
}
Stack::Stack(const Stack& st)
{
	top=st.top;
	for(int i=0;i<top;i++)
		storage[i]=st.storage[i];
}
bool Stack::push(char value)
{
	if(top<SIZE) {
		storage[top++]=value;
		return true;
	}
	else 
		return false;
}
bool Stack::pop(char& value)
{
	if(top>0) {
		value=storage[--top];
		return true;
	}
	else
		return false;
}
void Stack::print()
{
	for(int i=0;i<top;++i)
		cout<<(int)storage[i]<<",";
	cout<<endl;
}