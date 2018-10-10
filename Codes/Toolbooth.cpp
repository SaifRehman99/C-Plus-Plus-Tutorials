#include<iostream>
#include<conio.h>
using namespace std;
class toolboth{
	private:
		int cars;
		float cash;
		public:
			 toolboth(){
				cash=0,cars=0;
			}
		void paycar(){
			cars++;
			cash=cash+0.50;
		}
		void nopaycar(){
			cars++;
		}
		void showdata(){
			cout<<"Total cars: "<<cars<<endl;
			cout<<"Total cash "<<cash<<endl;
		} 	
	
};

 int main(){
 	toolboth c1;
 	int x;
 	cout<<"Press 1 for Car increment and Pay car."<<endl;
 	cout<<"Press 2 for Car increment and no pay car."<<endl;
 	cout<<"Press 0 for display result of total car and total cash"<<endl;
 	do{
 	cin>>x;
 	if(x==1){
 		c1.paycar();
	 }
	 if(x==2){
	 	c1.nopaycar();
	 }
 		
 		
	 }while(x!=0);
	 c1.showdata();
	 return 0;
 }
