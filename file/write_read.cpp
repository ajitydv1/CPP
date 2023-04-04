#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void write()
{
	ofstream out;
	out.open("test.txt");
	out<<" this is sandeep"<<endl;
	out.close();
}

void read()
{
	ifstream in;
	in.open("test.txt");
	string message;
	getline(in,message);
	in.close();
	cout<<message<<endl;
}

int main()
{
	write();
	read();
}
