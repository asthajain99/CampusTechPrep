//Write a program to sort the characters in a given string.
#include<iostream>
using namespace std;
int main()
{
	string str;
	char temp;
	int i,j;
	cout<<"Enter the string:";
	cin>>str;
	cout<<"String before sorting is: "<<str;
	for(i=0;i<str.length();i++)
	{
		for(j=i+1;j<str.length();j++)
		{
			if(str[i]>str[j])
			{
				temp=str[i];
				str[i]=str[j];
				str[j]=temp;
			}
		}
	}
	cout<<"\nString after sorting is: "<<str;
	return 0;	
}

//OUTPUT
//Enter the string:astha
//String before sorting is: astha
//String after sorting is: aahst
//--------------------------------
//Process exited after 3.512 seconds with return value 0
//Press any key to continue . . .
