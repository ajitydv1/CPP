#include<iostream>
using namespace std;

void show(int x)
{
	cout<<" out"<<x<<endl;
}

void show(float x=10)
{
	cout<<x<<endl;
}

int main()
{
	float x=5;
	show(x);
}
