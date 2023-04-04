#include <iostream>
using namespace std;

int main()
{
	int *arr=new int [5];
	for(int i=0;i<5;i++)
	{
		cout<<"enter array element "<<endl;
		cin>>arr[i];
	}

	    for(int i=0;i<5;i++)
        {
 //               cout<<"enter array element "<<endl;
                cout<<arr[i]<<"	";
        }
	    cout<<"\n";
	delete [] arr;

}
