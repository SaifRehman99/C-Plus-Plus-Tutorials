#include<iostream>
using namespace std;
int rec(int);
int rec2(int);
int rec(int n){
     while(n!=1){
	return rec2(n);
	 } 

}
int rec2(int n){
	
	return rec(n-1);
	
}
main(){	
	int f;
	f=rec(5);
	cout<<f;
}
