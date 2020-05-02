//Write a program to calculate nCr value using do-while loop.
#include<iostream>
using namespace std;
int main()
{
	int n,r;
	int factorial(int value);
	cout<<"Enter value of n:";
	cin>>n;
	cout<<"Enter value of r:";
	cin>>r;
	cout<<"C("<<n<<","<<r<<") = "<<factorial(n)/(factorial(r)*factorial(n-r));
	return 0;
}
int factorial(int value)
{
	int factorial=1,i=1;
	do
	{
		factorial=factorial*i;
		i++;
	}
	while(i<=value);
	return factorial;
}

//OUTPUT
//Enter value of n:5
//Enter value of r:2
//C(5,2) = 10
//--------------------------------
//Process exited after 2.828 seconds with return value 0
//Press any key to continue . . .
