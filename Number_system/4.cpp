//write a c++ program fibonacci number how  to find out if a given number is a fibonacci number or not 
#include<iostream>
int main()
{
	int a=1,b=1,c,value;
	std::cout<<"Enter the value you want to check wheather it is fibonacci number or not"<<std::endl;
	std::cin>>value;
	c=a+b;
	while(1)
	{
		if(c==value)
		{
			std::cout<<"Given number is fibonacci number"<<std::endl;
			break;
		}
		else
		{
			if(c>value)
			{
				std::cout<<"Given number is not fibonacci number"<<std::endl;
			 	break;
			}
			 a=b;
			 b=c;
			 c=a+b;
	        }
	}		 			



  return 0;
}  
