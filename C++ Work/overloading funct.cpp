#include<iostream>
using namespace std;
int multi(int );
int multi(int,int );
main(){
	
	int s,a,b;
	
	cout<<"Enter a Number to calculate its square ="<<endl;
	cin>>s;
	cout<<"Square = "<<multi(s);
	cout<<endl<<"Enter two Numbers="<<endl;
	cin>>a>>b;
	cout<<"Add="<<multi(a,b);
	
	
	
}
int multi(int x){
	return(x*x);
}
int multi(int x, int y){
	return(x+y);
}
