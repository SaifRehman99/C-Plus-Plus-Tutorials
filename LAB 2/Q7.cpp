#include<iostream>
using namespace std;

int reverse(int integer)
{
	if(integer==0)
	{
		return 1;
	}
	else
	{
	   
		int rem=integer%10; //12345=5
		cout<<rem<<endl;
		reverse( integer/10); //1234
		
	}
}
main()
{
	int integer;
	cout<<"ENTER A POSITIVE INTEGER NUMBER";
	cin>> integer;
	reverse(integer);
}
