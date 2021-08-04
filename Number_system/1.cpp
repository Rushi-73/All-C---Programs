//write a c++ program for finding power of any number x^y
#include<iostream>
int main()
{
   int i,num,p,power=1;
   std::cout<<"Enter a number"<<std::endl;
   std::cin>>num;
   std::cout<<"Enter a power of number"<<std::endl;
    std::cin>>p;
   /* for finding power of given number*/
   for(i=1;i<=p;i++)
   {
      power=power*num; //here we calculating power of x with respect to y
   }
   std::cout<<"Power of number is "<<power;  
   
   return 0; 
}   
