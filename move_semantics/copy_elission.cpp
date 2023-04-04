#include <iostream>
using namespace std;

class B
{
	public:
		B(const char *str="\0")
		{
		 cout<<" default copy construct is called "<<endl;
		}

		B(const B &b)
		{
		 cout<<" copy constructor is called"<<endl;
		}
};
int main()
{
	B ob="call";
	return 0;
}
