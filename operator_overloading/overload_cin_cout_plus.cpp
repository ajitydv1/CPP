#include <iostream>
using namespace std;

class Complex
{
	private:
		int real;
		int img;
	public:
		Complex()
		{
		   real=0,img=0;
		}

		friend istream & operator >>(istream &,Complex const &);
		friend ostream & operator <<(ostream &,Complex const &);

};

istream & operator >>(istream & in,Complex const & c1)
{
	in>>c1.real;
	in>>c1.img;
}

ostream & operator <<(ostream & in,Complex const & c1)
{
        in<<c1.real;
        in<<c1.img;
}

int main()
{
	Complex c;
	cin>>c;
	cout<<c;
}
