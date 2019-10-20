/* cpp-examples by A.A.Shtanyuk */
/* stack.cpp - The implementation of the Stack class */

#include<iostream>
#include "stack.h"
using namespace std;

Stack::Stack()
{
   empty();
}
Stack::Stack(int size)
{
	if(size>0) {
		storage=new char[this->size=size];
		top=0;
	} else
		empty();	
}
Stack::Stack(const Stack& st)
{
	if(st.size) {
		storage=new char[this->size=st.size];
		top=st.top;
		for(int i=0;i<top;++i)
			storage[i]=st.storage[i];
	}
	else 
		empty();
}
void Stack::empty()
{
		storage=NULL;
	    top=0;
	    size=0;
}
bool Stack::push(char value)
{
	if(size>0 && top<size ) {
		storage[top++]=value;
		return true;
	}
	else {
		resize(size+10);
		storage[top++]=value;
		return true;
	}
}
bool Stack::pop(char& value)
{
	if(size>0 && top>0) {
		value=storage[--top];
		return true;
	}
	else
		return false;
}
void Stack::print()
{
	cout<<'['<<size<<"] ";
	for(int i=0;i<top;++i)
		cout<<(int)storage[i]<<",";
	cout<<endl;
}
void Stack::resize(int newsize)
{
	char *temp=new char[newsize];
	for(int i=0;i<top;++i)
		temp[i]=storage[i];
	size=newsize;
	delete[] storage;
	storage=temp;
}