//Write a program to implement linear search using recursion.
#include<iostream>
using namespace std;
int main()
{
	int n,item,position;
	int linearsearch(int a[],int item,int index,int n);
	cout<<"Enter the number of elements:";
	cin>>n;
	int a[n];
	cout<<"Enter the elements:";
	for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"The elements are:\n";
	for(int i=0;i<n;i++)
        cout<<a[i]<<" ";    
    cout<<"\nEnter the element you want to search:";
	cin>>item;
	position=linearsearch(a,item,0,n);
	if(position!=0)
	    cout<<"Element found at:"<<position;
	else
	    cout<<"Element not found.";	
}
int linearsearch(int a[],int item,int index,int n)
{
	int position=0;
	if(index>=n)
		return 0;
    else if(a[index]==item)
	{
	    position=index+1;
	    return position;	
	}
	else 
		return linearsearch(a,item,index+1,n);
}

//OUTPUT
//Enter the number of elements:5
//Enter the elements:22 69 54 73 19
//The elements are:
//22 69 54 73 19
//Enter the element you want to search:73
//Element found at:4
//--------------------------------
//Process exited after 27.07 seconds with return value 0
//Press any key to continue . . .
