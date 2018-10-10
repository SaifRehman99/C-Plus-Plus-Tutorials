#include<iostream>
using namespace std;
main(){
	int a=10;
	bool b=true;
	
	int *ptra;
	bool *ptrb;
	
	ptra=&a;
	ptrb=&b;
	
	cout<<"a =" <<*ptra<<endl;
	cout<<"b=" <<*ptrb;
	
	
	
}
