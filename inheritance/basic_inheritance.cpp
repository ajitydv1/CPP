#include <iostream>
using namespace std;

class animal
{
	public:
		void eating()
		{
			cout<<" animal is eating"<<endl;
		}

		void speaking()
		{
			cout<<"animal is speaking"<<endl;
		}

		void running()
		{
			cout<<" animal is running"<<endl;	
		}


};
class dog : public animal
{
};

int main()
{

	dog d;
	d.eating();
	d.speaking();
	d.running();
}
