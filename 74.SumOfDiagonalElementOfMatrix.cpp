//Write a program to find out sum of diagonal element of a matrix.
#include<iostream>
using namespace std;
int main()
{
	int r,c,a[5][5],i,j,sum=0;
	cout<<"Enter the number of rows and columns of matrix:";
	cin>>r>>c;
	cout<<"Enter the elements:";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		    cin>>a[i][j];
	}
	cout<<"The matrix is:\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		    cout<<a[i][j]<<" ";
		cout<<"\n";    
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			{
				sum=sum+a[i][j];
			}
		}
	}
	cout<<"Sum of diagonals of a matrix is: "<<sum;
	return 0;
}

//OUTPUT
//Enter the number of rows and columns of matrix:3 3
//Enter the elements:1 2 3 4 5 6 7 8 9
//The matrix is:
//1 2 3
//4 5 6
//7 8 9
//Sum of diagonals of a matrix is: 15
//--------------------------------
//Process exited after 14.28 seconds with return value 0
//Press any key to continue . . .
