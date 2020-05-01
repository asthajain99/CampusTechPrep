//Write a program to subtract two numbers without using subtraction operator.
#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	int subtract(int a,int b);
	cout<<"Enter the numbers:";
	cin>>num1>>num2;
	cout<<num1<<" - "<<num2<<" = "<<subtract(num1,num2);
	return 0; 
}
int subtract(int a,int b)
{
	int borrow;
	while(b!=0)
    {
        borrow=(~a)&b;
        a=a^b;
        b=borrow<<1;
    }
    return a;
}

//OUTPUT
//Enter the numbers:33 21
//33 - 21 = 12
//--------------------------------
//Process exited after 6.479 seconds with return value 0
//Press any key to continue . . .
