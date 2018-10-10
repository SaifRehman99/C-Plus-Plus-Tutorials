#include<iostream>
using namespace std;

void add(int , int );

int ret_add(int ,int );
main(){
	  int r;
//	  add(100,20);
	  r=ret_add(200,400);
	  cout<<r;
	  	
}
void add(int a , int b){
	
	cout<<a+b;
}
int ret_add(int a ,int b){
	
	return a+b;
}
