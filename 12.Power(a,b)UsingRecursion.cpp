//Write a program to find the power (a,b) using recursion.
#include<iostream>
using namespace std;
int main()
{
	int x,n;
	int power(int x,int n);
	cout<<"Enter the base:";
	cin>>x;
	cout<<"Enter the power:";
	cin>>n;
	cout<<x<<"^"<<n<<"="<<power(x,n);
}

int power(int x,int n)
{
	if(n==0)
	    return 1;
	else
	    return (x*power(x,n-1));   
}

//OUTPUT
//Enter the base:2
//Enter the power:5
//2^5=32
//--------------------------------
//Process exited after 8.259 seconds with return value 0
//Press any key to continue . . .
