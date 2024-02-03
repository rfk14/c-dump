#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double  Weight, Height, BMI;
cout<<"___________________________finding BMI__________________________________"<<endl;
	cout<<"Enter your height And Weight: "<<endl;
	cin>>Weight>>Height;
	
     BMI=Weight / Height;
     cout<<"Weight\theight\tBMI\n"<<Weight<<"\t"<<Height<<"\t"<<BMI;
     
}
