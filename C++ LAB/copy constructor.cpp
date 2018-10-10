#include<iostream>
using namespace std;
class point {
	public:
		int x, y;
	public:
		
		point (int x1, int x2){
			
			x=x1;
			y=x2;
		}
		point(const point &p2){
			x=p2.x;
			y=p2.y;
		}
		int getx(){
			return x;
		}
		int gety(){
			return y;
		}
};
main(){
	point p1(10,20);
	point p2=p1;
	cout<<p1.getx()<<endl;
	cout<<p2.getx()<<endl;
	cout<<p1.gety()<<endl;
	cout<<p2.gety();
}
