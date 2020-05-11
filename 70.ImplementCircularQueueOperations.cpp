//Write a program to implement Circular Queue Operations.
#include<iostream>
using namespace std;
#define max 10
class Queue
{
	public:
		int item,a[max],n,rear,front;
		Queue()
		{
			rear=0,front=0,n=0;
		}
		void traverse();
		void enqueue();
		void dequeue();
};
void Queue::traverse()
{
	int j=front;
	cout<<"The elements in Queue are:\n";
	for(int i=0;i<n;i++)
	{
	    cout<<a[j]<<" ";
	    j=(j+1)%max;	
    }
	cout<<"\n";    
}
void Queue::enqueue()
{
	if(n==max)
	    cout<<"Queue Overflow";
	else
	{
		cout<<"Enter the item you want to insert in Queue:";
		cin>>item;
		a[rear]=item;
		rear=(rear+1)%max;
		n++;
	}    
}
void Queue::dequeue()
{
	if(n==0)
	    cout<<"Queue Underflow";
	else
	{
		item=a[front];
		front=(front+1)%max;
		n--;
		cout<<"Item inserted first is deleted.\n";
	}    
}
int main()
{
	Queue q;
	char i;
	do
	{
		cout<<"Which operation do you want to perform?\n";
		cout<<"1.Press 1 to ENQUEUE\n";
		cout<<"2.Press 2 to DEQUEUE\n";
		cout<<"3.Press 3 to TRAVERSE\n";
		int choice;
		cin>>choice;
		switch(choice)
		{
			case 1:
				q.enqueue();
				q.traverse();
				break;
				
				case 2:
					q.dequeue();
					q.traverse();
					break;
					
					case 3:
						q.traverse();
						break;
						
						default:
							cout<<"Invalid Input";
							break;
		}
		cout<<"Do you want to continue(y/n)? ";
		cin>>i;
	}
	while(i=='y');
	return 0;
}

//OUTPUT
//Which operation do you want to perform?
//1.Press 1 to ENQUEUE
//2.Press 2 to DEQUEUE
//3.Press 3 to TRAVERSE
//1
//Enter the item you want to insert in Queue:5
//The elements in Queue are:
//5
//Do you want to continue(y/n)? y
//Which operation do you want to perform?
//1.Press 1 to ENQUEUE
//2.Press 2 to DEQUEUE
//3.Press 3 to TRAVERSE
//1
//Enter the item you want to insert in Queue:9
//The elements in Queue are:
//5 9
//Do you want to continue(y/n)? y
//Which operation do you want to perform?
//1.Press 1 to ENQUEUE
//2.Press 2 to DEQUEUE
//3.Press 3 to TRAVERSE
//1
//Enter the item you want to insert in Queue:2
//The elements in Queue are:
//5 9 2
//Do you want to continue(y/n)? y
//Which operation do you want to perform?
//1.Press 1 to ENQUEUE
//2.Press 2 to DEQUEUE
//3.Press 3 to TRAVERSE
//2
//Item inserted first is deleted.
//The elements in Queue are:
//9 2
//Do you want to continue(y/n)? y
//Which operation do you want to perform?
//1.Press 1 to ENQUEUE
//2.Press 2 to DEQUEUE
//3.Press 3 to TRAVERSE
//3
//The elements in Queue are:
//9 2
//Do you want to continue(y/n)? n
//--------------------------------
//Process exited after 27.45 seconds with return value 0
//Press any key to continue . . .
