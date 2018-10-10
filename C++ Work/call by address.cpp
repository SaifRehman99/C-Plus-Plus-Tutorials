#include<iostream>
using namespace std;
void swap(int*,int *);
main(){
	
	int a,b;
	
	cout<<"Enter Two Numbers = ";
	cin>>a>>b;
	cout<<"Before swapping ";
	cout<<a<<" "<<b;
	 swap(&a,&b);
	
	cout<<endl<<"After swapping = ";
	cout<<a<<" "<<b;
	
}
void swap(int *x , int *y){
	
	int temp;
	
	temp=*x;
	*x=*y;
	*y=temp;
}
