//Write a program to implement binary search using recursion.
#include <iostream>
using namespace std;
int main() 
{ 
    int item,i,n,first,last;
    int BinarySearch (int a[],int item,int first,int last);
    cout<<"Enter the number of elements:";
    cin>>n;
    int a[n];
    cout<<"Enter the sorted elements:";
    for(i=0;i<n;i++) 
	{
        cin>>a[i];
    }
    cout<<"The elements are:\n";
    for(i=0;i<n;i++) 
	{
        cout<<a[i]<<" ";
    }
    cout<<"\nEnter the element to be searched:";
    cin>>item;
    first=0;
    last=n-1;
    BinarySearch(a,item,first,last);
    return 0;
}
int BinarySearch(int a[],int item,int first,int last)
{
    int middle;
    if(first>last)
	{
        cout<<item<<" not found";
        return 0;
    }
    else 
	{
        middle=(first+last)/2;
        if(a[middle]==item)
		{
            cout<<item<<" found at "<<middle+1<< " position.";
            return 0;
        } 
		else if(item>a[middle]) 
		{
            BinarySearch (a,item,middle+1,last);
        }
        else if(item<a[middle]) 
		{
            BinarySearch (a,item,first, middle-1);
        }
    }
}

//OUTPUT
//Enter the number of elements:5
//Enter the sorted elements:10 20 30 40 50
//The elements are:
//10 20 30 40 50
//Enter the element to be searched:40
//40 found at 4 position.
//--------------------------------
//Process exited after 13.81 seconds with return value 0
//Press any key to continue . . .
