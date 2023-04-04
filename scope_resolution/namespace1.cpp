#include <iostream>

namespace avg
{
	float cal(float x,float y)
	{
		return (x+y)/2;
	}
}

namespace sum
{
	float cal(float x,float y)
	{
		return x+y;
	}
}

int main()
{
	std::cout<<avg::cal(3.9f,8.5f);
	std::cout<<sum::cal(4.0,5.0);
	return 0;
}
