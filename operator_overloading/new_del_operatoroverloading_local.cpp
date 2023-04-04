#include <iostream>
#include <stdlib.h>
using namespace std;

class student
{
  private:
	  string name;
	  int age;
  public:
	  student()
	  {
		  cout<<" constructor is called \n"<<endl;
	  }

	  student(string name ,int age)
	  {
		  this->name=name;
		  this->age=age;

	  }

	  void display()
	  {
		  cout<<"name="<<name<<"age="<<age<<endl;
	  }

	  void * operator new(size_t size)
	  {
		  cout<<" size to overload="<<size<<endl;

		  void *p=::operator new (size);

		  return p;
	  }

	  void operator delete(void *p)
	  {
		  free(p);
	  }
};

int main()
{
	student *p = new student("sandeep",24);
	p->display();

}
