//Write a program to perform Singly Linked List Operations(create,insert,delete,traversing).
#include<iostream>
using namespace std;
struct node
{
	int data;
	node *nextnode;
};
node *newnode,*start=NULL,*end=NULL,*temp;
int pos,n;

void getnode()
{
	newnode=new node;
	cout<<"Enter the element:";
	cin>>newnode->data;
	newnode->nextnode=NULL;
}

void iemptylist()
{
	getnode();
	start=newnode;
	end=newnode;
	n++;
}

void insertatfirst()
{
	getnode();
	newnode->nextnode=start;
	start=newnode;
	n++;
}

void insertatlast()
{
	getnode();
	end->nextnode=newnode;
	end=newnode;
	n++;
}

void insertatposition()
{
	cout<<"Enter the position to insert the element:";
	cin>>pos;
	if(pos>=1 && pos<=n+1)
	{
		getnode();
		temp=start;
		for(int i=0;i<=pos-2;i++)
		    temp=temp->nextnode;
		newnode->nextnode=temp->nextnode;
		temp->nextnode=newnode;
		n++;    
	}
	else
	{
		if(pos<1 && pos>n+1)
		    cout<<"Invalid Position.";
	}
}

void traverse()
{
	if(start==NULL)
	    cout<<"Empty List";
	else
	{
		cout<<"Element in list are:\n";
		temp=start;
		while(temp!=NULL)
		{
			cout<<temp->data<<" ";
			temp=temp->nextnode;
		}
		cout<<"\n";
	}    
}

void deletefromfirst()
{
	start=start->nextnode;
	n--;
}

void deletefromlast()
{
	temp=start;
	while(temp->nextnode!=end)
	    temp=temp->nextnode;
	temp->nextnode=NULL;
	end=temp;
	n--;    
}

void deletefromposition()
{
	cout<<"Enter the position to delete the element:";
	cin>>pos;
	if(pos>=1 && pos<=n)
	{
		temp=start;
		for(int i=1;i<=pos-2;i++)
		    temp=temp->nextnode;
		temp->nextnode=temp->nextnode->nextnode;
		n--;    
	}
	else
	{
		if(pos<1 && pos>n)
		    cout<<"Invalid Position";
	}
}

int main()
{
	if(start==NULL)
	{
		cout<<"Empty list\n";
		iemptylist();
	}
	int num;
	int k=1;
	while(k==1)
    {
        cout<<"1.Press 1 to INSERT AT FIRST POSITION.\n";
	    cout<<"2.Press 2 to INSERT AT LAST POSITION.\n";
	    cout<<"3.Press 3 to INSERT AT ANY POSITION.\n";
	    cout<<"4.Press 4 to DELETE AT FIRST POSITION.\n";
	    cout<<"5.Press 5 to DELETE AT LAST POSITION.\n";
	    cout<<"6.Press 6 to DELETE AT ANY POSITION.\n";
	    cout<<"7.Press 7 to perform TRAVERSE OPERATION.\n";
	    cout<<"Enter your choice:";
	    cin>>num;
        switch(num)
	    {
		    case 1:
			    insertatfirst();
			    traverse();
		        break;
		       
		        case 2:
				    insertatlast();
			        traverse();
		            break;
		
		            case 3:
					    insertatposition();
					    traverse();
		                break;
		                
		                case 4:
		                	deletefromfirst();
		                	traverse();
		                	break;
		                	
		                	case 5:
		                		deletefromlast();
		                		traverse();
		                		break;
		                		
		                		case 6:
		                			deletefromposition();
		                			traverse();
		                			break;
		                			
		                			case 7:
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
//Empty list
//Enter the element:5
//1.Press 1 to INSERT AT FIRST POSITION.
//2.Press 2 to INSERT AT LAST POSITION.
//3.Press 3 to INSERT AT ANY POSITION.
//4.Press 4 to DELETE AT FIRST POSITION.
//5.Press 5 to DELETE AT LAST POSITION.
//6.Press 6 to DELETE AT ANY POSITION.
//7.Press 7 to perform TRAVERSE OPERATION.
//Enter your choice:1
//Enter the element:2
//Element in list are:
//2 5
//Enter 1 to continue
//1
//1.Press 1 to INSERT AT FIRST POSITION.
//2.Press 2 to INSERT AT LAST POSITION.
//3.Press 3 to INSERT AT ANY POSITION.
//4.Press 4 to DELETE AT FIRST POSITION.
//5.Press 5 to DELETE AT LAST POSITION.
//6.Press 6 to DELETE AT ANY POSITION.
//7.Press 7 to perform TRAVERSE OPERATION.
//Enter your choice:2
//Enter the element:9
//Element in list are:
//2 5 9
//Enter 1 to continue
//1
//1.Press 1 to INSERT AT FIRST POSITION.
//2.Press 2 to INSERT AT LAST POSITION.
//3.Press 3 to INSERT AT ANY POSITION.
//4.Press 4 to DELETE AT FIRST POSITION.
//5.Press 5 to DELETE AT LAST POSITION.
//6.Press 6 to DELETE AT ANY POSITION.
//7.Press 7 to perform TRAVERSE OPERATION.
//Enter your choice:3
//Enter the position to insert the element:2
//Enter the element:4
//Element in list are:
//2 5 4 9
//Enter 1 to continue
//1
//1.Press 1 to INSERT AT FIRST POSITION.
//2.Press 2 to INSERT AT LAST POSITION.
//3.Press 3 to INSERT AT ANY POSITION.
//4.Press 4 to DELETE AT FIRST POSITION.
//5.Press 5 to DELETE AT LAST POSITION.
//6.Press 6 to DELETE AT ANY POSITION.
//7.Press 7 to perform TRAVERSE OPERATION.
//Enter your choice:4
//Element in list are:
//5 4 9
//Enter 1 to continue
//1
//1.Press 1 to INSERT AT FIRST POSITION.
//2.Press 2 to INSERT AT LAST POSITION.
//3.Press 3 to INSERT AT ANY POSITION.
//4.Press 4 to DELETE AT FIRST POSITION.
//5.Press 5 to DELETE AT LAST POSITION.
//6.Press 6 to DELETE AT ANY POSITION.
//7.Press 7 to perform TRAVERSE OPERATION.
//Enter your choice:5
//Element in list are:
//5 4
//Enter 1 to continue
//1
//1.Press 1 to INSERT AT FIRST POSITION.
//2.Press 2 to INSERT AT LAST POSITION.
//3.Press 3 to INSERT AT ANY POSITION.
//4.Press 4 to DELETE AT FIRST POSITION.
//5.Press 5 to DELETE AT LAST POSITION.
//6.Press 6 to DELETE AT ANY POSITION.
//7.Press 7 to perform TRAVERSE OPERATION.
//Enter your choice:6
//Enter the position to delete the element:2
//Element in list are:
//5
//Enter 1 to continue
//1
//1.Press 1 to INSERT AT FIRST POSITION.
//2.Press 2 to INSERT AT LAST POSITION.
//3.Press 3 to INSERT AT ANY POSITION.
//4.Press 4 to DELETE AT FIRST POSITION.
//5.Press 5 to DELETE AT LAST POSITION.
//6.Press 6 to DELETE AT ANY POSITION.
//7.Press 7 to perform TRAVERSE OPERATION.
//Enter your choice:7
//Element in list are:
//5
//Enter 1 to continue
//2
//--------------------------------
//Process exited after 45.46 seconds with return value 0
//Press any key to continue . . .
