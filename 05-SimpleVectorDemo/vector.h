/* cpp-examples by A.A.Shtanyuk */
/* vector.h - The definition of the Vector class */

#ifndef _VECTOR_MY_
#define _VECTOR_MY_
#include <iostream>
using namespace std;
class Vector
{
	friend ostream& operator<<(ostream&,Vector&);
public:
	Vector();
	Vector(int);
	Vector(const Vector&);
	~Vector();
	Vector operator+(const Vector&);
	Vector& operator=(const Vector&);
private:
	int* data;
	int size;
};
#endif