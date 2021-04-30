#include<iostream>

class STATIC
{
	public:
	static const int val=10;
	static int val1;
	
	void nonstatic()
	{
		std::cout<<"It is non static function"<<std::endl;
	}
	
	static void Static()
	{
	        
		std::cout<<"It is static function"<<std::endl;
	
	}
};

  const int STATIC::val;          //we must have define static variable outside the class
  int STATIC::val1=20;
  
int main()
{

	STATIC s;
	
	s.nonstatic();
	s.Static();        //calling static method by object
	
	STATIC::Static();  //calling static method by classname
	
	std::cout<<"Value of static variable define outside the class is"<<STATIC::val1;
	return 0;
}		
