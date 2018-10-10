#include<iostream>
using namespace std;
int add();
main(){
	int res;
	
	res=add();
	cout<<"Result is ="<<res;
	
	
}
int add(){
	
	int a,b;
	
	cout<<"Enter two Numbers = ";
	cin>>a>>b;
	return(a+b);
}
