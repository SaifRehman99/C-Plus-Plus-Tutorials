#include<iostream>
using namespace std;
void is_prime(int number)
{
	for(int i=2;i<=number;i++)
	{
	int count=1;
	for(int j=2;j<=i/2;j++)
	{
	if(i%j==0)
	 {
	   count=0; 
	   break;
     }
    }
	if(count==1)
	{
		cout<<i<<endl;
	}

}}
int main()
{
	int number,i;
	cout<<"ENTER A NUMBER";
	cin>>number;

	
	is_prime(number);
}


