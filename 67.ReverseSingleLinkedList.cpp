//Write a function to reverse the single linked list.
#include<iostream>
using namespace std;
struct node
{
	int data;
	node *nextnode;
};
node *newnode,*start=NULL,*end=NULL,*obj1,*obj2;
int n;

void getnode()
{
	newnode=new node;
	cin>>newnode->data;
	newnode->nextnode=NULL;
}

void iemptylist()
{
	cout<<"Enter the number of elements:";
	cin>>n;
	cout<<"Enter the elements:";
	getnode();
	start=newnode;
	end=newnode;
}

void getlist()
{
	iemptylist();
	for(int i=2;i<=n;i++)
	{
		getnode();
		end->nextnode=newnode;
		end=newnode;
	}
	cout<<"Before reversing:\n";
}

void reverse()
{
	cout<<"After reversing:\n";
	end=start;
	obj2=start;
	start=start->nextnode;
	for(int i=2;i<n;i++)
	{
		obj1=start;
		start=start->nextnode;
	    obj1->nextnode=obj2;
	    obj2=obj1;
	}
	start->nextnode=obj2;
	end->nextnode=NULL;
}

void traverse()
{
	obj1=start;
	while(obj1!=NULL)
	{
		cout<<obj1->data<<" ";
		obj1=obj1->nextnode;
	}
	cout<<"\n";
}

int main()
{
	getlist();
	traverse();
	reverse();
	traverse();
	return 0;
}

//OUTPUT
//Enter the number of elements:5
//Enter the elements:10 20 30 40 50
//Before reversing:
//10 20 30 40 50
//After reversing:
//50 40 30 20 10
//--------------------------------
//Process exited after 7.504 seconds with return value 0
//Press any key to continue . . .
