#include<iostream>
using namespace std;
int main(){
	int i, a, b, c;
	cout<<"Enter an integer: ";
	cin>>i;
	a=i%10;
	b=i/100;
	c=i/10;
	if((a+b+c)%2==0){
		cout<<"interesting!!";
	}
	else if((a+b)%2==0){
		cout<<"interesting!!";}

	
	else if(a%2==0){
		cout<<"interesting!!";
	
}}
