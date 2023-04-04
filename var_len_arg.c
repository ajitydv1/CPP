
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <stdarg.h>


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

//	cout<<"sum="<<sum(1,2,3)<<endl;
//	cout<<"sumation="<<sum(1,2,3,4,5)<<endl;

	printf("sum=%d\n",sum(1,2,3));
	return 0;
}
