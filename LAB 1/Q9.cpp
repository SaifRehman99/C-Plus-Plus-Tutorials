#include<iostream>
using namespace std;
main()
{
	int amount,total;
	cout<<"ENTER THE AMOUNT";
	cin>>amount;
	
	total=amount/100;
	cout<<"Notes of 100:"<<total;
	amount=amount-(total*100);
//	
	total=amount/50;
	cout<<endl<<"Notes of 50:"<<total;
	amount=amount-(total*50);
	
	total=amount/20;
	cout<<endl<<"Notes of 20:"<<total;
	amount=amount-(total*20);
	
	total=amount/10;
	cout<<endl<<"Notes of 10:"<<total;
	amount=amount-(total*10);
	
	total=amount/5;
	cout<<endl<<"Notes of 5:"<<total;
	amount=amount-(total*5);
	
	total=amount/2;
	cout<<endl<<"Notes of 2:"<<total;
	amount=amount-(total*2);
	
	total=amount/1;
	cout<<endl<<"Notes of 1:"<<total;
	
	
	
	
	
}
