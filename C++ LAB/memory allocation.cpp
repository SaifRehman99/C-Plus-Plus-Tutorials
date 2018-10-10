#include<iostream>
using namespace std;
main(){
	
   int i, n;
   int *p;
   
   cout<<"How many numbers you want = "<<endl;
   cin>>n;
   
   p = new int [n];
   
   for(i=0;i<n;i++){
   	cout<<"Enter Number ="<<i<<endl;
   	cin>>p[i];
   }
   	cout<<"You Entered =";
   
   for(i=0;i<n;i++){
      
      cout<<p[i]<<",";
   }
   delete []p;
   
   cout<<endl<<"After dellocation ,You deleted= "<<endl;
   
   for(i=0;i<n;i++){
   	cout<<p[i]<<endl;
   }
	
}
