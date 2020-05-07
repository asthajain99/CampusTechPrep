//Write a program to compute the monthly pay of 100 employees using each employee's name, basic-pay. The DA is computed 
//as 52% of the basic pay. Gross-salary (Basic-pay+DA). Print the employees name and gross salary.
#include<iostream>
using namespace std;
struct Employee
{
		char empname[20];
		float basicpay,da;
};
int main()
{
	int i,n;
	struct Employee e[100];
	cout<<"Enter number of employees:";
	cin>>n;
	cout<<"Enter employees name and basic pay:\n";
	for(i=1;i<=n;i++)
	{
		cout<<"Enter details of "<<i<<" employee:";
	    cin>>e[i].empname;
		cin>>e[i].basicpay;
	    e[i].da=e[i].basicpay*0.52;
    }
	cout<<"Employee's Name:\t"<<"Gross Salary:\n";
	for(i=1;i<=n;i++)
	{
	    cout<<e[i].empname<<"\t\t\t"<<e[i].basicpay+e[i].da<<"\n";
    }
	return 0;
}

//OUTPUT
//Enter number of employees:5
//Enter employees name and basic pay:
//Enter details of 1 employee:astha 15000
//Enter details of 2 employee:ruchi 17000
//Enter details of 3 employee:sajal 21000
//Enter details of 4 employee:anjali 23000
//Enter details of 5 employee:anjali 25000
//Employee's Name:        Gross Salary:
//astha                   22800
//ruchi                   25840
//sajal                   31920
//anjali                  34960
//anjali                  38000
//--------------------------------
//Process exited after 34.74 seconds with return value 0
//Press any key to continue . . .
