//Simple Calculator
#include<iostream>
using namespace std;
int main(){
	int num1,num2,result;
	char op;
	
	cout<<"enter first number:";
	cin>>num1;
	
	cout<<"enter second number:";
	cin>>num2;
	
	cout<<"choose an operation(+,-,*,/):";
	cin>>op;
	
	switch (op){
		case'+':
			result=num1+num2;
			cout<<"result="<<result<<endl;
			break;
			case'-':
			result=num1-num2;
			cout<<"result="<<endl;
			break;
			case'*':
			result=num1*num2;
			cout<<"result="<<result<<endl;
			break;
			case'/':
			if(num2=0){
				result=num1/num2;
				cout<<"result="<<result<<endl;
			}	else{
				cout<<"error! Division by zero is not allowed."<<endl;
			}
			return 0;
		}
	}
