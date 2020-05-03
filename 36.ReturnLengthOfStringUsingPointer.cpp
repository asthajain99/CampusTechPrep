//Write a function which takes a string as an argument and return its length (using pointers).
#include<iostream>
using namespace std; 
int main() 
{
	char str[20];
	int string_length(char *string);
	cout<<"Enter the string:";
    cin>>str; 
    cout<<"The length of the entered string is:"<<string_length(str); 
    return 0; 
} 
int string_length(char *string) 
{  
    int length=0; 
    while(*string!='\0') 
	{ 
        length++; 
        string++; 
    } 
    return length; 
} 

//OUTPUT
//Enter the string:astha
//The length of the entered string is:5
//--------------------------------
//Process exited after 3.844 seconds with return value 0
//Press any key to continue . . .
