#include<iostream>

class CONST
{
	public:
	const int val=11;
	int val1=20;
	
	void  gun()
	{
		val++;        //val is constant so it is only read only so its give error
		val1++;
	}
	
	void run() const
	{
	
		val1++;        //val1 is in constant function so the function will only perform read only operation
	}
};

int main()
{
	CONST c; //creating object of class
	
	c.gun();
	c.run();
	
	const CONST c1;
	c1.gun();             //it will give error because it is non constant function have normal this pointer
	c1.run();
	
	return 0;
}	
			
