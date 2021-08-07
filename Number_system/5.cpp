//write a c++ program to find the last occurence position  of the number in the given array
#include<iostream>

int main()
{
	int a[10],i,pos,occur,n,f=0;
	std::cout<<"Enter how many elements you want to enter in array"<<std::endl;
	std::cin>>n;
	
	if(n>10)
	{
		std::cout<<"Please enter size less than 10"<<std::endl;
	}
	else
	{
		std::cout<<"Enter the elements in array"<<std::endl;
		
		for(i=0;i<n;i++)
		{
			std::cin>>a[i];
		}
	}
	
	for(i=0;i<n;i++)
		{
			std::cout<<a[i]<<'\t';
		}
		std::cout<<std::endl;
		
	std::cout<<"Enter the number that you want to find last occurrence position"<<std::endl;
	std::cin>>occur;
		
		//for checking last occurence position  of the number in the given array		
		for(i=0;i<n;i++)
		{
			if(occur==a[i])
			{
				pos=i+1; //finding position of last occurence element
				f=1;
			}
			
		}
		
	if(f==0)
	std::cout<<"Number is not present in array"<<std::endl;
	else
	std::cout<<"Last occurrence position of "<<occur<<" is "<<pos<<std::endl;
	
	return 0;
}
