#include <iostream>
using namespace std;

int process(int count)
{
	if(count <10)
		throw out_of_range(" count should greater than 10");
	return 0;
}

int main()
{
	try
	{
	process(5);
	}
	catch(out_of_range &ex)
	{
		cout<<ex.what()<<endl;
	}
}
