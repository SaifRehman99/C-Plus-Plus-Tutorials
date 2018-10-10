#include<iostream>
using namespace std;
class Box {
	public:
		Box(){
			cout<<endl<<"Created";
		}
		~Box(){
			cout<<endl<<"End";
		}
		int length;
		void getl(int l){
			length=l;
		}
		void print(){
			cout<<endl<<length;
		}
};
main(){
	Box b1;
	b1.getl(23);
	b1.print();
	
}
