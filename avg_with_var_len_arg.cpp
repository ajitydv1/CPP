#include <iostream>
#include <stdarg.h>

int avg(int arg_count , ...)
{
	int i,avg,sum=0;

	va_list var;

	va_start(var,arg_count);

	for(i=0;i<arg_count;i++)
	{
		sum +=va_arg(var,int);
	}

	va_end(var);
	return sum/arg_count;
}

int main()
{

	printf(" avg=%d\n",avg(3,10,5,3));
}
