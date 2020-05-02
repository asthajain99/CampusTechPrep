//Write a program for Perfect number.
#include<iostream>
using namespace std;
int main()
{
	int num,sum=0,i=1;
	cout<<"Enter the number:";
	cin>>num;
	while(i<num)
	{
		if(num%i==0)
			sum=sum+i;
		i++;
	}
	if(sum==num)
	    cout<<num<<" is a Perfect Number.";
	else
	    cout<<num<<" is not a Perfect Number.";
	return 0;	    
}

//OUTPUT
//Enter the number:6
//6 is a Perfect Number.
//--------------------------------
//Process exited after 3.668 seconds with return value 0
//Press any key to continue . . .
