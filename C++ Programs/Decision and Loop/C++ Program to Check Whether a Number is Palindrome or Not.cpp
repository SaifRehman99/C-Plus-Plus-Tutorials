#include<iostream>
using namespace std;
main(){
	   
 	int x,n,s=0,r;
 	
 	cout<<"Enter a Number to check Palindrome =";
 	cin>>x;
 	
 	n=x;
 	while(n!=0){
 		r=n%10;
 		s=s*10+r;
 		n=n/10;
 		 
	 }
	   if(s==x)
	   cout<<"YEs,Its a Palindrome!";
	   else
	   cout<<"NO";

	
}
