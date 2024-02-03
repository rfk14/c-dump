#include <iostream>
using namespace std;

int main()
{
 char c;
 int sum=0;
 cout<<"\nInput  the first char (to end give !):";
 cin>>c;
 
 while (c!='!')
 {
     if (isdigit(c))
     {
         if (c=='1')
         sum=sum+1;
         if (c=='2')
         sum=sum+2;
         if (c=='3')
         sum=sum+3;
         if (c=='4')
         sum=sum+4;
         if (c=='5')
         sum=sum+5;
         if (c=='6')
         sum=sum+6;
         if (c=='7')
         sum=sum+7;
         if (c=='8')
         sum=sum+8;
         if (c=='9')
         sum=sum+9;
     }
    cout<<"\nInput  the next char (to end give !):";
   cin>>c;
  }
  cout<<"\nthe sum of the digit characters:"<<sum;
    return 0;
}

