#include<iostream>
using namespace std;
class Ob {
	
	private :
		int x , y ;
	public:
		Ob(int a , int b ){
			
			x=a;
			y=b;
			
		}
		int getx(){
			return x;
		}
		int gety(){
			return y;
		}

};
main(){
	Ob a(12,34);	
	cout<<a.getx()<<a.gety();
}
