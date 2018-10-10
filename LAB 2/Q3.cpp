#include<iostream>
using namespace std;
perfect_square(int number1,int number2)
{
	
	cout<<"Perfect square between "<<number1<<" and "<<number2<<" are"<<endl;
	for(int i=number1;i<number2;i++)
     {
     	for(int j=2;j<=i;j++)
     	{
     		if(j*j==i)
     		{
     			cout<<i<<endl;
     			break;
     	
			}
	    }
	 }
	
}

main()
{
	int number1,number2;
	cout<<"ENTER THE TWO NUMBERS"<<endl;
	cin>>number1;
	cin>>number2;
	perfect_square(number1,number2);
	
}
 
