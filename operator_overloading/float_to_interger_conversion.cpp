#include<iostream>
using namespace std;

class convert_float
{
	private:
		float a,b;
	public:
		convert_float()
		{
		 a=0,b=0;
		}
		convert_float(float x,float y)
		{
		  a=x;
		  b=y;
		}

		void print()
		{
		  cout<<"a="<<a<<"\t"<<"b="<<b<<endl;
		}

		operator int()const
		 {
		   return (int)a/(int)b;
		 }
};

int main()
{
	convert_float obj(10.4,5.4);
	obj.print();
	int x=obj;
	cout<<"out="<<x<<endl;
}
