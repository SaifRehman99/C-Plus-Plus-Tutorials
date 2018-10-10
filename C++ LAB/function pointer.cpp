#include<iostream>
using namespace std;
int add(int a, int y){
	return (a+y);
}
int sub(int a , int y)
{
return (a-y);	
}
int op(int a, int y,int(*fntocall)(int, int )){
	int g;
	g=(*fntocall)(a,y);
}
main(){
	
	int a, s;
	
	a=op(10,9,add);
	cout<<a;
	
	
	
	
	
	
	
	
}
