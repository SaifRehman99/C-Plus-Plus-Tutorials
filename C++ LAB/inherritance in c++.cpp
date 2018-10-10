#include<iostream>
using namespace std;
class Shape {
	
	protected:
		
		int height;
		int width;
	public:
		
		void setheight(int h){
			height=h;
		}
		void setwidth(int w){
			width=w;
		}
};
class Rectangle:public Shape {
	
	public:
	int getresult(){
		   
		   return(height *width);
	}
};
main(){
	
	Rectangle rect ;
	
	rect.setheight(12);
	rect.setwidth(2);
	cout<<"Result is ="<<rect.getresult();
	
}
