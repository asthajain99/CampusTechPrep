//Write a program to swap two values without using temporary variable.
#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"Enter two numbers:";
	cin>>num1;
	cin>>num2;
	cout<<"Before Swapping:\n";
	cout<<"num1="<<num1<<" num2="<<num2;
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	cout<<"\nAfter Swapping:\n";
	cout<<"num1="<<num1<<" num2="<<num2;
}

//OUTPUT
//Enter two numbers:10 22
//Before Swapping:
//num1=10 num2=22
//After Swapping:
//num1=22 num2=10
//--------------------------------
//Process exited after 4.331 seconds with return value 0
//Press any key to continue . . .
