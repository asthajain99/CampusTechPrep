//Define a structure with the name complex which contains real part and imaginary part. Write the functions to add, 
//subtract and multiply two complex numbers using returning as an complex number.
#include<iostream>
using namespace std;
struct Complex
{
    int real,img;	
}c1,c2,c3;
int main()
{
	int choice;
	int add(int a,int b);
    int subtract(int a,int b);
    struct Complex multiply(struct Complex c1,struct Complex c2);
	cout<<"Enter the real part of first number:";
	cin>>c1.real;
	cout<<"Enter the imaginary part of first number:";
	cin>>c1.img;
	cout<<"Enter the real part of second number:";
	cin>>c2.real;
	cout<<"Enter the imaginary part of second number:";
	cin>>c2.img;
	char i;
	do
	{
	cout<<"---COMPLEX NUMBER OPERATIONS---\n";
	cout<<"Press 1 for addition\n";
	cout<<"Press 2 for subtraction\n";
	cout<<"Press 3 for multiplication";
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"Addition : "<<add(c1.real,c2.real)<<" + "<<add(c1.img,c2.img)<<"i";
			break;
			
			case 2:
				cout<<"Subtraction : "<<subtract(c1.real,c2.real)<<" - "<<subtract(c1.img,c2.img)<<"i";
				break;
				
				case 3:
					cout<<"Multiplication : ";
					c3=multiply(c1,c2);
					cout<<c3.real<<" + "<<c3.img<<"i";
					break;
					
					default:
						cout<<"Invalid Input";
						break;
	}
	cout<<"\nDo you want to continue(y/n)?";
	cin>>i;
    }
    while(i=='y');
}
int add(int a,int b)
{
    return a+b;
}
int subtract(int a,int b)
{
    return a-b;
}
struct Complex multiply(struct Complex c1,struct Complex c2)
{
    struct Complex c4;
    c4.real = c1.real*c2.real - c1.img*c2.img;
    c4.img = c1.img*c2.real + c1.real*c2.img;
    return c4;
}

//OUTPUT
//Enter the real part of first number:3
//Enter the imaginary part of first number:2
//Enter the real part of second number:1
//Enter the imaginary part of second number:7
//---COMPLEX NUMBER OPERATIONS---
//Press 1 for addition
//Press 2 for subtraction
//Press 3 for multiplication1
//Addition : 4 + 9i
//Do you want to continue(y/n)?y
//---COMPLEX NUMBER OPERATIONS---
//Press 1 for addition
//Press 2 for subtraction
//Press 3 for multiplication2
//Subtraction : 2 - -5i
//Do you want to continue(y/n)?y
//---COMPLEX NUMBER OPERATIONS---
//Press 1 for addition
//Press 2 for subtraction
//Press 3 for multiplication3
//Multiplication : -11 + 23i
//Do you want to continue(y/n)?n
//--------------------------------
//Process exited after 35.68 seconds with return value 0
//Press any key to continue . . .
