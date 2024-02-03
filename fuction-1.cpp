#include<iostream>
#include<cmath>
using namespace std;

int powerfunc(int base, int number)
{
	int power = number;
	int answer = pow(base, power);
	return answer;
}

int main()
{
	int p, n;
	cout << "Enter an number and power to be calculated"<<endl;
	cin >> n >> p;
	cout << "The answer is : " << powerfunc(n, p);
}
