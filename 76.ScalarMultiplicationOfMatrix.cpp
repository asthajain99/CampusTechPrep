//Write a program for scalar multiplication of matrix.
#include<iostream>
using namespace std;
int main()
{
	int r,c,A[5][5],i,j,num,B[5][5];
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
    cout<<"Enter the number you want to multiply the matrix with:";
    cin>>num;
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		B[i][j]=num*A[i][j];
		}
	}
	cout<<"The matrix after Scalar Multiplication is:\n";
    for(i=0;i<r;i++)
    {    
        for(j=0;j<c;j++)
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
//Enter the number you want to multiply the matrix with:5
//The matrix after Scalar Multiplication is:
//5  10
//15  20
//--------------------------------
//Process exited after 11.69 seconds with return value 0
//Press any key to continue . . .
