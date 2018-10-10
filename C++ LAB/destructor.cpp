#include<iostream>
using namespace std;
class hello {
	
	public :
		int length;
	public:
		hello(){
			cout<<"Constructor is created"<<endl;
		
		}
		~hello(){
			cout<<"Destructor is created ";
		}
		
};
main(){
	
	hello h;
	h.setlength(3);
	h.getlenght();	
}
