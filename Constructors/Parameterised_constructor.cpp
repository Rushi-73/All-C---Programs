#include<iostream>

class hospital
{

	public:
		int patientNo,NoofBeds;
		
		hospital():patientNo(1000),NoofBeds(900)     //constructor list
		{}           
		
		
		hospital(int patientNo,int NoofBeds)
		{
			this->patientNo=patientNo;
			this->NoofBeds=NoofBeds;
		}	
};

int main()
{

	hospital A;      //passing parameter to a constructor
	
	std::cout<<"Number of Patients in A :"<<A.patientNo<<std::endl;
	std::cout<<"Number of beds avilable in A :"<<A.NoofBeds<<std::endl;
	
	hospital B(1500,700);	    //passing parameter to a constructor
	
	std::cout<<"Number of Patients in B :"<<B.patientNo<<std::endl;
	std::cout<<"Number of beds avilable in B :"<<B.NoofBeds<<std::endl;
		
	return 0;
}				

