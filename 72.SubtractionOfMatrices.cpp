//Write a program for subtraction of two matrices.
#include<iostream>
using namespace std;
int main()
{
	int r,c,i,j,k;
    int A[5][5],B[5][5],sum[5][5];
    cout<<"Enter number of rows and columns of matrices:";
    cin>>r;
	cin>>c;
	cout<<"Enter elements of matrix A:";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            cin>>A[i][j];
    }
    cout<<"Enter elements of matrix B:";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            cin>>B[i][j];
	}
	for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            sum[i][j]=A[i][j]-B[i][j];	
    cout<<"Subtraction of matrices\n";
    for(i=0;i<r;i++)
    {    
        for(j=0;j<c;j++)
            cout<<sum[i][j]<<"  ";
        cout<<"\n";
    }        
	return 0;
}

//OUTPUT
//Enter number of rows and columns of matrices:2 2
//Enter elements of matrix A:1 1 1 1
//Enter elements of matrix B:2 2 2 2
//Subtraction of matrices
//-1  -1
//-1  -1
//--------------------------------
//Process exited after 10.54 seconds with return value 0
//Press any key to continue . . .
