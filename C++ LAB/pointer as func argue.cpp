#include<iostream>
using namespace std;
int add(int a, int b){
    
    return a+b;
}
void passpt(int(*ptr_fnc)(int, int)){
	
	int res =(*ptr_fnc)(12,2);
	cout<<res;
}
void Passafunc(){
passpt(&add);
}
main(){
	Passafunc();
}
