//Write a program to print the grade of the student as follows:
//If m>=60 print grade as FIRST
//If m>=50 and m<60 print grade as SECOND
//If m>=40 and m<50 print grade as THIRD
//If m<40 and print grade as FAILED
#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"Enter the marks:";
	cin>>marks;
	if(marks>=60)
	    cout<<"GRADE: FIRST";
	if(marks>=50 && marks<60)
	    cout<<"GRADE: SECOND";
	if(marks>=40 && marks<50)
	    cout<<"GRADE: THIRD";
	if(marks<40)
	    cout<<"FAILED";		   
}

//OUTPUT
//Enter the marks:33
//FAILED
//--------------------------------
//Process exited after 1.755 seconds with return value 0
//Press any key to continue . . .
