#include <iostream>
using namespace std;

class shape
{
/*	protected :
		int length ,width;
*/
	public:
		shape(int l ,int w)
		{
			length=l;
			width=w;
		}

	     virtual	int get_area()
		{
			cout<<" base call called "<<endl;
			return 1;
		}

	protected:
		int length,width;
};

class square :public shape
{
	public:
		square(int l=0,int w=0):shape(l,w)
		{
		}
	
		int get_area()
		{
		cout<<"derived square ="<<length*width<<endl;
		return length*width;
		}

};

int main()
{
	shape *s;
	square sq(4,5);
	s=&sq;
	s->get_area();
	return 0;
}
