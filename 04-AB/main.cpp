/* cpp-examples by A.A.Shtanyuk */
/* main.cpp - Object-member and static-member simple demo */

class A
{
private:
	int value;
	static int count;
public:
	A(int i):value(i){count++;}
};
class B
{
private:
	char ch;
	A a;
public:
	B(char c,int i):a(i),ch(c){}
};
int A::count=0;

int main()
{
	A a(10);
	B b('\n',20);
	return 0;
}
	