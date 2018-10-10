#include<iostream>
using namespace std;
class complex{
	int a;
	
	public:
		void set(int x){
			a=x;
			
		}
		void show(){
			cout<<endl;
			cout<<"A ="<<a;
			cout<<endl;
		}
    
		complex operator++(int){
			complex i;
			i.a=a++;
			return i;
		}
};
main(){
	complex c1,c2;
	 c1.set(2);
	 c1.show();
	 c2= c1++;
	 c1.show();
	 c2.show();
	
	
}
