#include<iostream>
using namespace std;
main(){
	   int n,x,r,s=0;
	   
	   cout<<"Enter anu Number to Reverse it = ";
	   cin>>n;
	   
	   x=n;
	   
	   while(x!=0){
	   	
	        r=x%10; //123=3 //12=2 //1=1
	        s=s*10+r;  //30
	        x=x/10;  //123=12 //12=1//1=0
	   	  
	   }
	   cout<<"Reverse of "<<n<<"="<<s;
	
	
}
