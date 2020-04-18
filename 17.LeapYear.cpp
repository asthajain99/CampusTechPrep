//Write a program to check the given year is leap year or not.
#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Enter the year:";
	cin>>year;
	if(year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
			{
				cout<<year<<" is a leap year.";
			}
			else
			    cout<<year<<" is not a leap year.";
		}
		else
		    cout<<year<<" is a leap year.";
	}
	else
	    cout<<year<<" is not a leap year.";
}

//OUTPUT
//Enter the year:2020
//2020 is a leap year.
//--------------------------------
//Process exited after 2.341 seconds with return value 0
//Press any key to continue . . .
