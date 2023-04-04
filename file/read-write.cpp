#include <iostream>
#include <fstream>
#include <string>

//using namespace std;

void write()
{
	std::ofstream out;
	out.open("test.txt");
	out<<" this is sandeep"<<std::endl;
	out.close();
}

void read()
{
	std::ifstream in;
	in.open("test.txt");
	std::string message;
	std::getline(in,message);
	in.close();
	std::cout<<message<<std::endl;
}

int main()
{
	write();
	read();
}
