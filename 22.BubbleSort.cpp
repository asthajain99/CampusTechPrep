//Write a program to sort 1d integer array using Bubble sort.
#include<iostream>
using namespace std;
int main()
{
	int n,p,c,temp;
	cout<<"Enter the number of elements:";
	cin>>n;
	int a[n];
	cout<<"Enter the elements:";
	for(p=0;p<n;p++)
	    cin>>a[p];
	cout<<"The elements are:\n";
	for(p=0;p<n;p++)
	    cout<<a[p]<<" ";
	for(p=0;p<=n-2;p++)
    {
        for(c=0;c<=(n-p-2);c++)
        {
            if(a[c]>a[c+1])
            {
                temp=a[c];
                a[c]=a[c+1];
                a[c+1]=temp;
            }
        }
    }	
	cout<<"\nElements after Bubble Sort are:\n";
	for(p=0;p<n;p++)
	    cout<<a[p]<<" ";    
}

//OUTPUT
//Enter the number of elements:5
//Enter the elements:99 11 22 55 77
//The elements are:
//99 11 22 55 77
//Elements after Bubble Sort are:
//11 22 55 77 99
//--------------------------------
//Process exited after 13.67 seconds with return value 0
//Press any key to continue . . .
