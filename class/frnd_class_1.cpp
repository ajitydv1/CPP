#include <iostream>
using namespace std;

class A
{
	private:
		int a;
	public:
		void member_func()
		{
			a=10;
		}

	friend class B;


};
class B
{
	private :
		int b;
	public:
		void disp(member_func& x)
		{
			cout<<x.a<<endl;
		}
};

int main()
{
	A a;
	B b;
	b.disp(a);

}
