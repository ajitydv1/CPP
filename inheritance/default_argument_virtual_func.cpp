#include <iostream>
using namespace std;

class base
{
	private:
		int x;
	public:
		virtual void show(int x=0)
		{
			cout <<" base class "<<endl;
		}
};

class derived :public base
{
	public:
		virtual void show(int x)
		{
			cout<<"derived x="<<x<<endl;
		}
};

int main()
{
	derived d;
	base *b=&d;
	b->show();
}
