//Write a function to convert a string into its opposite case.
#include<iostream>
using namespace std;
int main()
{
	int len;
	string str;
	void OppositeCase(string str);
	cout<<"Enter the string:";
	cin>>str;
	OppositeCase(str);
}
void OppositeCase(string str)
{
	int len;
	len=str.length();
	for(int i=0;i<len;i++)
	{
		if(isupper(str[i]))
            str[i]=tolower(str[i]);  
        else if(islower(str[i]))
            str[i]=toupper(str[i]);  
	}
	cout<<"The converted string is: "<<str;
}

//OUTPUT
//Enter the string:AsthaJain
//The converted string is: aSTHAjAIN
//--------------------------------
//Process exited after 7.478 seconds with return value 0
//Press any key to continue . . .
