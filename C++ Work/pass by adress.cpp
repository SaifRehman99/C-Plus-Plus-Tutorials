#include<iostream>
using namespace std;
void show(int *ptr);
main(){
	  
	  int age=10;
	  show(&age);
	
	
	
	
}
void show(int *ptr){
	
	cout<<*ptr;
}
