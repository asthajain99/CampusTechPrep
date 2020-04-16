//Write a program to find the factorial of a given number using recursion.
#include<iostream>
using namespace std;
int main()
{
    int number;
    int factorial(int number);
    cout<<"Enter a number:";
    cin>>number;
    cout<<"Factorial of "<<number<<" is:"<<factorial(number);
}

int factorial(int number)
{
    if(number>1)
        return number*factorial(number-1);
    else
        return 1;
}

//OUTPUT
//Enter a number:5
//Factorial of 5 is:120
//--------------------------------
//Process exited after 5.223 seconds with return value 0
//Press any key to continue . . .
