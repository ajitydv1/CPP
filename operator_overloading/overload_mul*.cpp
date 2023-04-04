#include<iostream>
using namespace std;

class A
{
private:
  int a,b;
public:
  A(int t=0,int k=0)
  {
    a=t;
    b=k;
  }
  
  void print()
  {
    cout<<"a="<<a<<"  "<<"b="<<b<<endl;
  }

  A operator*(A const & obj)
  {
    A x;
    x.a=a*obj.a;
    x.b=b*obj.b;
    return x;
  }
};

int main()
{
	A a(5,6);
	a.print();
	A b(4,5);
	b.print();
	A c;
	c=a*b;
	c.print();
}
