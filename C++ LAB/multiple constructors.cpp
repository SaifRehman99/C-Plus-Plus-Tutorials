#include<iostream>
using namespace std;
class Const{
	private:
		int x,y;
	public:
		Const(int a , int b){
			(*this).x=a;
			(*this).y=b;
		}
		Const(int s){
			x=s;
			y=s;
		}
		void display(){
			cout<<x<<endl<<y;
		}
	
};
main(){
	
	Const n(12,23);
	n.display();
	Const n1(33);
	n1.display();
}
