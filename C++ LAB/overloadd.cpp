#include<iostream>
using namespace std;
class Add {
	private:
		int a,b;
	public:
		void input(){
			cout<<"Enter Number =";
			cin>>a;
			cout<<endl;
			cout<<"Enter Number";
			cout<<endl;
			cin>>b;
		}
		Add operator + (Add const &n){
			Add s;
			s.a = a * n.a;
			s.b = b * n.b;
			return s;
		}
		void print(){
			cout<<a<<","<<b;
		}
};
main(){
	Add a ,b ,c;
	a.input();
	b.input();
	c=a+b;
	c.print();
	
}
