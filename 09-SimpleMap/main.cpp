/* cpp-examples by A.A.Shtanyuk */
/* main.cpp - Example of MyMap template usage */

#include "mymap.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
	MyMap<int,string> mms(5);
	mms.push_pair(1,"january");
	mms.push_pair(2,"february");
	cout<<mms.get_value(2)<<endl;
	return 0;
}
