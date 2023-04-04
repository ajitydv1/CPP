#include <iostream>
using namespace std;

class base
{
	public:
	
	virtual void show(int i=0)
	{
		cout<<"base i="<<i<<endl;
	}
};

class derived :public base
{
	public:
		void show(int i=10) override
		{
			cout<<"derived i="<<i<<endl;
		}
};

int main()
{
	base *obj=new base();
	derived *d=new derived();
}
