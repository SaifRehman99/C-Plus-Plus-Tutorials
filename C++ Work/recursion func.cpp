#include<iostream>
using namespace std;
int fact(int );
main(){
	
	int x;
	cout<<"Enter a Number to Find its Factorial = ";
	cin>>x;
	
	cout<<endl<<"Factorial of "<<x<< "is ="<<fact(x);
	
}
int fact(int a){
	if(a==0){
		return 1;
	}
	return(a*fact(a-1));
	
}
