#include<iostream>
using namespace std;
class value{
	int a,b;
	public:
		value(){
			a=0;
			b=0;
		}
		value(int x){
			a=b=x;
		}
		value(int x, int y){
			a=x;
			b=y;
		}
		void disp(){
			cout<<"a ="<<a;
			cout<<"b ="<<b;
		}
};
main(){
	
	value v;
	value v1(23);
	value v2(34,45);
	v.disp();
	v1.disp();
	v2.disp();
	
	
}
