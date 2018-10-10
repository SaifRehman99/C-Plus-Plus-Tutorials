#include<iostream>
using namespace std;
class box{
	
	private:
		int length;
	public:
		box(int l){
			cout<<"Constructor"<<endl;
			length=l;
		}
		box(box &n ){
			cout<<"Copy Constructor"<<endl;
			length=n.length;
			
		}
		~box(){
			cout<<"Destructor";
		}

int display(){
	return length;
}		

};
void display(box n){
	cout<<n.display();
}
main(){
	box a(10);
	display(a);
}
