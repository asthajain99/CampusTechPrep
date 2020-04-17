//Write a program to print the pyramid of numbers.
#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"Enter number of rows:";
	cin>>n;
	for(i=1;i<=n;i++) //rows
	{
		for(j=1;j<=i;j++) //columns
		{
			cout<<j<<" ";
		}
		cout<<"\n";
	}
}

//OUTPUT
//Enter number of rows:5
//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5
//--------------------------------
//Process exited after 1.514 seconds with return value 0
//Press any key to continue . . .
