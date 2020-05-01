//Write a program to check whether the given number is an Armstrong number or not.
#include<iostream>
using namespace std;
int main()
{
    int num,f,rem,sum=0,temp,a=0;
    int power(int c,int d);
    cout<<"Enter the number:";
    cin>>num;
    temp=num;
    while(temp!=0)
    {
        temp=temp/10;
        a++;
    }
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+power(rem,a);
        temp=temp/10;
    }
    if(sum==num )
        cout<<num<<" is an Armstrong number.";
    else
        cout<<num<<" is not an Armstrong number.";
}
int power(int c, int d)
{
    int pow=1;
    int i=1;
    while(i<=d)
    {
      pow=pow*c;
      i++;
    }
    return pow;
}

//OUTPUT
//Enter the number:1634
//1634 is an Armstrong number.
//--------------------------------
//Process exited after 2.946 seconds with return value 0
//Press any key to continue . . .
