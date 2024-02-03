#include<iostream>
using namespace std;

int main()
{
	int s;
	cout<<"Enter seconds: ";
	cin>>s;
	int hr, min, sec;
	hr = s / 3600;
	sec = s % 60;
	s = s % 3600;
	min = s/60;
	cout<<"hour: "<<hr<<"  minnute: "<<min<<"  second: "<<sec;
	
}
