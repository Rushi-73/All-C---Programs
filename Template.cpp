#include<iostream>

template <class t1,class t2> //class template  declaration
class Templates
{
public:
	t1 a;
	t2 b;
	template <class T>  //function template declaration
	T add(T x, T y)
	{
		T z;
		z = x + y;
		return z;
	}
	t2 add(t1 x, t2 y)
	{
		t2 z;
		z = x + y;
		return z;
	}
};
int main()
{
	Templates<int,float> obj;  //creating objects
	std::cout<<obj.add(10, 20)<<std::endl; //calling function by passing integer parameter
	std::cout << obj.add(10, 20.0768f) << std::endl;//calling function by passing one integer and one float value
	return 0;
}
