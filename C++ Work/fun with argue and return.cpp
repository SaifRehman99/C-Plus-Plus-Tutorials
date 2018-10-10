#include<iostream>
using namespace std;
int sqr(int );
main(){
	int x,res;
	
	cout<<"Enter a Number =";
	cin>>x;
	
	res=sqr(x);
	
	cout<<"Result is "<<res;
	
}
int sqr(int a){
	
	return (a*a);
}
