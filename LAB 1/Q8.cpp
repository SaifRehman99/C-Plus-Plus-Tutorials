#include<iostream>
using namespace std;

main()
{
	int num_of_guest,num_of_chairs,result=1;
	cout<<"ENTER NUMBER OF CHAIRS";
	cin>>num_of_chairs;
	cout<<"ENTER NUMBER OF GUESTS";
	cin>>num_of_guest;                      
	
	for(int i=1;i<=num_of_chairs;i++)
	{
		result=result*num_of_guest;
		num_of_guest--;
	}
	cout<<"Result is="<<result;
}
