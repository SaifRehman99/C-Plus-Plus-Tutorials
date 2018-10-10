#include<iostream>
using namespace std;
class Box{
	public:
		int Length;
			int i;
		
		Box(){
			cout<<endl<<"Constructor";
		}
		void getlength(int l){
			Length=l;
		}
		Box(Box const &ok){
			i=ok.Length;	
		}
		void done(){
			cout<<i;
		}
		void print(){
			cout<<endl<<ok.done();
		}
};
main(){
	Box b(10);
	b.print();
}
