#include<iostream>
using namespace std;
class complex{
	int a,b;
	
	public:
		 complex(int x , int y){  //parameterized constructor
		 	a= x;
		 	b=y;
		 	cout<<"Constructor is called !";
		 }
		 complex(){  //default constructor
		 	
		 }
		 complex(complex &z){
		 	
		 	a=z.a;
		 	b=z.b;
		 	
		 }
		 void display(){
		 	cout<<"A ="<<a;
		 	cout<<endl;
		 	cout<<"B ="<<b;
		 }
		 
		 
};
main(){
	
	complex a(12,23);
	complex b(a);
	complex c;
	a.display();
	b.display();
	c.display();
	
}
