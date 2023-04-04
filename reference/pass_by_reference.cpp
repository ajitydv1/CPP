#include <iostream>
using namespace std;
int swap(int &a,int &b) // pass by reference and its refer to same memory address 
{
	a=a+b;
	b=a-b;
	a=a-b;
	return 0;
}
int main()
{
	int a=10,b=20;

// value a and b before swap
        cout<<endl<<"a="<<a<<"  "<<"b="<<b<<endl;
	swap(a,b);

	//here we can see value will not swap because swaped value is local to swap function
	//and its not referlect to same address 
	cout<<"after swap a="<<a<<" after swap b="<<b<<endl;

	return 0;
       

}
