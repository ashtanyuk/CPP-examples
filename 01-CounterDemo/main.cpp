/* cpp-examples by A.A.Shtanyuk */
/* main.cpp - Example of Counter class usage */

#include<iostream>
#include"counter.h"

using namespace std;

int main()
{
	Counter c1;
	Counter c[10]={1,2,3};
	Counter *p=new Counter[10];

	c[5].set(100);
	p[5].set(100);
	
	while(c1.get()<20)
	{
		c1.inc();
		cout<<c1.get()<<'\a'<<endl;
	}
	return 0;
}