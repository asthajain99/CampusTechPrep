//Write a program to check whether the two strings are identical or not.
#include<iostream>
using namespace std;
int main()
{
	string str1,str2;
	cout<<"Enter the first string:";
	cin>>str1;
	cout<<"Enter the second string:";
	cin>>str2;
	if(str1==str2)
	    cout<<str1<<" and "<<str2<<" are equal.";
	else
	    cout<<str1<<" and "<<str2<<" are not equal."; 
	return 0;
}

//OUTPUT
//Enter the first string:hello
//Enter the second string:hi
//hello and hi are not equal.
//--------------------------------
//Process exited after 4.247 seconds with return value 0
//Press any key to continue . . .
