//A Fibonacci sequence is defined as follows:
//The first and second terms in the sequence are 0 and 1. Subsequent terms are found by adding the preceding two terms 
//in the sequence. Write a C program to generate the first n terms of the sequence.
#include<iostream>
using namespace std;
int main()
{
	int i,n,n1=0,n2=1,next;
	cout<<"Enter the number of terms:";
	cin>>n;
	cout<<"Fibonacci Series: ";
	cout<<n1<<" ";
	cout<<n2<<" ";
	for(i=2;i<n;i++)
	{
		next=n1+n2;
		cout<<next<<" ";
		n1=n2;
		n2=next;
	}
}

//OUTPUT
//Enter the number of terms:10
//Fibonacci Series: 0 1 1 2 3 5 8 13 21 34
//--------------------------------
//Process exited after 4.958 seconds with return value 0
//Press any key to continue . . .
