//Write a program to reverse the given number.
#include<iostream>
using namespace std;
int main()
{
	int number,remainder;
	int reverse=0;
	cout<<"Enter the number:";
	cin>>number;
	while(number!=0)
	{
		remainder=number%10;
		reverse=(reverse*10)+remainder;
		number=number/10;
	}
	cout<<"The reversed number is:"<<reverse;
}

//OUTPUT
//Enter the number:98765
//The reversed number is:56789
//--------------------------------
//Process exited after 4.258 seconds with return value 0
//Press any key to continue . . .
