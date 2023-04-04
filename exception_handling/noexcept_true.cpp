#include <iostream>
using namespace std;

int sum(int x, int y) noexcept(true)
{
	return x+y;
}

int main()
{
	try
	{
	sum(3,5);
	}
	catch(int x)
	{
		cout<<x<<endl;
	}
}
