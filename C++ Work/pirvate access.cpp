#include<iostream>
using namespace std;
class Human{
	private:
		int age;
		int getage(){
			return age-2;
		}
    public :
	
	void display(){
		cout<<"My age is ="<< getage();
		
	}
	void setage(int x){
		age= x;
	}
};
main(){
	
	Human ahmed;
	ahmed.setage(10);
	ahmed.display();
}
