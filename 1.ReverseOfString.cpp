//Write a program to find the reverse of a given string.
#include<iostream>
using namespace std;
int main()
{
	int i,len;
	string str;
	cout<<"Enter the string:";
	cin>>str;
	len=str.length();
	cout<<"The reverse of the given string is:";
	for(i=len;i>=0;i--)
	{
		cout<<str[i];
	}
}

//OUTPUT
//Enter the string:astha
//The reverse of the given string is: ahtsa
//--------------------------------
//Process exited after 4.477 seconds with return value 0
//Press any key to continue . . .
