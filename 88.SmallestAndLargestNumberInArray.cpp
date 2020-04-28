//Write a program to find largest and smallest number in an array.
#include<iostream>
using namespace std;
int main()
{
	int n,a[n],smallest,largest;
	cout<<"Enter number of elements:";
	cin>>n;
	cout<<"Enter the elements:";
	for (int i=0;i<n;i++)
	    cin>>a[i];
	cout<<"The elements are:";
	for (int i=0;i<n;i++)
	    cout<<a[i]<<" "; 
	smallest=a[0];
	largest=a[1];
	for(int i=0;i<n;i++)
	{
		if(smallest>a[i])
			smallest=a[i];
		if(largest<a[i])
			largest=a[i];
	}   
	cout<<"\nSmallest element is: "<<smallest<<"\n";
	cout<<"Largest element is: "<<largest;
	return 0;
}

//OUTPUT
//Enter number of elements:5
//Enter the elements:22 11 99 77 33
//The elements are:22 11 99 77 33
//Smallest element is: 11
//Largest element is: 99
//--------------------------------
//Process exited after 7.092 seconds with return value 0
//Press any key to continue . . .
