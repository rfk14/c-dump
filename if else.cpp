#include <iostream>
using namespace std;

int main()
{
	int age;
	bool std;
	
	cout<<"*************************TICKET BOOKING****************************"<<endl;
	
	cout<<"Enter your age"<<endl;
      cin>>age;
	
      if(age>=18){
		cout<<"Are you a student?"<<endl;
	     cin>>std;
		if(std==1){
		
		cout<<"pay 8$ please";}else{
		cout<<"pay 18$";
		}
	}
	else if(age<18){
		cout<<"pay 6$";
	}
	cout<<"\n\n\n**************************you booked your ticket************************";
}
