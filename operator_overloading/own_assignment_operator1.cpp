#include <iostream>
using namespace std;

class test
{
  private:
	  int *ptr;
  public:
	  test(int i=0)
	  {
		ptr=new int(i);
	  }

	  void set_data(int i)
	  {
		*ptr=i;
	  }

	  void print()
	  {
	    cout<<"*ptr="<<*ptr<<endl;
	  }

	  test & operator=(test const& t)
	  {
		  if(this!=&t)
			  *ptr=*(t.ptr);
		  return *this;
	  }

};
/*
test & test::operator=(test const &t)
{
	if(this!=&t)
	{
	 *ptr=*(t.ptr);
	}
	return *this;
}
*/

int main()
{
	test t(5);
	test t2;
	t2=t;
	t.set_data(10);
	t2.print();
}
