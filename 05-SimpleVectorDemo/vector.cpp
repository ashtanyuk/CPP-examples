/* cpp-examples by A.A.Shtanyuk */
/* vector.cpp - The implementation of the Vector class */

#include <iostream>
#include <stdlib.h>
#include "vector.h"
using namespace std;

Vector::Vector():data(0),size(0)
{
}
Vector::Vector(int sz):size(sz)
{
	data=new int[size];
	for(int i=0;i<size;++i)
		data[i]=rand()%100;
}
Vector::Vector(const Vector& v)
{
	if(v.size)
	{
	   delete[] data;
	   data=new int[size=v.size];
	   memcpy(data,v.data,size*sizeof(int));
	}
	else
	{
		data=0; size=0;
	}
}
Vector::~Vector()
{
	delete[] data;
}
Vector Vector::operator+(const Vector& v)
{
	if(size==v.size)
	{
		Vector temp(v.size);
		for(int i=0;i<size;++i)
			temp.data[i]=data[i]+v.data[i];
		return temp;
	}
	else
		return Vector();
}
Vector& Vector::operator=(const Vector& v)
{
	delete[] data;
	if(v.size) {
		data=new int[size=v.size];
		memcpy(data,v.data,size*sizeof(int));
	}
	else
	{
		data=0; size=0;
	}
	return *this;
}
ostream& operator<<(ostream& s,Vector& v)
{
	s<<"(";
	for(int i=0;i<v.size;i++)
		s<<v.data[i]<<" ";
	s<<")";
	return s;
}