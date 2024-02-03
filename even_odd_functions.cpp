#include<iostream>
using namespace std;

bool iseven(int number)
{
	return (number % 2 == 0);
}
int printres(int number)
{
	bool isNumberEven = iseven(number);
	if(iseven(isNumberEven))
	{
		cout<<number<<" Is odd";
	}else
	cout<<number<<" is even";
}
	
int main()
{
int numberTocheck = 10;
cout<<printres(numberTocheck);	
}
