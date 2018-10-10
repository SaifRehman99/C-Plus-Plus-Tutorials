#include<iostream>
#include<stdio.h>
using namespace std;

class distances{
	private:
		int feet, meter;
		public:
	distances(){
		feet=0;
		meter=0;
	}
	public:
		void get(){
		cout<<"Enter feet: "<<endl;
		cin>>feet;
		cout<<"Enter meter: "<<endl;
		cin>>meter;
		}
	distances(int f,int m){
		feet=f;
		meter=m;
	}
	void display(){
		cout<<feet<<"Feet "<<meter<<" Meter"<<endl;
	}
	void add(distances d1, distances d2){
		feet=d1.feet+d2.feet;
		meter=d1.meter+d2.meter;
	}	
	
	
};


  int main(){
  	distances d1,d2,d3;
  	d1.get();
  	d2.get();
  	d3.add(d1,d2);
  	d3.display();
  }

