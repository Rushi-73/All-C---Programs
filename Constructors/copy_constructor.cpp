#include<iostream>

class demo
{

	public:
	
	int x,y,*p;
	
	demo()
	{
	}
	
	demo(int x,int y,int z)
	{
		this->x=x;
		this->y=y;
		this->p=(int*)malloc(sizeof(int));
		*(this->p)=z;
	}
	
	demo(demo &temp)
	{
	
		this->x=temp.x;
		this->y=temp.y;
		this->p=(int*)malloc(sizeof(int));
		*(this->p)=*(temp.p);
	}
};

int main()
{

	demo d(10,20,30);
	
	demo d1(d);		//copy constructor
	
	std::cout<<d.x<<" "<<d.y<<" "<<*(d.p)<<std::endl;
	
	std::cout<<d1.x<<" "<<d1.y<<" "<<*(d1.p)<<std::endl;
	
	(*(d.p))++;
	std::cout<<d.x<<" "<<d.y<<" "<<*(d.p)<<std::endl;
	
	std::cout<<d1.x<<" "<<d1.y<<" "<<*(d1.p)<<std::endl;
	
	demo d2=d;     
	(*(d.p))++; //accessing point variable and increasing value on address which store in pointer         
	std::cout<<d2.x<<" "<<d2.y<<" "<<*(d2.p)<<std::endl;
	
	demo d3;
	
	d3=d;             //synthesized copy constructor is called by overloading '=' operator
	std::cout<<d3.x<<" "<<d3.y<<" "<<*(d3.p)<<std::endl;
	
	return 0;
}	
			
	
