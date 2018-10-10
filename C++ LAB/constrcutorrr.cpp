#include<iostream>
using namespace std;
class box {
	public:
		box(){
			cout<<"This is box";
		}
		int length;
		
	void getlength(int l){
		length=l;
	
	}
	void print(){
		cout<<endl<<length;
		
	}
};
main(){
	
    box b1;
    b1.getlength(23);
    b1.print();
	
}
