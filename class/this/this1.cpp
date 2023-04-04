// this to be used when the local variable name is same as member's name
#include<iostream>
using namespace std;
class test
{
	private:
		int x;
	public:
		void set(int x)
		{
			this->x=x;
			
		}
		void print()
		{
			cout<<"x="<<x<<endl;
		}
};

int main()
{
	test t;
	int x=20;
	t.set(x);
	t.print();
}
