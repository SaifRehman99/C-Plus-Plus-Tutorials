#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class circle 
{
	private:
		float radius,area,circumference;
	public:
		circle()
		{
			radius=0,area=0,circumference=0;
		}
		circle(int ra):radius(ra)
		{
		}
		void Area(float rad)
		{
			radius=rad;
			area=3.14*radius*radius;
			cout<<"the area of circle is "<<area<<endl;
		}
		void Circumference(float rad)
		{
			radius=rad;
			circumference=2*3.14*radius;
			cout<<"the circumference of circle is "<<circumference<<endl;
		}
};
int main()
{
	circle c1;
	int a,rad;
	while(1)
	{
		cout<<"enter 1 for area and circumference enter 0 to exit"<<endl;
		cin>>a;
		if(a==0)
		break;
		else if(a==1)
		{
			cout<<"enter radius ";
			cin>>rad;
			c1.Area(rad);
			c1.Circumference(rad);
		}
	}}
