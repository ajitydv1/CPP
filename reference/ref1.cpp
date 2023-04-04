#include <iostream>
using namespace std;
int main()
{

	int i=10;
	int &ref=i;
// here value of i and ref will be same because refer to same address
	cout<<endl<<"i="<<i<<"	"<<"ref="<<ref<<endl;
	cout<<"add of i ="<<&i<<endl<<"add of ref="<<&ref<<endl;
	

// if we will change any one either i or ref it will reflect on both because
// ref and i refer to same address

	i=20;
	cout<<endl<<"i="<<i<<"  "<<"ref="<<ref<<endl;
        cout<<"add of i ="<<&i<<endl<<"add of ref="<<&ref<<endl;

// if we will change any one either i or ref it will reflect on both because
// ref and i refer to same address

        ref=30;
        cout<<endl<<"i="<<i<<"  "<<"ref="<<ref<<endl;
        cout<<"add of i ="<<&i<<endl<<"add of ref="<<&ref<<endl;
	
}
