//Write a program to check the given number is prime number or not.
#include<iostream>
using namespace std;
int main()
{
	int i,number;
	int count=0;
	cout<<"Enter the number:";
	cin>>number;
	for(i=2;i<number;i++)
	{
		if(number%i==0)
		{
		    count=1;
		    break;
	    }
	}
	if(count==0)
	    cout<<number<<" is a prime number."; 
	if(count==1)
	    cout<<number<<" is not a prime number.";	   
}	

//OUTPUT
//Enter the number:71
//71 is a prime number.
//--------------------------------
//Process exited after 2.925 seconds with return value 0
//Press any key to continue . . .
