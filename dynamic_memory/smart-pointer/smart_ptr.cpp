#include <iostream>
using namespace std;

class smart_ptr
{
	private :
		int *ptr;

	public:
		smart_ptr(int *p=nullptr)
		{
			ptr=p;
		}

		int & operator*()
		{
			return *ptr;
		}
};

int main()
{
	smart_ptr ptr(new(int));
	*ptr=20;
	cout<<*ptr<<endl;
}
