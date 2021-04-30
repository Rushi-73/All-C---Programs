//Wrte a c++ program to check valid email id using character array
#include<iostream>

//for chacking starting character of  email
int alphabet(char val)
{
	if((val>='a'&& val<='z') || (val>='A'&& val<='Z') || (val>='0' && val<='9'))
	{
	return 1;				
	}
	else
	{
	return 0;				
	}
}


//checking valid mail or not
int valid(char gmail[],int l)
{
	int a=-1,dot=-1,f=0,f1=0;
	int flag=alphabet(gmail[0]);
	if(flag==0)			
	{
	return 0;			
	}
	
	for(int i=0;i<=l;i++)
	{
		if(gmail[i]=='@')
		{
		a=i;
		f=1;
		break;
		}
		if(gmail[i]=='.' && gmail[i+1]=='.')		
		{
		   f1=1;
		}
		
	}
	if(f==0)
	return 0;
	
	if(a==-1 )			
	{
	return 0;
	}
	if(f1==1)
	return 0;
	
	
	if(a<dot)				
	{
	return 0;
	}

	if(gmail[l]=='.')			
	{
	return 0;
	}

	return 1;
}




int main()
{
	char email[200];
	int len=0;
	std::cout<<"Enter Your Email";
	std::cin>>email;
	for(int i=0;email[i]!='\0';i++)
	{
	  len++;
	}
	int flag=1; 
	flag=valid(email,len);
	if(flag==1)
	{
	std::cout<<email<<" Is Valid Emailid"<<std::endl;
	}
	else
	{
	std::cout<<email<<" Is Invalid Emailid"<<std::endl;
	}
}










