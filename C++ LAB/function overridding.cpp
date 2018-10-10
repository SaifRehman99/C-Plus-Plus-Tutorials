#include<iostream>
using namespace std;
class parent {
	
	public:
		
		void print (){
			
			cout<<"This is Parent class"<<endl;
		}
};
class child: public parent {
	
	public:
		void print(){
			
			cout<<"Thi is child class";
		}
};
main(){
	
	parent obj;
	child  obj1;
	
	obj.print();
    obj1.print();
}
