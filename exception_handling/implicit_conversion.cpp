#include <iostream>
using namespace std;

int main()
{
	try
	{
		throw 'a';
	}
	catch (int a)
	{
	 cout<<"exception detected in interger"<<endl;
	}
	
	catch(...)
	{
	 cout<<" exception detected through catch all \n";
	}	
}
