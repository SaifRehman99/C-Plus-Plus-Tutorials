#include<iostream>
using namespace std;
class Shape {
	   
	   public:
	   	
	   	int height , width ;
	
	public :
		
		void setheight (int h){
			
			height=h;
		}
		
		void setwidth (int w){
			
			width = w;
		}
	
	
};
class Cost {
	
	public:
		
		int getcost (int area){
			
			return area * 10;
		}
	
	
};

class Rectangle : public Shape , public Cost {
	public:
	int getdata(){
		return (height *width);
	}
};
main(){
	
	Rectangle r1;
	
	r1.setheight(10);
	r1.setwidth(20);
	
	cout<<"Area is = "<<r1.getdata();
	cout<<"Total cost is ="<<r1.getcost(r1.getdata());
	
}
