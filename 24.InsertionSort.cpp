//Write a function to sort 1d integer using Insertion sort.
#include<iostream>
using namespace std;
int main()
{
	int n,a[n],i;
	int InsertionSort(int a[],int n);
	cout<<"Enter number of elements:";
	cin>>n;
	cout<<"Enter the elements:";
	for(i=0;i<n;i++)
	    cin>>a[i];
	cout<<"The elements are:\n";
	for(i=0;i<n;i++)
	    cout<<a[i]<<" ";    
	InsertionSort(a,n);
	cout<<"\nElements after Selection Sort:\n";
	for(i=0;i<n;i++)
	    cout<<a[i]<<" ";    
}
int InsertionSort(int a[],int n)
{
	int j,temp,i;
	for(j=1;j<=n-1;j++)
	{
		temp=a[j];
		i=j-1;
		while(temp<a[i] && i>=0)
		{
			a[i+1]=a[i];
			i--;
		}
		a[i+1]=temp;
	}
	return 0;
}

//OUTPUT
//Enter number of elements:5
//Enter the elements:99 11 22 77 55
//The elements are:
//99 11 22 77 55
//Elements after Selection Sort:
//11 22 55 77 99
//--------------------------------
//Process exited after 12.11 seconds with return value 0
//Press any key to continue . . .
