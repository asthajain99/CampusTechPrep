//Write a program for Strassen's matrix multiplication.
#include<iostream>
using namespace std;
int main()
{
	int a[2][2],b[2][2],c[2][2],s[7];
	cout<<"Enter values for first matrices:";
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		cin>>a[i][j];
	}
	cout<<"Enter values for second matrices:";
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		cin>>b[i][j];
	}
	s[0]=(a[0][0]+a[1][1])*(b[0][0]+b[1][1]);
	s[1]=(a[1][0]+a[1][1])*b[0][0];
	s[2]=a[0][0]*(b[0][1]-b[1][1]);
	s[3]=a[1][1]*(b[1][0]-b[0][0]);
	s[4]=(a[0][0]+a[0][1])*(b[1][1]);
	s[5]=(a[1][0]-a[0][0])*(b[0][0]+b[0][1]);
	s[6]=(a[0][1]-a[1][1])*(b[1][0]+b[1][1]);
	c[0][0]=s[0]+s[3]-s[4]+s[60];
	c[0][1]=s[2]+s[4];
	c[1][0]=s[1]+s[3];
	c[1][1]=s[0]+s[2]-s[1]+s[5];
	cout<<"OUTPUT ARRAY:\n";
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<c[i][j]<<" ";
		}
		cout<<"\n";
	}
}

//OUTPUT
//Enter values for first matrices:1 1 1 1
//Enter values for second matrices:1 1 1 1
//OUTPUT ARRAY:
//2 2
//2 2
//--------------------------------
//Process exited after 8.339 seconds with return value 0
//Press any key to continue . . .
