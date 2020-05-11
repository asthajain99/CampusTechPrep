//Write a program to solve quadratic equation.
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c,determinant,root1,root2,real,img;
	cout<<"Enter values of coefficients for the Quadratic Equation:\n";
	cin>>a>>b>>c;
	cout<<"The Quadratic Equation is:\n";
	cout<<a<<"x^2 "<<b<<"x + "<<c;
	determinant=(b*b)-(4*a*c);
	if(determinant>0)
	{
		root1=(-b+sqrt(determinant))/(2*a);
		root2=(-b-sqrt(determinant))/(2*a);
		cout<<"\nThe roots are:\n";
		cout<<"ROOT1 = "<<root1<<"\n";
		cout<<"ROOT2 = "<<root2;
	}
	else if(determinant==0)
	{
		cout<<"\nRoots are real and same.\n";
		root1=(-b+sqrt(determinant))/(2*a);
		cout<<"ROOT1 = ROOT2 = "<<root1;
	}
	else
	{
		real=-b/(2*a);
		img=sqrt(-determinant)/(2*a);
		cout<<"\nRoots are complex and different.\n";
		cout<<"ROOT1 = "<<real<<" + "<<img<<"i\n";
        cout<<"ROOT2 = "<<real<<" - "<<img<<"i";
	}
	return 0;
}

//OUTPUT
//Enter values of coefficients for the Quadratic Equation:
//1 2 2
//The Quadratic Equation is:
//1x^2 2x + 2
//Roots are complex and different.
//ROOT1 = -1 + 1i
//ROOT2 = -1 - 1i
//--------------------------------
//Process exited after 2.508 seconds with return value 0
//Press any key to continue . . .
