//Write a program to find both the largest and smallest numbers of an array of integers.
#include<iostream>
using namespace std;
int main()
{
	int n,a[n];
	cout<<"Enter the number of elements:";
	cin>>n;
	//int a[n];
	cout<<"Enter the elements:";
	for(int i=0;i<n;i++)
	    cin>>a[i];
	cout<<"The elements are:\n";
	for(int i=0;i<n;i++)
	    cout<<a[i]<<" ";    
	int smallest,largest;
	smallest=a[0];
	largest=a[1];
	for(int i=0;i<n;i++)
	{
		if(largest<a[i])
		    largest=a[i];
		if(smallest>a[i])
		    smallest=a[i];
	}
	cout<<"\nSmallest element is: "<<smallest<<"\n";
	cout<<"Largest element is: "<<largest;
}

//OUTPUT
//Enter the number of elements:5
//Enter the elements:22 11 99 55 33
//The elements are:
//22 11 99 55 33
//Smallest element is: 11
//Largest element is: 99
//--------------------------------
//Process exited after 7.085 seconds with return value 0
//Press any key to continue . . .
