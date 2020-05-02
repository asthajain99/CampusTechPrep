//Write a program for Floyd's triangle.
#include<iostream>
using namespace std;
int main()
{
	int i,j,num=1,rows;
	cout<<"Enter number of rows:";
	cin>>rows;
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
		    cout<<num<<" ";
		    num++;
	    }
	cout<<"\n";    
	}
	return 0;
}

//OUTPUT
//Enter number of rows:7
//1
//2 3
//4 5 6
//7 8 9 10
//11 12 13 14 15
//16 17 18 19 20 21
//22 23 24 25 26 27 28
//--------------------------------
//Process exited after 1.992 seconds with return value 0
//Press any key to continue . . .
