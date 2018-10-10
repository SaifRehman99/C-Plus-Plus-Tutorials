#include<iostream>
using namespace std ;
main(){
	
	int firstnumber=0,secondnumber=1,nextnumber=0,n;
	
	cout<<"Enter Number of Terms = ";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		
		if(i==1){
		cout<< " "<< firstnumber ;
		continue;
		}
		if(i==2){
			cout<<" "<<secondnumber;
		   		continue;
		}
		 
		 nextnumber=firstnumber + secondnumber; //1 // 2 // 3
		 firstnumber=secondnumber; //1//1 //2
		 secondnumber=nextnumber; //1//2 //3
		  
		  cout<<" "<< nextnumber<<" ";
		
		
	}
	
	
}
