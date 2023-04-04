#include <iostream>
using namespace std ;

class test
{
	char c;
	double d;
	static test self;
};

int main()
{
	test t;
	cout<<" sizeof="<<sizeof(t)<<endl;
	getchar();
	return 0;
}
