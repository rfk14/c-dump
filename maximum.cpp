
#include <iostream>
using namespace std;

int main()
{
  int n, num, max=-2147483648;

cout<<"\nInput the number of integer values:";
cin>>n;
for (int i=1; i<=n; i++)
{
    cout<<"\nInput an integer number:";
    cin>>num;
    if (num>max)
        max=num;
    }
cout<<"\nmaximum of the given numbers is:"
    <<max<<endl;
    return 0;
}


