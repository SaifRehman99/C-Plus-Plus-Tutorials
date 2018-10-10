#include<iostream>
using namespace std;
main(){
	int b,p,r=1;
	
	cout<<"Enter Base = ";
	cin>>b;
	cout<<"Enter Power =";
	cin>>p;
	
	while(p!=0){
		r=r*b;
		p--;
	}
	cout<<r;
	
	
	
}
