#include<iostream>
using namespace std;

class A
{
	private:
		int x,y,z;
	public:
		A()
		{
		  x=0;
		  y=0;
		  z=0;
		}
		A(int z)
		{
		 x=0;
		 y=0;
		 this->z=z;
		}

		void showdata()
		{
			cout<<x<<endl;
			cout<<y<<endl;
			cout<<z<<endl;
		}
};

int main()
{
	A a(3);
	a.showdata();
	//a(3);
	//a.showdata();

	return 0;
}
