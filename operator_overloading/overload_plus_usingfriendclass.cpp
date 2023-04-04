#include<iostream>
using namespace std;

class Complex
{
	private:
		int real,img;

	public:
		Complex()
		{
		  real=0;
		  img=0;
		}
		Complex(int r,int i)
		{
		  real=r;
		  img=i;
		}

		void print()
		{
		 cout<<real<<"+j"<<img<<endl;
		}

		friend Complex operator+(Complex const &,Complex const &);
};

Complex operator +(Complex const &c1,Complex const &c2)
{
	return Complex(c1.real+c2.real,c1.img+c2.img);
}

int main()
{
	Complex c1(2,4),c2(4,8);
	c1.print();
	c2.print();

	Complex c3;
	c3=c1+c2;
	c3.print();
}
