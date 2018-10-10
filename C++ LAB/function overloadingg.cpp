#include<iostream>
using namespace std;
class overload {
	public:
		void print(int x){
			cout<<endl<<x;
		}
		void print(double y){
						cout<<endl<<y;
		}
		void print(char* c){
						cout<<endl<<c;
		}
};
main(){
	overload o;
	o.print("hello");
	o.print(23.45);
	o.print(34);
	
}
