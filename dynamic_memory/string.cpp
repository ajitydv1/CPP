#include <iostream>
using namespace std;

int main()
{
	char *str=new char[20];
	cout<<" enter string "<<endl;
	cin>>str;
	cout<<str<<endl;
	delete []str;

}
