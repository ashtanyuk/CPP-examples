/* cpp-examples by A.A.Shtanyuk */
/* counter.cpp - The implementation of the Counter class */

#include "counter.h"


Counter::Counter()
{
	reset();
}
Counter::Counter(int value)
{
	set(value);
}
void Counter::inc()
{
	count++;
}
void Counter::dec()
{
	if(count>0)
	  count--;
}
void Counter::reset()
{
	count=0;
}
void Counter::set(int value)
{
	if(value<0)
		count=0;
	else
	    count=value;
}
int Counter::get() const
{
	
	return count;
}
Counter::~Counter()
{
}