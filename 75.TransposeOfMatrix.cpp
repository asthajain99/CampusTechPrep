//Write a program to find out transpose of a matrix.
#include<iostream>
using namespace std;
int main()
{
	int r,c,i,j,k;
	int A[5][5],B[5][5];
	cout<<"Enter number of rows and columns of matrix:";
	cin>>r;
	cin>>c;
	cout<<"Enter elements of matrix:";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		    cin>>A[i][j];
	}
	cout<<"The matrix is:\n";
    for(i=0;i<r;i++)
    {    
        for(j=0;j<c;j++)
        {
            cout<<A[i][j]<<"  ";
        }
        cout<<"\n";
    }
    for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		    B[j][i]=A[i][j];
	}
	cout<<"Transpose of the Matrix is:\n";
	for(int i=0;i<c;i++)
    {    
        for(int j=0;j<r;j++)
        {
            cout<<B[i][j]<<"  ";
        }
        cout<<"\n";
    }
	return 0;
}

//OUTPUT
//Enter number of rows and columns of matrix:2 2
//Enter elements of matrix:1 2 3 4
//The matrix is:
//1  2
//3  4
//Transpose of the Matrix is:
//1  3
//2  4
//--------------------------------
//Process exited after 7.752 seconds with return value 0
//Press any key to continue . . .
