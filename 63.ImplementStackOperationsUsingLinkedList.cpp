//Write a program to implement stack operations using Linked List.
#include<iostream>
using namespace std;
struct StackNode
{
	int data;
	StackNode *nextnode;
}
*bottom=NULL,*top=NULL,*newnode,*temp;
int n=0;

void getnode()
{
	newnode=new StackNode;
    cout<<"Enter element:";
	cin>>newnode->data;
	newnode->nextnode=NULL;
}

void iemptystack()
{
	getnode();
	top=newnode;
	bottom=newnode;
	n++;
}

void push()
{
	getnode();
	top->nextnode=newnode;
	top=newnode;
	n++;
}

void pop()
{
	temp=bottom;
	while(temp->nextnode!=top)
	temp=temp->nextnode;
	temp->nextnode=NULL;
	top=temp;
	n--;
}

void traverse()
{
	cout<<"Element in the stack are:\n";
	temp=bottom;
	while(temp!=NULL)
	{
	    cout<<temp->data;
	    cout<<" ";
	    temp=temp->nextnode;	
	}
	cout<<"\n";
}

int main()
{
	if(top==NULL)
	{
		cout<<"Empty Stack\n";
		iemptystack();
	}
	int num;
	int k=1;
	while(k==1)
    {
        cout<<"1.Press 1 to perform push operation.\n";
	    cout<<"2.Press 2 to perform pop operation.\n";
	    cout<<"3.Press 3 to perform traverse.\n";
	    cout<<"Enter your choice:";
	    cin>>num;
        switch(num)
	    {
		    case 1:
			    push();
			    traverse();
		        break;
		       
		        case 2:
				    pop();
			        traverse();
		            break;
		
		            case 3:
					    traverse();
		                break;
		       
		                default:
		                    cout<<"Invalid Input";
		                    break;
	    }
	    cout<<"Enter 1 for continue"<<endl;
	    cin>>k;
	}
	return 0;
}

//OUTPUT
//Empty Stack
//Enter element:5
//1.Press 1 to perform push operation.
//2.Press 2 to perform pop operation.
//3.Press 3 to perform traverse.
//Enter your choice:1
//Enter element:9
//Element in the stack are:
//5 9
//Enter 1 for continue
//1
//1.Press 1 to perform push operation.
//2.Press 2 to perform pop operation.
//3.Press 3 to perform traverse.
//Enter your choice:2
//Element in the stack are:
//5
//Enter 1 for continue
//1
//1.Press 1 to perform push operation.
//2.Press 2 to perform pop operation.
//3.Press 3 to perform traverse.
//Enter your choice:3
//Element in the stack are:
//5
//Enter 1 for continue
//2
//--------------------------------
//Process exited after 21.57 seconds with return value 0
//Press any key to continue . . .
