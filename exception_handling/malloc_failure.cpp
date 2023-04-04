#include <iostream>
#include <stdlib.h>

using namespace std;

void processrecored(int count)
{
	int *parr=(int *)malloc(count*sizeof(int));
	for(int i=0;i<count;i++)
	{
		parr[i]=i;
	}

	free(parr);
}
int main()
{
	processrecored(1000000000);
}
