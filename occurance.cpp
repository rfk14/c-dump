#include <iostream>
using namespace std;

int main()
{
  int n, num, max=-2147483648, key, count=0;

cout<<"\nInput the number of integer values:";
cin>>n;
cout<<"\nInput the key you search:";
cin>>key;
for (int i=1; i<=n; i++)
{
    cout<<"\nInput an integer number:";
    cin>>num;//its not storing a value....
    if (num==key)
        count++;
    }
cout<<"\nthe number of occur. of the given key "
    <<key<<"  is: "<<count<<endl;
    
    return 0;
}

