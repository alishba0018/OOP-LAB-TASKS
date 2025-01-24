#include <iostream>
#include <string>
using namespace std;

void add(int num1, int num2){
	cout<<"ans is: "<<num1-(-num2);
}
void sub(int num1, int num2){
	cout<<"ans is: "<<num1-num2;
}
void mult(int num1, int num2){
	cout<<"ans is: "<<num1*num2;
}
void div(int num1, int num2){
	cout<<"ans is: "<<num1/num2;
}

int main(){
	int num1;
	int num2;
	int choice;
	cout<<"Enter first number: "<<endl;
	cin>>num1;
	cout<<"Enter second number: "<<endl;
	cin>>num2;
	cout<<"Enter 1 for addition, 2 for subtraction, 3 for multiplication and 4 for division: "<<endl;
	cin>>choice;
	switch(choice){
		case 1:
			add(num1,num2);
			break;
		case 2:
			sub(num1,num2);
			break;	
		case 3:
			mult(num1,num2);
			break;
		case 4:
			div(num1,num2);
			break;		
		default:
		    break;	
	}
}
	
	
