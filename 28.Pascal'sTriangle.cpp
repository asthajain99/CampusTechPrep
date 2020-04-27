//Write a function to generate Pascal's triangle.
#include<iostream>
using namespace std; 
int main()
{
	int i,j,k,n;
	int factorial(int x);
	cout<<"Enter the number of lines:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=1;j<=(n-i-1);j++) //space at starting of each row
			cout<<" ";
		for(k=0;k<=i;k++) //calculate each value in a row and print it
		    cout<<factorial(i)/(factorial(i-k)*factorial(k))<<" ";
		cout<<"\n";
	}
	return 0;
}
int factorial(int x)
{
	int i;
	int f=1;
	for(i=1;i<=x;i++)
		f=f*i;
	return f;
}

//OUTPUT
//Enter the number of lines:5
//    1
//   1 1
//  1 2 1
// 1 3 3 1
//1 4 6 4 1
//--------------------------------
//Process exited after 2.615 seconds with return value 0
//Press any key to continue . . .
