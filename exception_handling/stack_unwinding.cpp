#include <iostream>
#include <memory>

using namespace std;

class test
{
	public:
	test()
	{
		cout<<" accuire resources "<<endl;
	}

	~test()
	{
		cout<<" release resources "<<endl;
	}

};

void process(int count)
{
	test t;
	if(count <10)
		throw out_of_range(" count shoud be >10");
}

int main()
{
	try
	{
	process(5);
	}
	catch(exception &ex)
	{
		cout<<ex.what()<<endl;
	}
}
