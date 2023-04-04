#include <iostream>
#include <filesystem>
using namespace std;

int main()
{

using namespace	std filesystem;

	path p{R"(e:/temp/test.txt)"};
	
	if(p.has_filename())
	{
		cout<<p.filename()<<endl;
	}
}
