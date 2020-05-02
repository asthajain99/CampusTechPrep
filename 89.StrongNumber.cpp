//Write a program for Strong number.
#include<iostream>
using namespace std;
int main()
{
	int i,num,sum=0,factorial,temp,remainder;
	cout<<"Enter the number:";
	cin>>num;
	temp=num;
	while(num>0)
	{
		remainder=num%10;  //last digit
		factorial=1;
		for(i=1;i<=remainder;i++)
		    factorial=factorial*i;
		sum=sum+factorial;
	    num=num/10;  //remaining digits 
	}
	if(sum==temp)
	    cout<<temp<<" is a Strong Number.";
	else
	    cout<<temp<<" is not a Strong Number.";    
	return 0;
}

//OUTPUT
//Enter the number:145
//145 is a Strong Number.
//--------------------------------
//Process exited after 1.887 seconds with return value 0
//Press any key to continue . . .
