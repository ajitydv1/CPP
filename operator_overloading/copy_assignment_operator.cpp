#include <iostream>
using namespace std;

class test
{
	private:
		int x,y;
	public:
		test()
		{
		  x=0,y=0;	
		}
		test(int a, int b)
		{
		  x=a,y=b;
		}
		test(test  const & t)
		{
			cout<<"copy constructor called"<<endl;
			x=t.x;
			y=t.y;
		}

		test & operator=(test const &t)
		{
		 cout<<" assignment operator called"<<endl;
		// return *this;
		x=t.x;
		y=t.y;
		}

		void print()
		{
			cout<<"x="<<x<<"\t"<<"y="<<y<<endl;
		}
};

int main()
{
	test t1(10,20);
	t1.print();
	test t2(t1); // copy constructor 
	t2.print();
	test t3;
	t3=t2;
	t3.print();
}
