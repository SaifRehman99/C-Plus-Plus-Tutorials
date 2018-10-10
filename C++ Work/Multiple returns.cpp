#include<iostream>
using namespace std;
bool check(int);
main(){
	if(check(100))
	cout<<"Adult";
	else
	cout<<"Kid";
	
}
bool check( int  a){
	

	if(a>=18)
    return true;
    
	else
	return false;
}
