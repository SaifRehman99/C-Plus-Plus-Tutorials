#include<iostream>
using namespace std;
class Distance
{
	private:
		int distance_meter;
	public:
		Distance()
		{
			distance_meter=5;
		}
		void setDistance(int d)
		{	
			distance_meter=d;
		}
		int getDistance()
		{
			return distance_meter;
		}
		void Display1()
		{
			cout<<"The distance in meter is:"<<getDistance();
		}
		void Calculation()
		{
			int x;
			x=getDistance()*3.28;
			cout<<endl<<"The distance in feet is:"<<x;
		}
		
};
main()
{
	Distance d1;
	d1.Display1();
	d1.Calculation();
	Distance d2;
	int x;
	cout<<endl<<"ENTER THE VALUE";
	cin>>x;
	d2.setDistance(x);
	d2.Display1();
	d2.Calculation();
}
