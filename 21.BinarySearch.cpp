//Write a program to implement Binary Search without using recursion.
#include<iostream>
using namespace std;
int main()
{
	int n,a[n],first,last,middle,item,i;
	cout<<"Enter the number of elements:";
	cin>>n;
	cout<<"Enter the elements in sorted order:";
	for(i=0;i<n;i++)
	    cin>>a[i];
	cout<<"The elements are:\n";
	for(i=0;i<n;i++)
	    cout<<a[i]<<" ";
	cout<<"\nEnter the element to be searched:";
	cin>>item;
	first=0;
	last=n-1;
	do
	{
		middle=(first+last)/2;
		if(a[middle]==item)
		{
		    cout<<item<<" found at "<<middle+1<<" position.";
		    break;
	    }
		else
		{
		    if(a[middle]>item)
			    last=middle-1;
			else
			    first=middle+1;		
		}    
	}
	while(first<=last);  
	if(first>last)
	    cout<<item<<" not found.";
}

//OUTPUT
//Enter the number of elements:5
//Enter the elements in sorted order:10 20 30 40 50
//The elements are:
//10 20 30 40 50
//Enter the element to be searched:20
//20 found at 2 position.
//--------------------------------
//Process exited after 11.66 seconds with return value 0
//Press any key to continue . . .
