#include <iostream>
using namespace std;
int a =10;
int main()
{
	int a=15;
	cout<<" local a="<<a<<"	"<<"global a="<<::a<<endl;
	::a=20;
	 cout<<" local a="<<a<<" "<<"global a="<<::a<<endl;

}
