#include<iostream>
//given code is about how to stop program from ubnormal execution using exception handling
int main()
{
	float a = 10;
	int  i;

	try
	{
		for (i = -5; i < 5; i++)
		{
			if (i == 0)
			{
				throw(5);
			}
			else
			{
				std::cout << (a / i) << std::endl;
			}
		}
	}
	catch (int a)
	{
		std::cout << "Exception occur";
	}
	return 0;
}
