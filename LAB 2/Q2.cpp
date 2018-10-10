#include<iostream>
using namespace std;
int* divisor(int number)
{
	cout<<"DIVISOR OF "<<number<<" ARE ";
static	int M1[100];
	
	for(int i=1;i<=number;i++)
	{
		if (number%i==0)
		{
			M1[i]=i;
		}
	
	}
		return (M1);

}
main()
{
	int number;
	cout<<"ENTER THE NUMBER";
	cin>>number;
	int *M;
	 M=divisor(number);
	 
	for(int i=1;i<=number;i++)
	{
		if(M[i]!=0)
		cout<<M[i]<<" "<<endl;
	}

}

