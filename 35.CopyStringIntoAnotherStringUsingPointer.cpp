//Write a program to copy the string into another string using pointers.
#include<iostream>
using namespace std;
int main()
{
	char string1[20],string2[20];
    char *str1=string1;
    char *str2=string2; 
    cout<<"Enter the string:";
    cin>>string1;
    while(*(str2++)=*(str1++));
    cout<<"The string is: "<<string1;
    cout<<"\nCopied string is: "<<string2;
    return 0;
}

//OUTPUT
//Enter the string:astha
//The string is: astha
//Copied string is: astha
//--------------------------------
//Process exited after 2.516 seconds with return value 0
//Press any key to continue . . .
