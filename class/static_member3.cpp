#include <iostream>
using namespace std;

class A
{
	public:
		A()
		{
			cout<<" constructor A is called"<<endl;
		}
};

class B
{
	static A a;
	public:
	static void print()
	{
		cout<<" constructor B is called:"<<endl;
	}
};

A B::a;
int main()
{
	B::print() ; 

}
