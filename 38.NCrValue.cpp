//Write a program to find NCr value.
#include<iostream>
using namespace std;
int main()
{
	int n,r,result;
	int factorial(int value);
	cout<<"Enter the value of n:";
	cin>>n;
	cout<<"Enter the value of r:";
	cin>>r;
	cout<<"C("<<n<<","<<r<<") = "<<factorial(n)/(factorial(r)*factorial(n-r));
	return 0;
}
int factorial(int value)
{
	int factorial=1;
	for(int i=value;i>=1;i--)
        factorial=factorial*i;
    return factorial;
}

//OUTPUT
//Enter the value of n:5
//Enter the value of r:2
//C(5,2) = 10
//--------------------------------
//Process exited after 3.835 seconds with return value 0
//Press any key to continue . . .
