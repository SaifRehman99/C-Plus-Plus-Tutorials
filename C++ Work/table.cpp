#include<iostream>
using namespace std;
main(){
	
	int num,table,i,res;
	
	cout<<"Enter Table Number =";
	cin>>table;
	cout<<"Enter From Where You Want =";
	cin>>num;
	
	for(i=0;i<=num;i++){
		
		res=table*i;
	cout<<table<<"*"<<i<<"="<<res<<endl;
	}
	
	
	
	
}
