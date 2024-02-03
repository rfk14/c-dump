#include<iostream>
using namespace std;
int Max(int a, int b, int c) {
	int max;
	if (a > b)
		if (a > c)max = a;
		else
			max = c;
	if (b > c)
		if (b > a)max = b;
		else
			max = c;
	
	return max;

}
int main() 
{
	int a, b, c;
	cout << "Enter 3 numbers: " << endl;
	cin >> a >> b >> c;
	int max = Max(a, b, c);
	cout << "Maximum of 3 numbers (" << a << " " << b << " " << c << ") is "<<max;
}
