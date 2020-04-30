//Write a program for delete an element at desired position in an array.
#include<iostream>
using namespace std;
int main()
{
	int i,n,a[n],pos;
	cout<<"Enter the number of elements:";
	cin>>n;
	cout<<"Enter the elements:";
	for(i=0;i<n;i++)
	    cin>>a[i];
	cout<<"The elements are:\n";
	for(i=0;i<n;i++)
	    cout<<a[i]<<" ";
	cout<<"\nEnter the position of the element you want to delete:";
	cin>>pos;	
	pos=pos-1;
	if(pos>=0 && pos<=n)
	{
		for(i=pos;i<n;i++)
			a[i]=a[i+1];
		n--;
	}
	else	
		cout<<"\nInvalid Position.";
	cout<<"The new array is:\n";
	for(i=0;i<n;i++)
	    cout<<a[i]<<" ";	    
	return 0;
}

//OUTPUT
//Enter the number of elements:4
//Enter the elements:98 87 76 65
//The elements are:
//98 87 76 65
//Enter the position of the element you want to delete:2
//The new array is:
//98 76 65
//--------------------------------
//Process exited after 10.63 seconds with return value 0
//Press any key to continue . . .
