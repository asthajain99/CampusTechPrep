//Write a function to sort 1d integer array using Selection sort.
#include<iostream>
using namespace std;
int main()
{
	int n,a[n],i;
	int SelectionSort(int a[],int n);
	cout<<"Enter the number of elements:";
	cin>>n;
	cout<<"Enter the elements:";
	for(i=0;i<n;i++)
	    cin>>a[i];
	cout<<"The elements are:\n";
	for(i=0;i<n;i++)
	    cout<<a[i]<<" "; 
	SelectionSort(a,n);
	cout<<"\nElements after Selection Sort:\n";
	for(i=0;i<n;i++)
	    cout<<a[i]<<" "; 	   
}
int SelectionSort(int a[],int n)
{
	int i,spos,pos,j,temp;
	for(i=0;i<n-1;i++)
	{
		spos=a[i];
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(spos>a[j])
			{
			spos=a[j];
			pos=j;
		    }
		}
		    temp=a[i];
            a[i]=a[pos];
            a[pos]=temp;
	}
}

//OUTPUT
//Enter the number of elements:5
//Enter the elements:99 11 22 55 77
//The elements are:
//99 11 22 55 77
//Elements after Selection Sort:
//11 22 55 77 99
//--------------------------------
//Process exited after 9.44 seconds with return value 0
//Press any key to continue . . .
