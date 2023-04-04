#include <iostream>
using namespace std;
class A
{
private:
	int a;
	int b;
public :
 	A(int aa=0,int bb=0)
	{
		a=aa;
		b=bb;
	}
	void print()
	{
	 cout<<a<<b<<endl;
	}

	A operator+(A const &obj)const
	{
	  A x;
	  x.a=a+obj.a;
	  x.b=b+obj.b;
	  return x;

	}


};

int main()
{
 A a(10,20);
 A b(5,15);
 a.print();
 b.print();

 A c;
 c=a+b;
c.print();

}

