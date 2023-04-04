// C++ program demonstrate if there
// is no virtual function used in
// the Base class


/// here output will be error 

#include <iostream>
using namespace std;

class Base
{
	void print()
	{
		cout<<" base class"<<endl;
	}
};

class derived1 : public Base
{
	void print()
	{
		cout<<" drived 1 class"<<endl;
	}
};

class derived2 : public Base
{
	void print()
	{
		cout<<" derived 2 class"<<endl;
	}
};

int main()
{
	derived1 d1;

	Base *bp=dynamic_cast<Base*>(&d1);

	derived2 *d2=dynamic_cast<derived2*>(bp);

	if(d2==nullptr)
	cout<<"null"<<endl;
	else
	cout<<"not null"<<endl

	return 0;
}
