#include <iostream>
#include <stdlib.h>

using namespace std;

int  processrecored(int count)
{
	// int ARR_SIZE=" ";
//	long double *parr=(long double *)malloc(ARR_SIZE*sizeof(long double));
	if(1)//parr==NULL)
		throw runtime_error("failed to allocate memory");
/*	for(int i=0;i<count;i++)
	{
		parr[i]=i;
	}

	free(parr);*/
	return 0;
}

int main()
{
	try
	{
	processrecored(9000000);
	}
	catch (runtime_error &ex)
	{
		cout<<ex.what()<<endl;
	}
}
