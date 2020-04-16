//Write a program finds the GCD of two given integers using recursion.
#include <iostream>
using namespace std;
int main()
{
   int n1,n2;
   int gcd(int n1,int n2);
   cout<<"Enter two numbers:";
   cin>>n1;
   cin>>n2;
   cout<<"GCD of "<<n1<<" and "<<n2<<" is:"<<gcd(n1,n2);
   return 0;
}

int gcd(int n1,int n2)
{
    if(n2!=0)
       return gcd(n2,n1%n2);
    else 
       return n1;
}

//OUTPUT
//Enter two numbers:8 12
//GCD of 8 and 12 is:4
//--------------------------------
//Process exited after 82.94 seconds with return value 0
//Press any key to continue . . .
