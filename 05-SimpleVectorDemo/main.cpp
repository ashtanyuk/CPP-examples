/* cpp-examples by A.A.Shtanyuk */
/* main.cpp - Example of Vector class usage */

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "vector.h"
using namespace std;

int main()
{
	srand(time(0));
	Vector v1(5),v2(5),v3;
	cout<<v1<<endl<<v2<<endl<<v3<<endl;
    v3=v1+v2;
    cout<<v1<<endl<<v2<<endl<<v3<<endl;
	return 0;
}