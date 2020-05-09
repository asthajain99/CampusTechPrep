//Write a program to implement Queue operations using Arrays.
#include<iostream>
using namespace std;
#define max 10
class Queue
{
	public:
		int item,a[max],r=0,f=0;
		void traverse();
		void Enqueue();
		void Dequeue();
};
void Queue::traverse()
{
	for(int i=f;i<=r-1;i++)
	    cout<<a[i]<<" ";
	cout<<"\n"; 
}
void Queue::Enqueue()
{
	if(r==max || f==max)
	    cout<<"Queue Overflow";
	else
	{
	    cout<<"Enter the item you want to insert in queue:";
		cin>>item;
		a[r]=item;	
	}
	r++;    
}
void Queue::Dequeue()
{
	if(f==r)
	    cout<<"Queue Underflow";
	else
	{
	    f++;
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
					q.Enqueue();
					break;
					
					case 2:
						q.Dequeue();
						break;
						
						case 3:
							q.traverse();
							break;
							
							default:
								cout<<"Invalid Input";
								break;
			}
			cout<<"Do you want to continue(y/n) ?";
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
//Enter the item you want to insert in queue:9
//Do you want to continue(y/n) ?y
//Which operation do you want to perform?
//1.Press 1 to ENQUEUE
//2.Press 2 to DEQUEUE
//3.Press 3 to TRAVERSE
//1
//Enter the item you want to insert in queue:5
//Do you want to continue(y/n) ?y
//Which operation do you want to perform?
//1.Press 1 to ENQUEUE
//2.Press 2 to DEQUEUE
//3.Press 3 to TRAVERSE
//1
//Enter the item you want to insert in queue:1
//Do you want to continue(y/n) ?y
//Which operation do you want to perform?
//1.Press 1 to ENQUEUE
//2.Press 2 to DEQUEUE
//3.Press 3 to TRAVERSE
//2
//Item inserted first is deleted.
//Do you want to continue(y/n) ?y
//Which operation do you want to perform?
//1.Press 1 to ENQUEUE
//2.Press 2 to DEQUEUE
//3.Press 3 to TRAVERSE
//3
//5 1
//Do you want to continue(y/n) ?n
//--------------------------------
//Process exited after 77.8 seconds with return value 0
//Press any key to continue . . .
