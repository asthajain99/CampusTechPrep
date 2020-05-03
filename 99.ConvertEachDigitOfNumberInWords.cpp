//Write a program to convert each digit of a number in words.
#include<iostream>
using namespace std;
int main()
{
	int num,sum=0,remainder,temp;
	cout<<"Enter the number:";
	cin>>num;
	temp=num;
	while(num>0)
	{
		remainder=num%10;
		sum=(sum*10)+remainder;
		num=num/10;
	}
	num=sum;
	cout<<temp<<" = ";
	while(num>0)
	{
		remainder=num%10;
		switch(remainder)
		{
			case 0:
				cout<<"zero ";
				break;
				
				case 1:
					cout<<"one ";
					break;
					
					case 2:
						cout<<"two ";
						break;
						
						case 3:
							cout<<"three ";
							break;
							
							case 4:
								cout<<"four ";
								break;
								
								case 5:
									cout<<"five ";
									break;
									
									case 6:
										cout<<"six ";
										break;
										
										case 7:
											cout<<"seven ";
											break;
											
											case 8:
												cout<<"eight ";
												break;
												
												case 9:
													cout<<"nine ";
													break;
													
													default:
														cout<<"Invalid Input";
														break;
		}
		num=num/10;
	}
	return 0;
}

//OUTPUT
//Enter the number:123456789
//123456789 = one two three four five six seven eight nine
//--------------------------------
//Process exited after 6.585 seconds with return value 0
//Press any key to continue . . .
