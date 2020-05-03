//Write a program to convert decimal number to octal number.
#include<iostream>
using namespace std;
int main()
{
	int decimal,reminder,temp,i=1,j,octal[100];
	cout<<"Enter a decimal number:";
	cin>>decimal;
    temp=decimal;
    while(temp!=0)
    {
        octal[i++]=temp%8;
        temp=temp/8;
    }	
    cout<<"The octal number of "<<decimal<<" is: ";
    for(j=i-1;j>0;j--)
        cout<<octal[j];
	return 0;	
}

//OUTPUT
//Enter a decimal number:210
//The octal number of 210 is: 322
//--------------------------------
//Process exited after 2.202 seconds with return value 0
//Press any key to continue . . .

//**********OR**********

//Write a program to convert decimal number to octal number.
//#include<iostream>
//using namespace std;
//int main()
//{
//	int decimal,octal=0,remainder,reverse=0;
//	cout<<"Enter the decimal number:";
//	cin>>decimal;
//	while(decimal!=0)
//	{
//		remainder=decimal%8;
//		octal=(octal*10)+remainder;
//		decimal=decimal/8;
//	}
//	while(octal!=0)
//	{
//		remainder=octal%10;
//		reverse=(reverse*10)+remainder;
//		octal=octal/10;
//	}
//	cout<<reverse;
//	return 0;
//}
