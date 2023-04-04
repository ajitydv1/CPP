#include <iostream>
using namespace std;

class A
{
 private:
	 int a,b;
 public:
	 A(int aa=0,int bb=0)
	 {
		 a=aa;
		 b=bb;
	 }
	 void print()
	 {
	  cout<<"a="<<a<<"b="<<b<<endl;
	 }
	 A operator-(A const & obj)const
	 {
		 A x;
		 x.a=a-obj.a;
		 x.b=b-obj.b;
		 return x;
	 }
};

int main()
{
	A a(20,10);
	a.print();
	A b(10,5);
	b.print();
	A c;
	c=a-b;
	c.print();
}
