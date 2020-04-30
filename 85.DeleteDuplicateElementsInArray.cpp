//Write a program which deletes the duplicate element of an array.
#include<iostream>
using namespace std;
int main()
{
    int n,a[n],i,j,k;
    cout<<"Enter the number of elements:";
    cin>>n;
    cout<<"Enter the elements:";
    for(i=0;i<n;i++)
        cin>>a[i];    
    for(i=0;i<n;i++)
		for(j=i+1;j<n;)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<n-1;k++)
					a[k]=a[k+1];	
				n--;
			}
			else
				j++;
		}
    cout<<"Array after repeated elements deletion:\n";
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}

//OUTPUT
//Enter the number of elements:5
//Enter the elements:2 1 6 9 2
//Array after repeated elements deletion:
//2 1 6 9
//--------------------------------
//Process exited after 7.863 seconds with return value 0
//Press any key to continue . . .
