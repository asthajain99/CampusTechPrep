//Write a program to find the factorial of a given number.
#include<iostream>
using namespace std;
int main()
{
	int i,number,factorial=1;
	cout<<"Enter the number:";
	cin>>number;
	for(i=number;i>=1;i--)
	{
		factorial=factorial*i;
	}
	cout<<"The factorial of "<<number<<" is:"<<factorial;
}

//OUTPUT
//Enter the number:6
//The factorial of 6 is:720
//--------------------------------
//Process exited after 3.196 seconds with return value 0
//Press any key to continue . . .
