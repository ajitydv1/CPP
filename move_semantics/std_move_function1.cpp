#include <iostream>
using namespace std;
int main()
{
	int a{1};
	cout<<"a=="<<a<<endl;

	auto b{std::move(a) };
	cout<<"b=="<<b<<endl;
	return 0;
}
