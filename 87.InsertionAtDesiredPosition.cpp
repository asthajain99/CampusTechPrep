//Write a program for insert an element at desired position in an array.
#include<iostream>
using namespace std;
int main()
{
	int i,n,a[n],item,pos;
	cout<<"Enter the number of elements:";
	cin>>n;
	cout<<"Enter the elements:";
	for(i=0;i<n;i++)
	    cin>>a[i];
	cout<<"The elements are:\n";
	for(i=0;i<n;i++)
	    cout<<a[i]<<" ";
	cout<<"\nEnter the element you want to insert:";
	cin>>item;
	cout<<"Enter the position:";
	cin>>pos;	
	pos=pos-1;
	if(pos>=0 && pos<=n)
	{
		for(i=n-1;i>=pos;i--)
		    a[i+1]=a[i];
		    a[pos]=item;
		    n++;
	}
	else	
	    cout<<"\n Invalid Position.";
	cout<<"The new array is:\n";
	for(i=0;i<n;i++)
	    cout<<a[i]<<" ";	    
	return 0;
}

//OUTPUT
//Enter the number of elements:4
//Enter the elements:21 34 65 78
//The elements are:
//21 34 65 78
//Enter the element you want to insert:90
//Enter the position:3
//The new array is:
//21 34 90 65 78 
//--------------------------------
//Process exited after 19.64 seconds with return value 0
//Press any key to continue . . .
