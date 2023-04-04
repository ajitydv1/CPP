#include <iostream>
using namespace std;
int main()
{
	int **arr;
	int r,c,i,j;
	cout<<" enter number of row "<<endl;
	cin>>r;
	cout<<" enter number of coloum "<<endl;
	cin>>c;

	arr=new  int*[r];
	for(i=0;i<r;i++)
	{
		arr[i]=new int[c];
		
	}

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"enter array element"<<endl;
			cin>>arr[i][j];
		}
	}

	for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                {
                 //       cout"enter array element"<<endl;
                        cout<<arr[i][j]<<" ";
                }

		cout<<endl;
        }


}
