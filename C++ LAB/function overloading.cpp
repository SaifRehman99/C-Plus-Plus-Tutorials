#include<iostream>
using namespace std;
class function {
	
	
	public:
		
		void func(int x){
			cout<<"The value of x ="<<x<<endl;
		}
		void func(double x){
			cout<<"The value of x is ="<<x<<endl;
		}
		void func(int x, int y){
			
			 cout<<"The value of x and y is = "<<x<<" , "<<y;
		}
	 	
};
main(){
	
	
	function obj;
	obj.func(89);
	obj.func(34999999);
	obj.func(45,65);
	
}
