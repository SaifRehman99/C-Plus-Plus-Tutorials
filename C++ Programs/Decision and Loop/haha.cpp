#include<iostream>
using namespace std;
main(){
	
	int n,fn=0,sn=1,nn,i;
	
	cout<<"Enter Your Number =";
	cin>>n;
	
	for(i=1;i<=n;i++){
		if(i==1){
		cout<<fn;
		}
		if(i==2){
			cout<<" "<<sn;
		}
		nn=fn+sn;
		fn=sn;
		sn=nn;
		
		cout<<" "<<nn;
	}
	
	
}
