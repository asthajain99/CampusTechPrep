//Write a program to subtract two numbers without using subtraction operator.
#include<iostream>
using namespace std;
int main()
{
	int num1,num2,subtraction;
	cout<<"Enter the numbers:";
	cin>>num1>>num2;
	subtraction=num1+(~num2)+1; // ~ is bitwise operator
	cout<<num1<<" - "<<num2<<" = "<<subtraction; 
}

//OUTPUT
//Enter the numbers:33 21
//33 - 21 = 12
//--------------------------------
//Process exited after 6.479 seconds with return value 0
//Press any key to continue . . .
