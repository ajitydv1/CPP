#include<iostream>
using namespace std;

class A
{
	private:
		int a,b;
	public:
		void get_data()
		{
		cout<<" get data of a"<<endl;
		cin>>a;
//		cout<<" get data of b"<<endl;
	//	cin>>b;
		}

		void print()
		{
		 cout<<"a="<<a<<endl;
//		 cout<<"b="<<b<<endl;
		}
		
/*		A operator=(A const &obj)
		{
		 A x;
		 x.a=obj.a;
		 return x;
		}*/
};
int main()
{
	A a;
	a.get_data();
	a.print();
//	A b;
//	b.get_data();
//	b.print();
	A c;
	c=a;
	cout<<" copying data ="<<endl;
	c.print();
}
