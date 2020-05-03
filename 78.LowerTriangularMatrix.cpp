//Write a program to print lower triangular matrix.
#include<iostream>
using namespace std;
int main()
{
	int i,j,r,c;
	cout<<"Enter the number of rows and columns:";
	cin>>r>>c;
	int a[r][c];
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
			if(i<j)
			    a[i][j]=0;
		}
	}
	cout<<"The lower triangle of the matrix is:\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		    cout<<a[i][j]<<" ";
		cout<<"\n";    
	}
	return 0;
}

//OUTPUT
//Enter the number of rows and columns:3 3
//Enter the elements:1 2 3 4 5 6 7 8 9
//The matrix is:
//1 2 3
//4 5 6
//7 8 9
//The lower triangle of the matrix is:
//1 0 0
//4 5 0
//7 8 9
//--------------------------------
//Process exited after 8.388 seconds with return value 0
//Press any key to continue . . .
