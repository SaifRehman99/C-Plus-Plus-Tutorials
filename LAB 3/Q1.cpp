#include<iostream>
#include<stdexcept>
using namespace std;
class Rectangle
{
	private:
		float length,width;
	public:
		Rectangle()
		{
			length=1;
			width=1;
		}
		void setlength(float l)
		{
			if(l>0.0)
			{
				length=l;
			}
			else throw 
			  invalid_argument("Length must be greatr than 0.0");
			
		}
		float getlength()
		{
			return length;
		}
		void setwidth(float w)
		{
			if(w>0.0)
			{
				width=w;
			}
			else throw invalid_argument("Width must be greatr than 0.0");
		}
		float getwidth()
		{
			return width;
		}
		void Calculation()
		{
			int area=getlength()*getwidth();
			cout<<"The AREA is:"<<area;			
			int perimeter=2*(getlength()+getwidth());
	cout<<"The PERIMETER is:"<<perimeter;
		}	
};
main()
{
	Rectangle R;
	R.setlength(2.0);
	R.setwidth(3.0);
	R.Calculation();
}
