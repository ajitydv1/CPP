#include<iostream>
using namespace std;

global operator+(int y,const global &t)
{

	global temp;
	temp=y+t.a;
	return temp;
}
class global
{
  private:
	  int x;
  public:
	  global()
	  {
	    x=0;
	  }

	  global(int a)
	  {
	    x=a;
	  }

	  void print()
	  {
		  cout<<"x="<<x<<endl;
	  }
};

int main()
{
	global g(5);
	g.print();
	global sum=1+g;
	sum.print();
}
