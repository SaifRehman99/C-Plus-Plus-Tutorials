#include<iostream>
using namespace std;
void digit_name(int num)
{
	if(num==1)
	{
		cout<<"One";
	}
	else if(num==2)
	{
		cout<<"Two";	
	} 
	else if(num==3)
	{
		cout<<"Three";	
	} 
	else if(num==4)
	{
		cout<<"Four";	
	}
	 else if(num==5)
	{
		cout<<"Five";	
	} 
	else if(num==6)
	{
		cout<<"Six";	
	}
	 else if(num==7)
	{
		cout<<"Seven";	
	} 
	else if(num==8)
	{
		cout<<"Eight";	
	} 
	else if(num==9)
	{
		cout<<"Nine";	
	}
	 
}
main()
{
	int num;
	cout<<"Enter the number";
	cin>>num;
	if(num>=1 && num<=9)
	{
		digit_name(num);
	}
	else 
	{
	cout<<"DIGIT ERROR"<<endl;	
	} 
	
}

