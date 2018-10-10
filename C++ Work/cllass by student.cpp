#include<iostream>
using namespace std;
class student{
	private :
		int c, cpp, asmb;
    public:
	void input (){
		cout<<endl<<"Enter C Marks ="<<endl;
		cin>>c;
		cout<<"Enter Cpp Marks = "<<endl;
		cin>>cpp;
		cout<<"Enter Asmb Marks="<<endl;
		cin>>asmb;
	}	
  void add(student mid , student final){
  	c=mid.c + final.c;
  	cpp=mid.cpp + final.cpp;
  	asmb=mid.asmb + final.asmb;	          	
  }
 void display(){
 	cout<<c<<endl;
 	cout<<cpp<<endl;
 	cout<<asmb<<endl;
 }
};
main(){
	
	student mid ,final , total ;
    cout<<"Enter Mid Marks = " ;
	mid.input();
	cout<<"Enter Final Marks = ";
	final.input();
	cout<<endl<<"Total Marks:";
	total.add(mid,final);
	total.display();
}
