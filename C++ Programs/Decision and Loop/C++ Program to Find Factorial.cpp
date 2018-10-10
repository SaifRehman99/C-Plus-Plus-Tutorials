#include<iostream>
using namespace std;
main(){
	    unsigned int x;
	    int i;
	    unsigned long long factorial=1;
	    
	    cout<<"Enter any NUmber to finds it factorial = "<<endl;
	    cin>>x;
	    
	     
	     for(i=1;i<=x;i++){
	     	factorial*=i;
		 }
		 cout<<"Factorial = " << factorial ;
	
}
