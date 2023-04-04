#include <iostream>
#include <stdarg.h>

using namespace std;

int sum(int arg , ...)
{
	int i,sumation=0;
	va_list var;

	va_start(var,arg);
	for(i=0;i<arg;i++)
	{
		sumation +=va_arg(var,int);
	}

	va_end(var);
	return sumation;
}
int main()
{

	cout<<"sum="<<sum(2,2,3)<<endl;
	cout<<"sumation="<<sum(4,2,3,4,5)<<endl;
	return 0;
}
