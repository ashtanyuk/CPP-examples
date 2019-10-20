/* cpp-examples by A.A.Shtanyuk */
/* simple_complex.cpp - A simple example of operator overloading */

#include<iostream>
using namespace std;

class Complex
{
	friend ostream& operator<<(ostream& stream,Complex& sec);
public:
	Complex(int r,int i):re(r),im(i){}
	Complex():re(0),im(0){}
	int operator[](int index) {
		return (index?im:re);
	}
	Complex operator+(Complex& second)	{
		return Complex(re+second.re,
			           im+second.im);
	}
	bool operator==(Complex& sec){
		return (re==sec.re && im==sec.im);
	}
	bool operator!=(Complex& sec)	{
		return !(*this==sec);
	}
	Complex& operator=(Complex& sec)	{
		re=sec.re;
		im=sec.im;
		return *this;
	}
private:
	
	int re;
	int im;
};

ostream& operator<<(ostream& stream,Complex& sec)
{
	return stream<<"("<<sec.re<<","
		          <<sec.im<<"i"<<")";
}

int main()
{
	Complex a(1,2),b(10,10),c(a+b);
	c=a+b;
	cout<<a<<endl<<b<<endl<<c<<endl;

	return 0;
}
	