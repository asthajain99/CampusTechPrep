//Write a program to find out largest element of an array.
#include<iostream>
using namespace std;
int main()
{
	int n,a[n],largest;
	cout<<"Enter the number of elements:";
	cin>>n;
	cout<<"Enter the elements:";
	for(int i=0;i<n;i++)
	    cin>>a[i];
	cout<<"The elements are:";    
	for(int i=0;i<n;i++)
	    cout<<a[i]<<" "; 
	largest=a[0];
	for(int i=0;i<n;i++)
	{
		if(largest<a[i])
		    largest=a[i];
	}	   
	cout<<"\nLargest element of the array is: "<<largest;
	return 0;
}

//OUTPUT
//Enter the number of elements:5
//Enter the elements:22 11 99 55 33
//The elements are:22 11 99 55 33
//Largest element of the array is: 99
//--------------------------------
//Process exited after 14.13 seconds with return value 0
//Press any key to continue . . .
