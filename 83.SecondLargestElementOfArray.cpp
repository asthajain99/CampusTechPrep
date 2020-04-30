//Write a program to find out second largest element of an unsorted array.
#include<iostream>
using namespace std;
int main()
{
	int first,second,n,a[n];
	cout<<"Enter the number of elements:";
	cin>>n;
	cout<<"Enter the elements:";
	for(int i=0;i<n;i++)
	    cin>>a[i];
	cout<<"The elements are:\n";
	for(int i=0;i<n;i++)
	    cout<<a[i]<<" ";
	first=a[0];
	second=a[1];    
	for(int i=0;i<n;i++)
	{
		if(a[i]>first)
		{
			second=first;
			first=a[i];
		}
		else if(a[i]<first && a[i]>second)
		    second=a[i];
	}
	cout<<"\nThe second largest element is: "<<second;
	return 0;		    
}

//OUTPUT
//Enter the number of elements:5
//Enter the elements:101 99 23 69 31
//The elements are:
//101 99 23 69 31
//The second largest element is: 99
//--------------------------------
//Process exited after 15.19 seconds with return value 0
//Press any key to continue . . .
