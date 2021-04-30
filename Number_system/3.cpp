//write a c++ program to convert days into year ,week,days
#include<iostream>
int main()
{
	int number,x,year,week,day;
	
	std::cout<<"Enter the days "<<std::endl;
	std::cin>>number;
	
	x=number;
	year=0;
	week=0;
	day=0;
	while(x!=0)
	{
		if(x>=365)    //checking for years
		{
		      	x=x-365;
			year++;	
		}
		 else
		 { if(x>=7)     //checking for week
		     {
		     	week++;
		     	x=x-7;
		     }
		     else
		     {
		         day=x;  //checking for days
		         break;
		     }    
		 }    
		    
	}
	
	
	std::cout<<"Year "<<year<<"Week "<<week<<"Days "<<day<<std::endl;
	
	return 0;
}			     		
