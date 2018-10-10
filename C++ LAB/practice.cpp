#include<iostream>
using namespace std;
class box{
	private :
		int length;
	public:
		box(int l){
			length=l;
		}
		box(box &b){
			length=b.length;
		}
		int dis(){
			return length;
		}
		~box(){
			
		}
};
void display(box b){
	cout<<b.dis();
}
main(){
	box b(10);
	box a=b;
	display(b);
    display(a);	
}
