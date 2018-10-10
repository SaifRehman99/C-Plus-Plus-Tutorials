#include<iostream>
using namespace std;
class test {
	
	private:
		int a, b;
	public:
		test (int x, int y){
			
			a=x;
			b=y;
		}
		
		disp(){
			
			cout<<"Value of a ="<<a;
			cout<<"Value of b ="<<b;
		}
	
	
};
main(){
	
	test t(1070,200);
	t.disp();
	
}
