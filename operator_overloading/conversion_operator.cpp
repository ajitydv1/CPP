#include <iostream>
using namespace std;

class fraction
{
	private:
		int dec;
		int frac;
	public:
		fraction()
		{
		  dec=0;
		  frac=0.0f;
		}

		fraction(int d,int f)
		{
		  dec=d;
		  frac=f;
		}

		void print()
		{
		cout<<dec<<"\t"<<frac<<endl;

		}

		operator float()const
		{
			return (float)dec/(float)frac;
		}
};

int main()
{
	fraction f(10,8);
	f.print();
	float x=f;
	cout<<" val="<<f<<endl;

}
