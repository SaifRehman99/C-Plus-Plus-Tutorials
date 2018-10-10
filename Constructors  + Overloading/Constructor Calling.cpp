#include<iostream>
using namespace std;
class cons{
	
	public:
		int a;
	cons(int x){
		cout<<"Constructor is called!";
		a=x;
	}
	void disp(){
		cout<<endl<<a;
	}
};
main(){
	
	cons obj(34);
	obj.disp();
	
	
}
