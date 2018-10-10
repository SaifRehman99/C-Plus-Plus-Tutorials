#include<iostream>
using namespace std;

main()
{
	int num1,num2,num;
	char op;
	cout<<"ENTER THE NUMBER 1";
	cin>>num1;
	cout<<"ENTER THE NUMBER 2";
	cin>>num2;
	
	cout<<"ENTER THE OPERATOR";
	cin>>op;
	

	switch(op)
	{
		case'+':
		{
			num=num1+num2;
			cout<<"ADDITION IS=" <<num;
			break;
		}
		
		case'-':
		{
			num=num1-num2;
			cout<<"SUBTRACTION IS=" <<num;
				break;
		}
		
		case'*':
		{
			num=num1*num2;
			cout<<"MULTIPICATION IS=" <<num;
				break;
		}
		
		case'/':
		{
			num=num1/num2;
			cout<<"DIVISION IS=" <<num;
				break;
		}
		
		default:
		{
			
			cout<<"ERROR";
			
		}
	}
	
}
