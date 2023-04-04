#include<iostream>
using namespace std;

void print(int &x)
{
cout <<" l value int& "<<endl;
}

void print(const int& x)
{
 cout<<" l_value const int&"<<endl;
}

void print(int && x)
{
 cout<<" r_value bind to r value reference int &&"<<endl;
}
int main()
{
	int x=3;
	print(x);  // here l value is bind with l value 
	print(3);  // here passing r value but it will bind to l value because refrence is constant.


}
