//Write a program to implement linear search without using recursion.
#include<iostream>
using namespace std;
int main()
{
	int n,a[n],item,i;
	cout<<"Enter the number of elements:";
	cin>>n;
	cout<<"Enter the elements:";
	for(i=0;i<n;i++)
	    cin>>a[i];
	cout<<"The elements are:\n";
	for(i=0;i<n;i++)
	    cout<<a[i]<<" ";   
	cout<<"\nEnter the item to be found:";
	cin>>item;
	for(i=0;i<n;i++)
	{
	    if(a[i]==item)
	    {
	        cout<<"Item found at: "<<i+1<<" position.";
	        break;
	    }
    }
}

//OUTPUT
//Enter the number of elements:5
//Enter the elements:22 11 99 55 77
//The elements are:
//22 11 99 55 77
//Enter the item to be found:22
//Item found at: 1 position.
//--------------------------------
//Process exited after 10.9 seconds with return value 0
//Press any key to continue . . .
