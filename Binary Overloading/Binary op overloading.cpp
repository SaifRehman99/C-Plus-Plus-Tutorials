#include<iostream>
using namespace std;
class complex{
	
	int a , b;
	
	public:
		void set(int x, int y){
			a=x;
			b=y;
		}
		void show(){
			cout<<"A ="<<a;
			cout<<endl;
			cout<<"B ="<<b;
			 cout<<endl;
			 
		}
		complex operator +(complex c){
			complex temp;
			
			temp.a = a+c.a;
			temp.b = b+c.b;
			return temp;
		}
};
main(){
	
	complex c1,c2,c3;
	
	c1.set(3,4);
	c2.set(5,6);
	c3=c1+c2;
	c3.show();
	
	
}
