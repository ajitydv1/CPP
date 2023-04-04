#include<iostream>
using namespace std;

int main()
{

	int x=-1;

	cout<<" enter the input \n";
	cin>>x;
	cout<<x<<endl;
	try
	{
//		cin>>x;
	if(x<0)
	{
	 cout<<" when exception is detected not detected "<<x<<endl;
	throw x;
	cout<<" block to be executed after exception\n";	
	}
	}
	catch(int x)
	{
		cout<<" exception detected \n";

			
	}
	cout<<"x="<<x<<endl;
}
