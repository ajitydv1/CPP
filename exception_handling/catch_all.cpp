#include <iostream>
using namespace std;

int main()
{
	try
	{
		throw 10;
	}
	catch (char *excp)
	{
	 cout<<"exception detected in char *"<<endl;
	}
	
	catch(...)
	{
	 cout<<" exception detected through catch all \n";
	}	
}
