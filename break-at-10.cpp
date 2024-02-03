#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	int num;
	cout << "\nEnter how many numbers you want to enter :";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "\nJnumber:";
		cin >> num;

		if (num == 10) break;

		cout << num << " ";

	}
	
	cout << "\nyou entered 10 fuck you:" << num << endl;

	cin.get();
	return 0;
}

