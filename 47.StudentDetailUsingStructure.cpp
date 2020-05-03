//Define a structure with the name student which contains sno, sname, marks. Write a program to read students information 
//and print the details of the students whose marks greater than or equal to average marks of the students.
#include<iostream>
using namespace std;
struct Student
{
	int sno;
	char sname[30];
	float marks;
};
int main()
{
	int n,i;
	float sum=0,avg;
	cout<<"Enter total number of students:";
	cin>>n;
	struct Student s[n];
	cout<<"Enter serialno, name and marks of student:";
	for(i=0;i<n;i++)
	{
		cin>>s[i].sno>>s[i].sname>>s[i].marks;
		sum=sum+s[i].marks;
	}
	avg=sum/n;
	cout<<"Average marks : "<<avg<<"\n";
	cout<<"Details of the students whose marks are above average are:\n";
	cout<<"Sno.\tName\tMarks"<<"\n";
	for(int i=0;i<n;i++)
	{
	if(s[i].marks>=avg)
	    cout<<s[i].sno<<"\t"<<s[i].sname<<"\t"<<s[i].marks<<endl;
	}
	return 0;
}

//OUTPUT
//Enter total number of students:5
//Enter serialno, name and marks of student:1 a 12
//2 b 23
//3 c 34
//4 d 45
//5 e 56
//Average marks : 34
//Details of the students whose marks are above average are:
//Sno.    Name    Marks
//3       c       34
//4       d       45
//5       e       56
//--------------------------------
//Process exited after 35.31 seconds with return value 0
//Press any key to continue . . .
