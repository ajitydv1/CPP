#include<iostream>
#include<memory>
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
	shared_ptr <rect> p1(new rect(10,4));
	cout<<p1->area()<<endl;

	shared_ptr <rect>p2;
	p2=p1;
	cout<<p2->area()<<endl;

	cout<<p1->area()<<endl;

	cout<<p1.use_count()<<endl;
}
