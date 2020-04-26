//Write a program to find the smallest and largest element in a two dimensional array.
#include<iostream>
using namespace std;
int main()
{
	int m,n,a[m][n],i,j,smallest,largest;
	cout<<"Enter number of rows and coloumns:";
	cin>>m;
	cin>>n;
	cout<<"Enter the elements:";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		    cin>>a[i][j];
	}
	cout<<"The elements are:\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		    cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	smallest=a[0][0];
	largest=a[0][0];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]>largest)
				largest=a[i][j];
			else
				if(a[i][j]<smallest)
					smallest=a[i][j];
		}
	}
	cout<<"\nSmallest element is: "<<smallest<<"\n";
	cout<<"Largest element is: "<<largest;
}

//OUTPUT
//Enter number of rows and coloumns:2 2
//Enter the elements:22 11
//99 44
//The elements are:
//22 11
//99 44
//Smallest element is: 11
//Largest element is: 99
//--------------------------------
//Process exited after 10.88 seconds with return value 0
//Press any key to continue . . .
