//Write a program to print the Fibonacci series using recursion.
#include<iostream>
using namespace std;
int main()
{
    int number,i=0;
    int fibonacci(int number);
    cout<<"Enter the number of terms:";
    cin>>number;
    cout<<"Fibonacci Series: ";
    while(i<number)
    {
        cout<<fibonacci(i)<<" ";
        i++;
    }
}

int fibonacci(int number)
{
    if((number==1)||(number==0))
    {
        return(number);
    }
    else
    {
        return(fibonacci(number-1)+fibonacci(number-2));
    }
}

//OUTPUT
//Enter the number of terms:10
//Fibonacci Series: 0 1 1 2 3 5 8 13 21 34
//--------------------------------
//Process exited after 5.143 seconds with return value 0
//Press any key to continue . . .
