#include<iostream>
using namespace std;
class test
{
	public:
	void x;
}
int main()
{
	test t;
	cout<<" size of void ="<<(sizeof(t.x))<<endl;
	return 0;
}
