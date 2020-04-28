//Write a function which takes 1d integer array as an argument and return the maximum value.
#include<iostream>
using namespace std;
int main()
{
	int n,a[n];
	int MaximumValue(int a[],int n);
	cout<<"Enter the number of elements:";
	cin>>n;
	cout<<"Enter the elements:";
	for(int i=0;i<n;i++)
	    cin>>a[i];
	cout<<"The elements are:\n";
	for(int i=0;i<n;i++)
	    cout<<a[i]<<" ";
	cout<<"\nMaximum value is: "<<MaximumValue(a,n);	    
	return 0;
}
int MaximumValue(int a[],int n)
{
	int max;
	max=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		    max=a[i];
	}
	return max;
}

//OUTPUT
//Enter the number of elements:5
//Enter the elements:22 11 99 33 77
//The elements are:
//22 11 99 33 77
//Maximum value is: 99
//--------------------------------
//Process exited after 8.443 seconds with return value 0
//Press any key to continue . . .
