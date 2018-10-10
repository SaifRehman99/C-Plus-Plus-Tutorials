#include<iostream>
using namespace std;
void array(int *start , int *end);
main(){
	  int num[]={1,2,3,4,5,6,7,8,9};
	  array(num,num+10);
	
}
void array(int *start , int *end){
	int *ptr;
	for(ptr=start;ptr!=end;ptr++){
		cout<<*ptr<<endl;
		
	}
}
