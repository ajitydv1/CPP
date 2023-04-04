#include <iostream>
using namespace std;

class mtr_cm
{
 private:
	float meter;
 public:
	mtr_cm()
	{
	  meter=0.0f;
	}

	void get_data()
	{
	  cout<<" enter input in meter"<<endl;
	  cin>>meter;
	}

	void print()
	{
	 cout<<" in meter="<<meter<<endl;
	}

	operator int()const
	{
		return meter*100;
	}
};

int main()
{
	mtr_cm var;
	var.get_data();
	var.print();
	int x=var;
	cout<<" out in cm="<<x<<endl;
}
