#include<iostream>
using namespace std;
class distan{
	private:
	int feet,meter;
	public:
	distan(){
		feet=0;
		meter=0;

		
	}
	distan(int f, int m){
		feet=f;
		meter=m;
	}
	void get(){
		cout<<"Enter Feet =";
		cin>>feet;
		cout<<"Enter Meter =";
		cin>>meter;
	}
	void display(){
		cout<<feet;
		cout<<meter;
	}
     distan operator + (distan d2) const;
};
distan distan::operator + (distan d2) const {
	int f,m;
	f=feet + d2.feet;
	m=meter + d2.meter;
	return distan(f,m);
	   return distan(f,m);
}
main(){
	distan d1,d3,d4;
	d1.get();
	distan d2(2,3);
	d3=d1+d2;
	d4=d3+d1+d2;
	d3.display();
	d4.display();
	
}
