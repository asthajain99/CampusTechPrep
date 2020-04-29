//Write a function to sort id integer array using Quick sort.
#include<iostream>
#define max 10
using namespace std;
class Sort
{
	public:
	    int n,a[max];
	    int getn() { return n; }
	    void getarray();
	    void traverse();
	    void outputarray();
	    void quicksort(int,int);
	    void swap(int &,int &);
	    int partition(int,int);
};
void Sort::getarray()
{
	cout<<"Enter the number of elements:";
	cin>>n;
	cout<<"Enter the elements:";
	for(int i=0;i<n;i++)  
	    cin>>a[i];
}
void Sort::traverse()
{
	cout<<"The elements are:\n";
	for(int i=0;i<n;i++)  
	    cout<<a[i]<<" ";
}
void Sort::quicksort(int f,int l)
{
	if(f<l)
	{
	    int pos;
	    pos=partition(f,l);
	    quicksort(f,pos-1);
	    quicksort(pos+1,l);
    }
}   
void Sort::swap(int &x,int&y)
{
    int temp=x; 
	x=y; 
	y=temp;
}
int Sort::partition(int f,int l)
{
	int pivot=a[l];
	int i=f-1;
	for(int j=f;j<l;j++)
	{
	    if(a[j]<=pivot) 
		    swap(a[++i],a[j]);
	}
	swap(a[++i],a[l]);
	return i;
}
void Sort::outputarray()
{
	cout<<"\nElements after Quick Sort are:\n";
	for(int i=0;i<n;i++)  
	    cout<<a[i]<<" ";	
}
int main()
{
Sort s;
s.getarray();
s.traverse();
int n=s.getn();
s.quicksort(0,n-1);
s.outputarray();
}

//OUTPUT
//Enter the number of elements:5
//Enter the elements:22 11 99 55 77
//The elements are:
//22 11 99 55 77
//Elements after Quick Sort are:
//11 22 55 77 99
//--------------------------------
//Process exited after 9.13 seconds with return value 0
//Press any key to continue . . .
