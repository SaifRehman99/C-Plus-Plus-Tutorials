#include<iostream>
using namespace std;
class Parent {
   public:
   
   int id_p;	
	
};
class Child : public Parent {
	
	public:
		int id_c;
};
main(){
	
	Child obj;
	
	obj.id_c=12;
	obj.id_p=34;
	cout<<"Parent id is ="<<obj.id_p;
	cout<<"Child id is ="<<obj.id_c;
	
}
