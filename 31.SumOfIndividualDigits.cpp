//Write a program to find the sum of individual digits of a positive integer.
#include<iostream>
using namespace std;
int main()
{
	int num,sum=0;
	cout<<"Enter the number";
	cin>>num;
	while(num!=0)
	{
		sum=sum+num%10;
		num=num/10;
	}
	cout<<"The sum of individual digits is: "<<sum;
}

//OUTPUT
//Enter the number221199
//The sum of individual digits is: 24
//--------------------------------
//Process exited after 4.754 seconds with return value 0
//Press any key to continue . . .
