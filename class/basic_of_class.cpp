#include <iostream>
using namespace std;

class box
{
public:
	double length;
	double height;
	double bredth;
};
int main()
{
	box box1,box2;
	double vol=0;
	box1.length=5.0;
	box1.height=10.0;
	box1.bredth=20.0;
	vol=box1.length*box1.height*box1.bredth;
	cout<<vol<<endl;

}
