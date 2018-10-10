#include<iostream>
using namespace std;
void swap(int &,int &);
main(){
	
	int a,b;
	
	cout<<"Enter Value of a =";
	cin>>a;
	cout<<"Enter value of b =";
	cin>>b;
	
	cout<<endl<<"Before Swapping="<<a<<b;
	swap(a,b);
	cout<<endl<<"After swapping ="<< a<<b;
	
}
void swap( int &f, int &g){
	
	
	int temp;
	
	temp=f;
	f=g;
	g=temp;
	
}
