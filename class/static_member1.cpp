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
	B()
	{
		cout<<" constructor B is called:"<<endl;
	}
};

int main()
{
  B b;

}
