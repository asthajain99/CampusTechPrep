//Write a program to perform Doubly Linked List Operation(create,insert,delete,traversing).
#include<iostream>
using namespace std;
struct Dnode
{
	Dnode *prev;
	int data;
	Dnode *next;
};
Dnode *newnode,*start=NULL,*end=NULL,*temp;
int n,pos;

void getnode()
{
	newnode=new Dnode;
	cout<<"Enter the element:";
	cin>>newnode->data;
	newnode->next=NULL;
	newnode->prev=NULL;
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
	newnode->next=start;
	start->prev=newnode;
	start=newnode;
	n++;
}

void insertatlast()
{
	getnode();
	end->next=newnode;
	newnode->prev=end;
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
		    temp=temp->next;
		newnode->next=temp->next;
        temp->next=newnode;
        newnode->prev=temp;
        temp->next->prev=newnode;
        n++;
	}
	else
	{
		if(pos<1 && pos>n+1)
		    cout<<"Invalid Position.";
	}
}

void deletefromfirst()
{
	start=start->next;
    start->prev=NULL;
    n--;
}

void deletefromlast()
{
	end=end->prev;
    end->next=NULL;
    n--;
}

void deletefromposition()
{
	cout<<"Enter the position to delete the element:";
	cin>>pos;
	if(pos>=1 && pos<=n+1)
	{
		temp=start;
		int i=1;
		while(i<=pos-2)
		{
			temp=temp->next;
			i++;
		}
		temp->next->prev=temp;
        temp->next=temp->next->next;
		n--;
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
        printf("Empty List");
    else
    {
        printf("Element in list are:\n");
        temp=start;
        while(temp!=NULL)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		cout<<"\n";
    }
}

int main()
{
	if(start==NULL)
	{
		cout<<"Empty List\n";
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
//Empty List
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
//Enter the position to insert the element:1
//Enter the element:4
//Element in list are:
//2 4 5 9
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
//4 5 9
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
//4 5
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
//Enter the position to delete the element:1
//Element in list are:
//4
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
//4
//Enter 1 to continue
//2
//--------------------------------
//Process exited after 34.49 seconds with return value 0
//Press any key to continue . . .
