//Write a program to check the given string is palindrome or not.
#include <iostream>
using namespace std;
int main()
{
    string str;
    int i,len;
    int count=0;
    cout<<"Enter a string:"; 
	cin>>str;
    len=str.length();
    for(i=0;i<len;i++)
	{
        if(str[i]!=str[len-i-1])
		{
            count=1;
        }
    }
    if(count==1) 
	{
        cout<<str<<" is not a palindrome string."; 
    }    
    else 
	{
        cout<<str<<" is a palindrome string."; 
    }
}

//OUTPUT
//Enter a string:jalaj
//jalaj is a palindrome string.
//--------------------------------
//Process exited after 3.808 seconds with return value 0
//Press any key to continue . . .
