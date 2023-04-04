#include<iostream>
using namespace std;

class test
{
	private:
		int x;
		int y;
	public:
		test(int x=0,int y=0)
		{
		 this->x=x;
		 this->y=y;
		}

		test &setx(int a)
		{
		 x=a;
		 return *this;
		}

		test &sety(int b)
		{
			y=b;
			return *this;
		}
		void print()
		{
			cout<<"x="<<x<<"	"<<"y="<<y<<endl;
		}
};

int main()
{
	test t(5,10);
	t.print();
	t.setx(20).sety(30);
	t.print();
}
