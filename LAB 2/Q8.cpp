#include<iostream>
using namespace std;

int countdigit(int integer)
{
	static int count=0;
	if(integer==0)
	return 1;
	else
		{
		int rem=integer%10;
	    count++;
		countdigit( integer/10);
        }
    return count;    
}
main()
{
	int integer;
	cout<<"ENTER A POSITIVE INTEGER";
	cin>>integer;
	int M=countdigit(integer);
	cout<<"DIGITS ARE "<<M;
	
}

