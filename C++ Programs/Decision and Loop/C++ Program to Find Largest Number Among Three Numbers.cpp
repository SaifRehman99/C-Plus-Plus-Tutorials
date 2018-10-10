#include<iostream>
using namespace std;
main()
{
int n1,n2,n3;

cout<<"Enter any Three Numbers = ";
cin>>n1>>n2>>n3;

if(n1>n2 && n1>n3)
cout<<"n1 is Greater";
else if(n2>n1&&n2>n3)
cout<<"n2 is Greater";
else
cout<<"n3 is Greater";
	
}
