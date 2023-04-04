#include <iostream>
#include <memory>
using namespace std;

class rect
{
	private:
		int bre,len;
	public:
		rect()
		{
		  bre=len=0;
		}

		rect(int b,int l)
		{
		  bre=b;
		  len=l;
		}

		int area()
		{
		 return bre*len;
		}
};

int main()
{	
//	rect r1(10,5);
	unique_ptr<rect> p1 (new rect(10,10));//(new rect(10,5));
	cout<<p1->area()<<endl;

	unique_ptr<rect> p2;
	p2=move(p1);

	cout<<p2->area()<<endl;
}
