//Write a program to check the given matrix is symmetric or not.
#include<iostream>
using namespace std;
int main()
{
	int A[5][5],B[5][5],i,j,r,c;
	cout<<"Enter the number of rows and columns of matrix:";
	cin>>r>>c;
	cout<<"Enter the elements:";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		    cin>>A[i][j];
	}
	cout<<"The matrix is:\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		    cout<<A[i][j]<<" ";
		cout<<"\n";    
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		    B[j][i]=A[i][j];
	}
	cout<<"The transpose of the matrix is:\n";
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		    cout<<B[i][j]<<" ";
		cout<<"\n";    
	}
	if(A[5][5]==B[5][5])
	    cout<<"The matrix is symmetric.";
	else
	    cout<<"The matrix is not symmetric.";    
	return 0;    
}

//OUTPUT
//Enter the number of rows and columns of matrix:3 3
//Enter the elements:1 7 3 7 4 -5 3 -5 6
//The matrix is:
//1 7 3
//7 4 -5
//3 -5 6
//The transpose of the matrix is:
//1 7 3
//7 4 -5
//3 -5 6
//The matrix is symmetric.
//--------------------------------
//Process exited after 36.16 seconds with return value 0
//Press any key to continue . . .
