#include <iostream>
using namespace std;

int main()
{
	char op;
	int num1, num2;
	cout<<"Enter two numbers"<<endl;
	cin>>num1>>num2;
	cout<  <"Enter an operator"<<endl;
	cin>>op;
	
	if(op=='*'){
		cout<<num1*num2<<endl;
	}
	else if(op=='-'){
		cout<<num1-num2<<endl;
	}
	else if(op=='+'){
		cout<<num1+num2<<endl;
	}
	else if(op=='/'){
		if(num2 != 0){
			cout<<num1/num2<<endl;
		}else{
			cout<<"math error";
		}
		
		}
	
	}
	

