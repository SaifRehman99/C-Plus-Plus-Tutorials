#include<iostream>
using namespace std;
main(){
	    
	    int x1,x2,lcm;
	    
	    cout<<"Enter Two Numbers = ";
	    cin>>x1>>x2;
	    
	    while(x1!=x2){
	    	  
	    	  if(x1>x2){
	    	  lcm=x1;
	    	  x1=x1-x2;
			  }
	    	  else{
	    	  lcm=x2;
	    	  x2=x2-x1;
			  }
//			  lcm++;
	    	  
	    	  
		}    
	     cout<<"LCM ="<<x1 ;
	
}
