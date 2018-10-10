#include<iostream>
using namespace std;
class circle{
	private:
	float r,c,a;
	public:
	circle(){
		r=0;
		c=0;
		a=0;
	}
	void getdata(){
		cout<<"Enter Radius = ";
		cin>>r;
		cout<<endl;
		a=3.142*r*r;
		c=2*3.142*r;
		
	}
	void display(){
		cout<<"Area = "<<a;
		cout<<endl;
		cout<<"Circumference = "<<c;
		cout<<endl;
	}
};
main(){
	circle c;
	c.getdata();
	c.display();
	
}
