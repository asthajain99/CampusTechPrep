//Write a function to sort 1d integer array using Merge sort.
#include<iostream>
using namespace std;
#define max 10
class Array{
	public:
		int n,a[max];
		void getdata();
		void traverse();
		void mergesort(int,int);
		void merge(int,int,int);
		void callmerge(int,int);
};
void Array::getdata()
{
	int i;
	cout<<"Enter number of elements:";
	cin>>n;
	cout<<"Enter the elements:";
	for(i=0;i<n;i++)
	    cin>>a[i];
}
void Array::traverse()
{
	int i; 
    cout<<"The elements are:\n";
	for(int i=0;i<n;i++)
	    cout<<a[i]<<" ";
}
void Array::mergesort(int f,int l)
{
	if(f<l)
	{
		int m=(f+l)/2;
		mergesort(f,m);
		mergesort(m+1,l);
		merge(f,m,l);
	}
}
void Array::merge(int f,int m,int l)
{
	int n1=m-f+1;
	int n2=l-m;
	int L[n1+1],R[n2+1];
	for(int i=0;i<n1;i++)
	    L[i]=a[f+i];
	for(int j=0;j<n2;j++)
	    R[j]=a[m+1+j];
	L[n1]=10000;
	R[n2]=10000;
	int i=0,j=0;
	for(int k=f;k<=l;k++)
	{
		if(L[i]<=R[j])
		{
		    a[k]=L[i];
			i++;
		}
		else
		{
			a[k]=R[j];
			j++;
		}
	}
	
}
void Array::callmerge(int,int)
{
	mergesort(0,n-1);
	cout<<"\nElements after Merge Sort are:\n";
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
}
main()
{
	Array a;
	int n;
	a.getdata();
	a.traverse();
	a.callmerge(0,n);	
}

//OUTPUT
//Enter number of elements:5
//Enter the elements:22 11 99 55 33
//The elements are:
//22 11 99 55 33
//Elements after Merge Sort are:
//11 22 33 55 99
//--------------------------------
//Process exited after 6.591 seconds with return value 0
//Press any key to continue . . .
