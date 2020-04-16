//Write a function to interchange two integer values using call-by-value technique.
#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	void swap(int,int);
	cout<<"Enter the numbers:";
	cin>>num1;
	cin>>num2;
	cout<<"Before swapping:"<<"\n";
	cout<<"num1= "<<num1<<" num2= "<<num2;
	swap(num1,num2);
}
void swap(int num1,int num2)
{
	int num3;
	num3=num1;
	num1=num2;
	num2=num3;
	cout<<"\nAfter swapping:"<<"\n";
	cout<<"num1= "<<num1<<" num2= "<<num2;
}

//OUTPUT
//Enter the numbers:2 3
//Before swapping:
//num1= 2 num2= 3
//After swapping:
//num1= 3 num2= 2
//--------------------------------
//Process exited after 2.637 seconds with return value 0
//Press any key to continue . . .
