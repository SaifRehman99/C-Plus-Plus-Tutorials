#include<iostream>
using namespace std;
main(){
      
	  int x,i;
	  bool prime=true;
	  
	  cout<<"Enter a Number =";
	  cin>>x;	
	  
	  for(i=2;i<=x-1;i++){
	  	  if(x%i==0)
	  	  prime=false;
	  	  break;
	  }
	  if(prime)
	  cout<<"Prime ";
	  if(prime==false)
	  cout<<"Not a Prime Number";
	  
  	
	
}
