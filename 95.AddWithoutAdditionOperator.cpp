//Write a program to add two numbers without using addition operator.
#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	int add(int a,int b);
	cout<<"Enter the numbers:";
	cin>>num1>>num2;
	cout<<num1<<" + "<<num2<<" = "<<add(num1,num2); 
}
int add(int a,int b)
{
    int sum,carry;
    if(b==0)
        return a;
    else
    {
        sum = a^b; // add without carrying
        carry = (a&b) << 1; // carry, but don’t add
    }
    return add(sum,carry); // recursion
}

//OUTPUT
//Enter the numbers:45 30
//45 + 30 = 75
//--------------------------------
//Process exited after 13.56 seconds with return value 0
//Press any key to continue . . .
