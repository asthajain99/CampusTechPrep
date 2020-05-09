//Write a program to implement Queue operations using Linked List.
#include<iostream>
using namespace std;
struct QNode
{
	int data;
	QNode *nextnode;
}
*front=NULL,*rear=NULL,*newnode,*temp;
int n=0;

void getnode()
{
	newnode=new QNode;
    cout<<"Enter the element:";
	cin>>newnode->data;
	newnode->nextnode=NULL;
}

void iemptyqueue()
{
	getnode();
	front=newnode;
	rear=newnode;
	n++;
}

void enqueue()
{
	getnode();
	rear->nextnode=newnode;
	rear=newnode;
	n++;
}

void dequeue()
{
	if(front==rear)
	{
		front=NULL;
		rear=NULL;
		n--;
	}
	else
	{
		front=front->nextnode;
		n--;
	}
}

void traverse()
{
	cout<<"Element in list are:\n";
	temp=front;
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
	if(front==NULL)
	{
		cout<<"Empty Queue\n";
		iemptyqueue();
	}
	int num;
	int k=1;
	while(k==1)
    {
        cout<<"1.Press 1 to perform ENQUEUE operation.\n";
	    cout<<"2.Press 2 to perform DEQUEUE operation.\n";
	    cout<<"3.Press 3 to perform TRAVERSE operation.\n";
	    cout<<"Enter your choice:";
	    cin>>num;
        switch(num)
	    {
		    case 1:
			    enqueue();
			    traverse();
		        break;
		       
		        case 2:
				    dequeue();
			        traverse();
		            break;
		
		            case 3:
					    traverse();
		                break;
		       
		                default:
		                    cout<<"Invalid Input";
		                    break;
	    }
	    cout<<"Enter 1 to continue\n";
	    cin>>k;
	}
	return 0;
}

//OUTPUT
//Empty Queue
//Enter the element:5
//1.Press 1 to perform ENQUEUE operation.
//2.Press 2 to perform DEQUEUE operation.
//3.Press 3 to perform TRAVERSE operation.
//Enter your choice:1
//Enter the element:9
//Element in list are:
//5 9
//Enter 1 to continue
//1
//1.Press 1 to perform ENQUEUE operation.
//2.Press 2 to perform DEQUEUE operation.
//3.Press 3 to perform TRAVERSE operation.
//Enter your choice:2
//Element in list are:
//9
//Enter 1 to continue
//1
//1.Press 1 to perform ENQUEUE operation.
//2.Press 2 to perform DEQUEUE operation.
//3.Press 3 to perform TRAVERSE operation.
//Enter your choice:3
//Element in list are:
//9
//Enter 1 to continue
//2
//--------------------------------
//Process exited after 17.07 seconds with return value 0
//Press any key to continue . . .
