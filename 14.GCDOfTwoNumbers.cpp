//Write a program to find the gcd of the given two numbers.
#include<iostream>
using namespace std;
int main()
{
    int num1,num2,gcd,i;
    cout<<"Enter the numbers:";
    cin>>num1;
    cin>>num2;
    for(i=1;i<=num1 && i<=num2;i++) 
    {
        if(num1%i==0 && num2%i==0) 
        {
            gcd=i;
        }
    }
    cout<<"GCD of "<<num1<<" and "<<num2<<" is:"<<gcd;
    return 0;
}

//OUTPUT
//Enter the numbers:8 12
//GCD of 8 and 12 is:4
//--------------------------------
//Process exited after 3.385 seconds with return value 0
//Press any key to continue . . .
