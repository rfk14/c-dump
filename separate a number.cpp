#include <iostream>
using namespace std;
int main()
{
	int num = 356, d1, d2, d3;
cout<<"_____________________________separating number__________________________________"<<endl;
	cout<<"Enter a number: "<<endl;
	cin>>num;
	d1=356/100;
	d2= (356/10)%10;
     d3=356%10;
     cout<<"The sum is: "<<d1+d2+d3<<endl;
}
