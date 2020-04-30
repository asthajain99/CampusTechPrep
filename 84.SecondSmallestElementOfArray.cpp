//Write a program to find out second smallest element of an unsorted array.
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
		if(a[i]<first)
		{
			second=first;
			first=a[i];
		}
		else if(a[i]>first && a[i]<second)
		    second=a[i];
	}	    
	cout<<"\nThe second smallest element is: "<<second;
	return 0;
}

//OUTPUT
//Enter the number of elements:5
//Enter the elements:22 11 99 77 55
//The elements are:
//22 11 99 77 55
//The second smallest element is: 22
//--------------------------------
//Process exited after 6.554 seconds with return value 0
//Press any key to continue . . .
