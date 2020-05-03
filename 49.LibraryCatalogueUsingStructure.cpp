//Write a program using structure to create a library catalogue with the following fields; Access number, author's name, 
//title of the book, year of publication, publisher's name, price.
#include<iostream>
using namespace std;
struct Library
{
    int accessno,yearofpublication,price;
	char authorname[30],titleofbook[10],publishername[20];	
};
int main()
{
	int choice,n,i;
	char y;
	cout<<"Enter the number of books you want to add:";
	cin>>n;
	struct Library a[n];
	do
	{
	    cout<<"Press 1 to add book information\n";
	    cout<<"Press 2 to display book information\n";
	    cin>>choice;
	    switch(choice)
	    {
		    case 1:
		    	for(i=0;i<n;i++)
		    	{
		    		cout<<"Enter access number:";
		    		cin>>a[i].accessno;
		    		cout<<"Enter author's name:";
		    		cin>>a[i].authorname;
		    		cout<<"Enter title of the book:";
		    		cin>>a[i].titleofbook;
		    		cout<<"Enter year of publication:";
		    		cin>>a[i].yearofpublication;
		    		cout<<"Enter publisher's name:";
		    		cin>>a[i].publishername;
		    		cout<<"Enter price:";
		    		cin>>a[i].price;
		    		cout<<"Book Information entered successfully.";
				}
				break;
				
				case 2:
					cout<<"The book information is:\n";
					for(i=0;i<n;i++)
					{
						cout<<"Access Number : "<<a[i].accessno<<"\n";
						cout<<"Author's Name : "<<a[i].authorname<<"\n";
						cout<<"Title of the Book : "<<a[i].titleofbook<<"\n";
						cout<<"Year of Publication : "<<a[i].yearofpublication<<"\n";
						cout<<"Publisher's Name : "<<a[i].publishername<<"\n";
						cout<<"Price : "<<a[i].price;
					}
					break;
					
					default:
						cout<<"Invalid Input";
						break;
	    }
	    cout<<"\nDo you want to continue(y/n)?";
	    cin>>y;
    }
    while(y=='y');
	return 0;
}

//OUTPUT
//Enter the number of books you want to add:1
//Press 1 to add book information
//Press 2 to display book information
//1
//Enter access number:12
//Enter author's name:abc
//Enter title of the book:TheShining
//Enter year of publication:2012
//Enter publisher's name:xyz
//Enter price:1200
//Book Information entered successfully.
//Do you want to continue(y/n)?y
//Press 1 to add book information
//Press 2 to display book information
//2
//The book information is:
//Access Number : 12
//Author's Name : abc
//Title of the Book : TheShining
//Year of Publication : 2012
//Publisher's Name : xyz
//Price : 1200
//Do you want to continue(y/n)?n
//--------------------------------
//Process exited after 34.1 seconds with return value 0
//Press any key to continue . . .
