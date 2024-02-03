#include <iostream>
using namespace std;

int main()
{
   string dest, weather;
   
   cout<<"Enter your Destination: ";
   cin>>dest;
   cout<<"Enter your weather: ";
   cin>>weather;
if (dest == "beach" && weather=="sunny"){cout<<"wear a sunscreen"<<endl;
}else if(dest == "mountain" && weather == "snow"){cout<<"put on a jacket"<<endl;
}else if (dest == "hill" && weather=="rainy"){cout<<"Get an umberalla"<<endl;
}

}
