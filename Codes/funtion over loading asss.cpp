#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;
class Areao
{
	private:
		float aoc,aor,radius;
	public:
			Areao()
		{
			radius=0,aoc=0,aor=0;
		}
		Areao(int ra):radius(ra)
		{
		}
		void Area(float rad)
		{
			radius=rad;
			aoc=3.14*radius*radius;
			cout<<"the area of circle is "<<aoc<<endl;
		}
		void Area(float length,float width)
		{
			
			aor=length*width ;
			cout<<"the area of rectangle is "<<aor<<endl;
		}
};
int main()
{
	Areao a1;
	int a;float rad,l,w;
	while(1)
	{
		cout<<"enter 1 for area of circle and 2 for area of rectangle and  enter 0 to exit"<<endl;
		cin>>a;
		if(a==0){
		puts("exit now ");
		break;}
		else if(a==1)
		{
			cout<<"enter radius ";
			cin>>rad;
			a1.Area(rad);
			
		}
		else if(a==2)
		{
			cout<<"enter length ";
			cin>>l;
			cout<<"enter width ";
			cin>>w;
			a1.Area(l,w);
		}
	}
}
