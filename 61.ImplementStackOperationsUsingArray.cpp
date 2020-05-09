//Write a program to implement stack operations using Arrays.
#include<iostream>
using namespace std;
#define max 10
class Stack
{
	public:
		int item,top=-1,a[max];
		void traverse();	
		void push();
		void pop();
};
void Stack::traverse()
{
	for(int i=0;i<=top;i++)
	    cout<<a[i]<<" ";
	cout<<"\n";    
}
void Stack::push()
{
	if(top==max)
        cout<<"Stack Overflow.";
    else
    {
        cout<<"Enter the item you want to be insert:";
        cin>>item;
        top++;
        a[top]=item;
    }
}
void Stack::pop()
{
    if(top==-1)
        cout<<"Stack Underflow.";
    else
        top--;
    cout<<"Item inserted last is popped.\n"; 
}
int main()
{
	Stack s;
	char i;
	do
	{
		cout<<"Which operation do you want to perform?\n";
			cout<<"1.Press 1 to PUSH\n";
			cout<<"2.Press 2 to POP\n";
			cout<<"3.Press 3 to TRAVERSE\n";
			int choice;
			cin>>choice;
			switch(choice)
			{
				case 1:
					s.push();
					break;
					
					case 2:
						s.pop();
						break;
						
						case 3:
							s.traverse();
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
//1.Press 1 to PUSH
//2.Press 2 to POP
//3.Press 3 to TRAVERSE
//1
//Enter the item you want to be insert:5
//Do you want to continue(y/n) ?y
//Which operation do you want to perform?
//1.Press 1 to PUSH
//2.Press 2 to POP
//3.Press 3 to TRAVERSE
//1
//Enter the item you want to be insert:1
//Do you want to continue(y/n) ?y
//Which operation do you want to perform?
//1.Press 1 to PUSH
//2.Press 2 to POP
//3.Press 3 to TRAVERSE
//2
//Item inserted last is popped.
//Do you want to continue(y/n) ?y
//Which operation do you want to perform?
//1.Press 1 to PUSH
//2.Press 2 to POP
//3.Press 3 to TRAVERSE
//3
//9 5
//Do you want to continue(y/n) ?n
//--------------------------------
//Process exited after 34.71 seconds with return value 0
//Press any key to continue . . .
