#include<iostream>
using namespace std;
main(){
	int num1,num2,*p1,*p2;
	
	num1=2;
	num2=3;
	
	p1=&num1;
	p2=&num2;
	
	*p1=10;
//	*p2=*p1;
//	p1=p2;
//	*p1=20;
	*p2=30;
	
	cout<<num1<<" "<<num2;
	
}
