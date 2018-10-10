#include<iostream>
using namespace std;
main(){
	int a,&ref=a;
	
	a=99;
	
	cout<<"Value of a="<<a;
	cout<<"Value of ref="<<ref;
	
}
