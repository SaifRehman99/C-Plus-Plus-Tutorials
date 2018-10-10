#include<iostream>
using namespace std;
int sub(int a, int b){
	return a-b; 
}
main(){
	
	int (*ptr_fnc)(int,int)=NULL;
	ptr_fnc=&sub;
	int res=(*ptr_fnc)(10,2);
	cout<<res;
	
	
	
	
	
}
